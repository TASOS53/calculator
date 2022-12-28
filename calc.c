#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc , char *argv[]){

    int i,y,x;
    int equalA;
    int sum=0;
    for(i=1; i<=argc-1; i++)
    {
        equalA= strcmp("-a",argv[i]);
        if (equalA==0)
        {
            y= atoi(argv[i+1]);
            x= atoi(argv[i+2]);
            sum=x+y;
            break;  
        }
        
    }
    
    if (equalA==0)
    {
        printf("num1 + num2 = %d",sum);

    }
    else
    {
        printf("correct syntax is calc -a <num1,num2>");
    }
    
    

    
    return 0;
}