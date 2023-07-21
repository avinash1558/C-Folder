#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main(){
    int h,m,s;
    int d=1000;//for delay of clock 1 second
    printf("Set time :\n");
    scanf("%d",&h);
    scanf("%d",&m);
    scanf("%d",&s);
    if( h>24 || m>60 || s>60){
        printf("\nError !\n");
        exit(0);
    }
 //   else{
        while(1){
            s++;
            if(s>59){
                m++;
                s=0;
            }
            if(m>59){
                h++;
                m=0;
            }
            if(h>24){
                h=1;
            }
            printf("\n Clock :\n");
            printf("------------------\n");
            printf("|  %d : %d : %d  |\n",h,m,s);
            printf("------------------\n");

            Sleep(d);
            // clrscr();          
           system("cls");
        }
  //  }

    return 0;
}