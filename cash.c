// cs50/problems/2020/x/cash
// By~ Sanu Raj
// github username: rajsanu
# include<cs50.h>
# include<math.h>
# include<stdio.h>

int main(void)
{
    //ask for dollars owed
     float dollars = get_float("dollars:   ");

     //reprompt if -ve value for dollars is entered
     while(dollars<0)
     {
        dollars = get_float("dollars:   ");
     }

     //convert dollars into cents(call it n)
     int n = round(dollars * 100);

     //min coins when cents<5
     if(n<5)
       {
         printf("minimum coins: ,%i\n",n);
       }

     // min coins when 5<cents<10
     else if(n<10)
       {
         int a = n % 5;
         printf("minimum coins: ,%i\n", a+1);
       }
       
       // 10<cents<25
      else if(n<25)
       {
        int b = n/10;
        int c = n%10;
        if(c<5)
           { 
              printf("minimum coins: ,%i\n", b+c);
           }
        
            else
         {
           int d = c-4;
           printf("minimum coins: ,%i\n", b+d);
         }
        }

        // cents > 25
        else 
        {
           int e = n/25;
           int f = n%25;
           if(f<5)
           {
               printf("minimum coins: ,%i\n",e+f);
           }

           else if(f<10)
           {
               int g = f%5;
               printf("minimum coins:  ,%i\n",e+g+1);
           }
           else
           {
               int h = f/10;
               int i = f%10;
               if(i<5)
               {
                   printf("minimum coins:  ,%i\n",e+h+i);
               }
               
               else
               {
                   int j = i-4;
                   printf("minimum coins:  ,%i\n",e+h+j);
               }
           }

           
       }

    }



