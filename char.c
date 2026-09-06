#include <stdio.h>
#include <cs50.h>
int main(void)

    {

          char answer = get_char("do youagree ? (y/n): ");


           if (answer =='y' || answer == 'Y')


             {


                  printf ("you agreed\n");





             }


             else if (answer == 'n' ||  answer == 'N')

             {

                  printf ("you disagreed\n");

                return 0;
    }


    string name = get_string("what is ur name? ");

      int x = get_int("enter x: ");
      int y = get_int("enter y: ");

       char opertion = get_char("enter operation(+,-,*,/): ");

        if (opertion == '+')
        {



            printf("%i\n", x+y);

        }
        else if (opertion == '-')
        {

            printf("%i\n", x-y);

        }
        else if (opertion == '*')
        {

            printf("%i\n", x*y);

        }
        else if (opertion == '/')
        {

            printf("%0.2f\n",(float) x/y);

        }




}   hhhhhhh