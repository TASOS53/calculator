#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc , char *argv[]){

    int i,y,x,p,new_digit,current_number=0;
    int equalA;
    int equalAdd;
    int equalM;
    int equalMulitply;
    int sum=0;
    char ch;

    for(i=1; i<=argc-1; i++)
    {
        equalM= strcmp("-m",argv[i]);
        equalMulitply= strcmp("--Multiply",argv[i]);
        equalA= strcmp("-a",argv[i]);
        equalAdd= strcmp("--add",argv[i]);
        if (equalA==0 || equalAdd==0|| equalM==0 || equalMulitply==0)
        {
            ch=*argv[i+1];
            current_number=0;
            while(ch!='\0')
            {   
                new_digit= ch - '0' ; // convert digit to integer
                current_number = (current_number*10) + new_digit;
                ch= *(argv[i+1] +1);
            }
            y=  current_number;
            current_number=0;
            ch=*argv[i+2];
            while(ch!='\0')
            {   
                new_digit= ch - '0' ; // convert digit to integer
                current_number = (current_number*10) + new_digit;
                ch= *(argv[i+2] +1);
            }
            x=  current_number;


            if(equalM==0 || equalMulitply==0)
            {
                p=y*x;
                printf("%d * %d = %d\n",y,x,p);
            }
            else
            {
                sum=y+x;
                printf("%d + %d = %d\n",y,x,sum);
            }
            
           i+=2; //skip next two arguments when user request addition or multiplication 
            
        }
        else
        {
                printf("correct syntax is: calc <option> <num1,num2>\n");
                break;
        }
       
    }
    

    
    return 0;
}