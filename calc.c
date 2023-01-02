#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc , char *argv[]){

    int i,y,x,p;
    int equalA;
    int equalAdd;
    int equalM;
    int equalMulitply;
    int sum=0;
    for(i=1; i<=argc-1; i++)
    {
        equalM= strcmp("-m",argv[i]);
        equalMulitply= strcmp("--Multiply",argv[i]);
        equalA= strcmp("-a",argv[i]);
        equalAdd= strcmp("--add",argv[i]);
        if (equalA==0 || equalAdd==0|| equalM==0 || equalMulitply==0)
        {
            y= atoi(argv[i+1]);
            x= atoi(argv[i+2]);
            if(equalM==0 || equalMulitply==0)
            {
                p=x*y;
                printf("%d * %d = %d\n",x,y,p);
            }
            else
            {
                sum=x+y;
                printf("%d + %d = %d\n",x,y,sum);
            }
            
            
            
        }
        else
        {
            if(atoi(argv[i])==y || atoi(argv[i])==x)
            {
                continue;
            }
            else
            {
                printf("correct syntax is: calc <option> <num1,num2>\n");
                break;
            }
        }
       
    }
    

    
    return 0;
}