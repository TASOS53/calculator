int my_atoi(char *s, float* u)
{   
    float new_digit,current_number=0;
    int k;
    float Fcurrent_number=0;
    char ch ;
    int sign=1;
    float decimalConvert=0.1;
    ch=*s;
    k=1;


    if (ch!='-' && (ch<'0'|| ch>'9') && ch!=',') return 1;  //σημαίνει οτι δεν δόθηκε ψηφίο και άρα είναι λάθος τα ορισματα του χρήστη!
 
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
        if (ch!='-' && (ch<'0'|| ch>'9') && ch!=','&& ch!='\0') return 1;
        k+=1;
        

    }  
     

    if(ch==',')
    {
        new_digit=0;
        ch=*(s+k);
        if (ch<'0'|| ch>'9') return 1;
        while(ch!='\0')
        {
            new_digit=ch-'0'; 
            Fcurrent_number=Fcurrent_number + new_digit*(decimalConvert);
            decimalConvert=decimalConvert*(0.1);
            k++;
            ch= *(s+k);
            if ((ch<'0'|| ch>'9') && ch!='\0') return 1;    

        }
           
           
    }
   
    *u = current_number + Fcurrent_number;
    return 0; // It will return 0 , in case the programm has been okay!

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

