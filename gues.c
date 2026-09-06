#include <stdio.h>  // مكتبه عشان نقدر نستخدم دوال الادخال والاخراج
#include <stdlib.h> // مكتبه عشان نقدر نستخدم دوال توليد الارقام العشوائيه
#include <time.h>  // مكتبه عشان نقدر نستخدم دوال الوقت زي time() و srand() لتوليد الارقام العشوائيه
#include <cs50.h> // مكتبه عشان نقدر نستخدم دوال الادخال من المستخدم زي get_string و get_int و get_char
int main(void)
{
    //   رقم عشوائي
    srand(time(0)); // تهيئة مولد الأرقام العشوائية باستخدام الوقت الحالي كـ seed
    int secret_number = rand() % 20 + 1; // توليد رقم عشوائي بين 1 و 20

    string name = get_string("ادخل اسمك: "); // طلب من المستخدم إدخال اسمه وتخزينه في متغير name
     printf("hi %s\n", name); // عرض رسالة ترحيب بالمستخدم باستخدام اسمه

    int guess = 0;    // تخزين رقم صيغته integer
    int attempts = 0;  // تخزين عدد المحاولات

    printf(" i chose number from 1 to 20\n");
    printf(" try to guess it!\n");

    // حلقة اللعبة
    while (guess != secret_number)
    {
        printf("ادخل تخمينك: ");
        scanf("%d", &guess); // قراءة التخمين من المستخدم
        attempts++; // زيادة عدد المحاولات

        if (guess < secret_number)
        {
            printf("ur number is too low!\n");
        }
        else if (guess > secret_number)
        {
            printf("ur number is too high!\n\n");
        }
        else
        {

            printf("good job! You guessed the number %d in %d attempts.\n", secret_number, attempts);  // عرض رسالة نجاح مع الرقم الصحيح وعدد المحاولات
            printf("number of attempts: %d\n", attempts);
            printf("time taken: %d seconds\n", attempts);
        }
    }

    return 0; // إنهاء البرنامج بنجاح ونعيد تاني

}
