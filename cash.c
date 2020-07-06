# include<cs50.h>
# include<math.h>
# include<stdio.h>

int main(void)
{
    float dollars = get_float("dollars:...");
    int n = round(dollars * 100);

    if(n<5)
    {printf("%i",n);}

    else if(n<10)
    {
        int a = n % 5;
        printf("%i", a+1);
    }
    else if(n<25)
    {
        int b = n/10;
        int c = n%10;
        if(c<5)
       { printf("%i", b+c);}
       else
       {
           int d = c-4;
           printf("%i", b+d);
       }
    }
       else 
       {
           int e = n/25;
           int f = n%25;
           if(f<5)
           {printf("%i",e+f);}
           else if(f<10)
           {
               int g = f%5;
               printf("%i",e+g+1);
           }
           else
           {
               int h = f/10;
               int i = f%10;
               if(i<5)
               {printf("%i",e+h+i);}
               else
               {
                   int j = i-4;
                   printf("%i",e+j);
               }
           }

           
       }

    }



