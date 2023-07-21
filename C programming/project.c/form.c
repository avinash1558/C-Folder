#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define ESC 27
#define F1 59
#define F2 60
COORD coord = {0, 0};
void gotoxy(int x, int y)

{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void singup(void);
void login(void);
struct
{
    char password[20];
    char username[20];
} s;
FILE *p;
int main()
{
    int c;
    while (1)
    {
        system("cls");
        gotoxy(20, 5);
        printf("____Programming Made Easy_____");
        gotoxy(28, 7);
        printf("Your Welcome Here............");
        gotoxy(28, 9);
        printf("press F1 for Login");
        gotoxy(28, 11);
        printf("press F2 for Singup");
        gotoxy(28, 13);
        printf("press ESC for Exit");
        gotoxy(20, 15);
        printf("____*******____\n");
        getch();
        c = getch();
        switch (c)
        {
        case F1:
            system("cls");
            gotoxy(10, 14);
            for (int i = 0; i < 40; i++)
            {
                printf("_");
                Sleep(40);
            }
            singup();
            break;
        case ESC:
            exit(0);
            break;
        
        default:
            break;
        }
    }
getch();
    return 0;
}
void login(){
    int a;
    char username[20];
    char pass[20];
    char chkp;
    char chku;
    system("cls");
    gotoxy(23,5);
    printf("_____Login Zone____");
    gotoxy(23,7);
    p=fopen("record.txt","r");
    printf("Enter Username:");
    gets(username);
    gotoxy(23,9);
    printf("Enter Password :");
    for (int i = 0; i < getch()!=13; i++)
    {
        pass[i]=c;
        printf("*");
    }
    pass[i]='\0';
    while (!feof(p))
    {
        /* code */
    }
    
    

    }