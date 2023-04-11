// to the program can add, delete update a book record.
// As of now students will not create any files but should use various iterative and decisional loops like for, if,else, switch case etc.
#include <stdio.h>
#include <conio.h>
#include <string.h>
// #include <time.h>

char mypass[10] = {"a"};
int book_count = 0;

struct libMang
{
    int UniqueBookId[5];
    char BookName[20];
    char AuthorName[20];

} book[10];

// void delay(unsigned int milliseconds)
// {

//     clock_t start = clock();

//     while ((clock() - start) * 1000 / CLOCKS_PER_SEC < milliseconds)
//         ;
// }

void password()
{
    int i = 0;
    char ch, pass[10], name[25];

    printf("Enter Your Name:");
    scanf("%c", &name[25]);

    printf("Enter Password:");

    while (ch != 13)
    {

        ch = getch();

        if (ch != 13 && ch != 8) // 13 for enter and 8 for backspace
        {

            printf("#");

            pass[i] = ch;
            i++;
        }
    }

    pass[i] = '\0';

    if (strcmp(pass, mypass) == 0)
    {
        printf("\n");
        printf("WELCOME %c\n", name[25]);
    }
}

void star()
{

    for (int i = 0; i < 2; i++)
    {
        printf("\t\t");
        for (int j = 0; j < 100; j++)
        {
            // delay(20);
            printf("*");
        }
        printf("\n");
    }
}

void welcome()
{
    char str[100] = "Library Management System By Hamid Hussain Siddiqui BCA(2021-24)";

    for (int i = 0; i < 30; i++)
    {
        // delay(20);
        printf("*");
    }

    for (int i = 0; i < strlen(str); i++)
    {
        // delay(20);
        printf("%c", str[i]);
    }

    for (int i = 0; i < 30; i++)
    {
        // delay(20);
        printf("*");
    }
}

void add()
{
    int a;

    struct libMang book[10];

    printf("How many books you want to add:-");
    scanf("%d", &a);

    if (a <= 10)
    {
        for (int i = 0; i < a; i++)
        {
            printf("Enter the UniqueBookId");
            scanf("%s", &book[i].UniqueBookId);
            printf("Enter the Book Name");
            scanf("%s", &book[i].BookName);
            printf("Enter the Author Name");
            scanf("%s", &book[i].AuthorName);
        }
    }
    else
    {
        printf("!!WARNING!!, Capacity Exceed");
        add();
    }

    book_count++;
}

void del()
{
}

void upDate()
{
}

void show()
{
    struct libMang book[10];

    for (int i = 0; i < book_count; i++)
    {
        printf("Unique Book Id: %2s\n", book[i].UniqueBookId);
        printf("Book Name: %2s\n", book[i].BookName);
        printf("Author Name: %2s\n", book[i].AuthorName);
    }
}

int main()
{
    int a = 0;

    printf("\n");

    star();
    welcome();
    printf("\n");
    star();

    password();

    printf("\nWhat Do You Want To Do In Library Management System:-\n");
    printf("Enter 1 to add book detail.\n");
    printf("Enter 2 to show all book detail.\n");
    printf("Enter 3 to update all book detail.\n");
    printf("Enter 4 to delete book.\n");
    printf("Enter 5 to show book count.\n");
    printf("Enter 0 to Exit.\n");

    scanf("%d", &a);

    while (a != 6)
    {

        switch (a)
        {
        case 1:
            add();
            break;
        case 2:
            show();
            break;
        case 3:
            upDate();
            break;
        case 4:
            del();
            break;
        case 5:
            printf("The Book Count Is %d\n", book_count);
            break;

        case 0:
            goto end;
        }
    }
end:;

    return 0;
}
