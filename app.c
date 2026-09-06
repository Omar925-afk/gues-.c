#include <stdio.h>
#include <cs50.h>
int main(void)

{
           // متغير نوعه STRING لحفظ الاسم

          string name = get_string("what is ur name? ");   // بناخد الاسم ونحفظه في  string name

             char agree = get_char("do you agree? (y/n): ");  // بناخد متغير من نوع char  عشان نعرف اذا الشخص موافق او لا


if ( agree =='y' || agree == 'Y')


             {


                  printf ("you agreed\n");

             }
             else if (agree == 'n' ||  agree == 'N')

             {

                  printf ("you disagreed\n");


                return 0;

                }






           // بناخد متغير من نوع  intenger

       int x= get_int("enter a number: ");
       int y= get_int("enter another number: ");

         // بناخد متغير من نوع char  عشان نعرف العملية اللي هيتم تنفيذها
       char operation = get_char("enter an operation (+, -, *, /): ");
        if (operation == '+')
        {

              printf("%i\n", x+y);   // جمله الضباعه في حال نجاح شرط if



        }
              else if (operation == '-')

              {

                      printf("%i\n", x-y);



              }
                 else if (operation == '*')


                 {


                          printf("%i\n", x*y);



                 }



                      else if (operation == '/')

                      {

                              printf("%0.2f\n",(float) x/y);  // بناخد متغير من نوع float عشان لو فيه كسور في الناتج
}



}