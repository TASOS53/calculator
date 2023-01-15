#include<stdio.h>
#include<string.h>
#include<stdlib.h>




float my_atoi(char *s);
float add(float , float);
float multiply(float , float);

int main(int argc , char *argv[]){

    int i;
    float y,x;
    int equalA;
    int equalAdd;
    int equalM;
    int equalMulitply;
    float addition_result;
    float multiplication_result;
    

    i=1;
    while(i<=argc-1)
    {
        equalM= strcmp("-m",argv[i]);
        equalMulitply= strcmp("--multiply",argv[i]);
        equalA= strcmp("-a",argv[i]);
        equalAdd= strcmp("--add",argv[i]);
        if (equalA==0 || equalAdd==0|| equalM==0 || equalMulitply==0)
        {
            //get first number
            y = my_atoi(argv[i+1]);
            
            //get second number
            x= my_atoi(argv[i+2]);

            //calculate 
            if(equalM==0 || equalMulitply==0)
            {
                multiplication_result= multiply(x,y);
                printf("%f * %f = %f\n",y,x,multiplication_result);
            }
            else
            {
                addition_result= add(x,y);
                printf("%f + %f = %f\n",y,x,addition_result);
            }
            
            i+=2; //skip next two arguments when user request addition or multiplication 
            
        }
        else
        {
            printf("correct syntax is: calc <option> <num1,num2>\n");
            break;
        }
       i++;
    }
    return 0;
}


float my_atoi(char *s)
{
    float FinalNumber=0;
    float new_digit,current_number=0;
    int k;
    float Fcurrent_number=0;
    char ch ;
    int sign=1;
    float decimalConvert=0.1;
    ch=*s;
    k=1;
    if(ch=='-')
    {
        sign=sign*(-1);
        ch=*(s+1);
        k++;
    }
    while(ch!='\0' && ch!=',')
    {   
        new_digit= ch - '0' ; // convert digit to integer
        current_number = (current_number*10) + new_digit;
        ch= *(s+k);
        k+=1;
        

    }  

        if(ch==',')
        {
            new_digit=0;
            
            ch=*(s+k);
            while(ch!='\0')
            {
                new_digit=ch-'0'; 
                Fcurrent_number=Fcurrent_number + new_digit*(decimalConvert);
                decimalConvert=decimalConvert*(0.1);
                k++;
                ch= *(s+k);
                

            }
           
           
        }
   
    FinalNumber= current_number + Fcurrent_number;
    return (( FinalNumber)*(sign));

}

float add(float y , float x)
{ 
    float sum;
    sum=y+x;
    return sum;
    
}

float multiply(float x , float y)
{
    float p;
    p=x*y;
    return p;
}