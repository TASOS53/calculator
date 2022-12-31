#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc , char *argv[]){

    int i,y,x;
    int equalA;
    int equalAdd;
    int sum=0;
    for(i=1; i<=argc-1; i++)
    {
        equalA= strcmp("-a",argv[i]);
        equalAdd= strcmp("--add",argv[i]);
        if (equalA==0 || equalAdd==0)
        {
            y= atoi(argv[i+1]);
            x= atoi(argv[i+2]);
            sum=x+y;
            printf("num1 + num2 = %d\n",sum);
            break;
        }
        else
        {
            printf("correct syntax is calc -a <num1,num2>\n");
            break;
        }
       
    }
    

    
    return 0;
}