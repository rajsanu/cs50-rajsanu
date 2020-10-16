// cs50/problems/2020/x/mario/less
// ~pset1
// by ~ sanu raj
// github username: rajsanu

#include<stdio.h>
#include<cs50.h>


int main(void)
{
    // declaration of heights
    int heights;
    // Prompt user to get the value of "Heights"
    // Reprompt if value of "Heights" doesn't lie in 1-8
    do
    {
        heights = get_int("Heights:  ");
    }
    while (heights < 1 || heights > 8);
  
    // Iteration over "heights"
    for (int n = 0 ; n < heights ; n++)
    {
        //Printing spaces
        for (int m = 0 ; m < heights - n - 1 ; m++)
        {
            printf(" ");
        }
        //Printing hashes
        for (int l = 0; l < n + 1; l++)
        {
            printf("#");
        }
        printf("\n");
    }

}
