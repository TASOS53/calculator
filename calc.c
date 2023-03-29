#include"calcFunctions.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>





int main(int argc , char *argv[]){

    int i, temp1,temp2;
    float y=0,x=0;
    int equalA;
    int equalAdd;
    int equalM;
    int equalMulitply;
    float addition_result;
    float multiplication_result;
    

    i=1;
    while(i<=argc-1) //Όσο το ι είναι μικρότερο ή ίσο με τον αριθμό των ορισμάτων που έχουν δοθεί απο τον χρήστη
    {
        equalM= strcmp("-m",argv[i]);
        equalMulitply= strcmp("--multiply",argv[i]);
        equalA= strcmp("-a",argv[i]);
        equalAdd= strcmp("--add",argv[i]);
        if (equalA==0 || equalAdd==0|| equalM==0 || equalMulitply==0)//Η strcmp(); επιστρέφει 0 , αν βρεθεί ο αντίστοιχος χαρακτήρας που αναζητώ
        {
            //get first number
            
            temp1 = my_atoi(argv[i+1],&y) ;
            if (temp1==1)
            {
                printf("Wrong arguments has been inserted!!!\n");
                printf("The programm will be terminated");
                return 1;
            }
        
            //get second number
            temp2 = my_atoi(argv[i+2],&x);
            if (temp2==1)
            {
                printf("Wrong arguments has been inserted!!!");
                printf("The programm will be terminated");
                return 1;
            }



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
            
            i+=2; //skip next two arguments when user requestς addition or multiplication 
            
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




