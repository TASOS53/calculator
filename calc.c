#include"calcFunctions.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>





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




