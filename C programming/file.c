#include<stdio.h>
int main(){
    FILE *P;//create a pointer while file name in capital
    P=fopen("avi.txt","w");//fopen are use for file opening
    //avi.txt is a file name 
    //"w" it is use for writting in file
        char arr[20];
    gets(arr);//it is use for inputing multi char
    fprintf(P,"the name is %s",arr);//are use for printing in file
    fclose(P);//are for file closing
    P=fopen("avi.txt","r");//fopen are use for file opening
    //avi.txt is a file name 
    //"r" it is use for reading in file
        char a[200];
    //fscanf(P, "%s",&a);//are use for printing file to program 
    a[0]=fgetc(P);
    fclose(P);//are for file closing
    printf("%s",a[0]);
    return 0;
}                