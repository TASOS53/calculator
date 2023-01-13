#include<stdio.h>
#include<string.h>
#include<stdlib.h>




int my_atoi(char *s);
int add(int , int);
int multiply(int , int);

int main(int argc , char *argv[]){

    int i,y,x;
    int equalA;
    int equalAdd;
    int equalM;
    int equalMulitply;
    int addition_result;
    int multiplication_result;
    

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
                printf("%d * %d = %d\n",y,x,multiplication_result);
            }
            else
            {
                addition_result= add(x,y);
                printf("%d + %d = %d\n",y,x,addition_result);
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


int my_atoi(char *s)
{
    int new_digit,current_number=0,k;
    char ch ;
    ch=*s;
    k=1;
    int sign=1;
    if(ch=='-')
    {
        sign=sign*(-1);
        ch=*(s+1);
        k++;
    }
    while(ch!='\0')
    {   
        new_digit= ch - '0' ; // convert digit to integer
        current_number = (current_number*10) + new_digit;
        ch= *(s+k);
        k+=1;
    }
    return ((current_number)*(sign));

}

int add(int y , int x)
{ 
    int sum;
    sum=y+x;
    return sum;
    
}

int multiply(int x , int y)
{
    int p;
    p=x*y;
    return p;
}