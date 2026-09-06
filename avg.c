#include <stdio.h>
#include <cs50.h>
int main (void)
{
 int n =3;

// مصفوفه ARRAYS


  int score[n];

  for(int i=0; i<n; i++)
    {
        score[i] =get_int("score: :");


    }

           printf("averge is %0.2f ", (float)  (score[0] + score[1]+score [2] )  *n );


}