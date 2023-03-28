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