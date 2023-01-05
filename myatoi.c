#include <stdio.h>



int main(void)
{
    int ch;
    int new_digit;
    unsigned int current_number=0;
    printf("Give me a random number\n");
    
    ch = getchar();
    while(ch != EOF ) //10 is the code for new line     
    {
        while(ch !='\n')
        {  
            new_digit= ch - '0' ;  //multiplication with minus one in order to receive the absolute value
            current_number = (current_number*10) + new_digit;
            ch=getchar();
        }
        printf("The number that you entered is %d\n",current_number);
        current_number=0;
        ch=getchar();
        
    }

   
    return 0;
}

/* Enter is a key, not a character, so it doesn't really have a value. 
       In some systems there is also a Return key and these keys may one give the line feed (ASCII 10), 
       the other carriage return (ASCII 13). In some systems they give out only one of them.
    */
  
  