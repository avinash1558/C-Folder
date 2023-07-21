#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
int height = 15, width = 15, gameover;
int x, y, fruitx, fruity, score, flag;
int tailx[100], taily[100], count = 0;
void setup()
{
    gameover = 0;
    x = width / 2;
    y = height / 2;
label1:
    fruitx = rand() % 15;
    if (fruitx == 0)
    {
        goto label1;
    }
label2:
    fruity = rand() % 15;
    if (fruity == 0)
    {
        goto label2;
    }
    score = 0;
}
void draw()
{
    system("cls");
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                printf("*");
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("0");
                }
                else if (i == fruitx && j == fruity)
                {
                    printf("f");
                }
                else
                {
                    int a = 0;
                    for (int k = 0; k < count; k++)
                    {
                        if (i == tailx[k] && j == taily[k])
                        {
                            printf("o");
                            a = 1;
                        }
                    }
                    if (a == 0)
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    printf("score=%d", score);
}
void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'w':
            flag = 3;
            break;
        case 'z':
            flag = 4;
            break;
        
        }
    }
}
void logic()
{
    int prevx = tailx[0];
    int prevy = taily[0];
    int prev2x, prev2y;
    tailx[0] = x;
    taily[0] = y;
    for (int i = 1; i < count; i++)
    {
        prev2x = tailx[i];
        prev2y = taily[i];
        tailx[i] = prevx;
        taily[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }

    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;
    default:
        break;
    }
    if (x < 0 || x > width || y < 0 || y < height)
    {
        gameover = 1;
    }
    for (int c = 0; c < count; c++)
    {
        if (x == tailx[c] && y == taily[c])
        {
            gameover = 1;
        }
    }
    if (x == fruitx && y == fruity)
    {
    label3:
        fruitx = rand() % 15;
        if (fruitx == 0)
        {
            goto label3;
        }
    label4:
        fruity = rand() % 15;
        if (fruity == 0)
        {
            goto label4;
        }
        score += 10;
        count++;
    }
}
int main()
{
    char b;
label5:
    setup();
    while (1)
    {
        draw();
        input();
        logic();
        Sleep(300);
        if (gameover == 1)
        {
            break;
        }
    }
    printf("\npress y to continue......\n");
    scanf("%c", &b);
    if (b == 'y' || b == 'Y')
    {
        goto label5;
    }
    return 0;
}