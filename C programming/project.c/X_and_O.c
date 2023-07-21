#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
char box[10]={'o','7' ,'8' ,'9'  ,'4'  ,'5' ,'6'  ,'1' ,'2'  ,'3'};
int check();
void border();
int main(){
    int p=1,i,c;
    char m;
    do{
    border();
    p=(p % 2)?1:2;
    printf("player %d,enter position:",p);
    scanf("%d",&c);
    m=(p==1)?'X':'O';
    if(c==7 && box[1]=='7'){
        box[1]=m;
    }
    else if(c==8 && box[2]=='8'){
        box[2]=m;
    }
    else if(c==9 && box[3]=='9'){
        box[3]=m;
    }
    else if(c==4 && box[4]=='4'){
        box[4]=m;
    }
    else if(c==5 && box[5]=='5'){
        box[5]=m;
    }
    else if(c==6 && box[6]=='6'){
        box[6]=m;
    }
    else if(c==1 && box[7]=='1'){
        box[7]=m;
    }
    else if(c==2 && box[8]=='2'){
        box[8]=m;
    }
    else if(c==3 && box[9]=='3'){
        box[9]=m;
    }
    else{
        printf("invaild position !!!!!!!!.....");
        p--;
        getch();
    }
    i=check();
    p++;
    }while(i==-1);
    border();
    if(i==1){
    printf("====>player %d won",--p);
    }
    else{
    printf("====>game draw");
    }
    getch();
    return 0;
}
int check(){
    if(box[1]== box[2] && box[2]== box[3] ){
        return 1;
    }
    else if(box[4] == box[5] && box[5]== box[6] ){
        return 1;
    }
    else if(box[7] == box[8] && box[8]== box[9] ){
        return 1;
    }
    else if(box[1] == box[4] && box[4]== box[7] ){
        return 1;
    }
    else if(box[2] == box[5] && box[5]== box[8] ){
        return 1;
    }
    else if(box[3] == box[6] && box[6]== box[9] ){
        return 1;
    }
    else if(box[1] == box[5] && box[5]== box[9] ){
        return 1;
    }
    else if(box[3] == box[5] && box[5]== box[7] ){
        return 1;
    }
    else if(box[1]!='7' && box[2]!='8' && box[3]!='9' && box[4]!='4' && box[5]!='5' && box[6]!='6'  && box[7]!='1'  && box[8]!='2'  && box[9]!='3'){
        return 0;
    }
    else{
        return -1;
    }
}
void border(){
    system("cls");
    printf("\n==========> X and O <=============\n\n");
    printf("player 1== X\nplayer 2== O\n\n\n");
    printf("     |     |     \n");
   printf("  %c  |  %c  |  %c  \n",box[1],box[2],box[3]);
    printf("_____|_____|_____\n");   
    printf("     |     |     \n");
   printf("  %c  |  %c  |  %c  \n",box[4],box[5],box[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
   printf("  %c  |  %c  |  %c \n",box[7],box[8],box[9]);
    printf("     |     |     \n");   

}