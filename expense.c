#include <stdio.h>     // مكتبه عشان نقدر نستخدم دوال الادخال والاخراج
#include <cs50.h>      // مكتبه عشان نقدر نستخدم دوال الادخال من المستخدم زي get_string و get_int و get_char
#include <string.h>   // مكتبه عشان نقدر نستخدم دوال التعامل مع النصوص زي strlen و strcmp و strcpy

#define MAX_EXPENSES 100   // الحد الأقصى لعدد المصاريف التي يمكن تتبعها وعشان نغيرها مره واحده

typedef struct // تعريف هيكل بيانات لتخزين المصاريف ل كذا نوع بينات
{
    char name[50];
    float amount;


     // متغير من نوع float عشان نقدر نخزن مصاريف فيها كسور


} Expense;

void add_expense(Expense expenses[], int *count); // داله عشان نضيف مصاريف
void list_expenses(Expense expenses[], int count); // داله عشان نعرض المصاريف
void show_total(Expense expenses[], int count); // داله عشان نعرض اجمالي المصاريف

int main(void)
{
    Expense expenses[MAX_EXPENSES]; // اعمل مجموعه من المصفوفات وعددها الاقصي
    int count = 0;
    int choice;

    do  // حلقة تكرار لعرض القائمة حتى يختار المستخدم الخروج do loop

    {
        printf("\n=== Expense Tracker ===\n");  // عنوان البرنامج
        printf("1. Add expense\n");  // اختيار 1 لإضافة مصاريف

        printf("2. List expenses\n");       // اختيار 2 لعرض المصاريف
        printf("3. Show total\n");  // اختيار 3 لعرض اجمالي المصاريف
        printf("4. Exit\n");    // اختيار 4 للخروج من البرنامج
        printf("Choose: ");

        scanf("%d", &choice);
        getchar(); // إزالة الـ newline من الـ input buffer ال انتر بعد كتابه الرقم

        if (choice == 1)
        {
            add_expense(expenses, &count);
        }
        else if (choice == 2)
        {
            list_expenses(expenses, count);
        }
        else if (choice == 3)
        {
            show_total(expenses, count);
        }
        else if (choice == 4)
        {
            printf("Thank you for using Expense Tracker!\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    }
    while (choice != 4);

    return 0;
}

void add_expense(Expense expenses[], int *count)  // داله عشان نضيف مصاريف
{
    if (*count >= MAX_EXPENSES)
    {
        printf("Expense list is full.\n");
        return;
    }

    printf("Enter expense name: ");
    fgets(expenses[*count].name, 50, stdin);

    // إزالة newline الذي تضيفه fgets
    expenses[*count].name[strcspn(expenses[*count].name, "\n")] = '\0';

    printf("Enter amount: ");
    scanf("%f", &expenses[*count].amount);
    getchar();

    (*count)++;

    printf("Expense added successfully.\n");
}

void list_expenses(Expense expenses[], int count)
{
    if (count == 0)
    {
        printf("No expenses yet.\n");
        return;
    }

    printf("\nYour expenses:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d. %s - %.2f\n",
               i + 1,
               expenses[i].name,
               expenses[i].amount);
    }
}

void show_total(Expense expenses[], int count) // داله عشان نعرض اجمالي المصاريف
{
    float total = 0;

    for (int i = 0; i < count; i++)
    {
        total += expenses[i].amount;
    }

    printf("Total expenses: %.2f\n", total);
}
