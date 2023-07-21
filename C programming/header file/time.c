#include<stdio.h>
#include<time.h>
int main(){
    // struct tm  ----> in _this ex. stuct tm *a,a
    //         a.|(*a).tm_sec --->for second
    //         a.|(*a).tm_min--->for minate
    //         a.|(*a).tm_hour--->for hour
    //         a.|(*a).tm_mday--->for in the month of day 
    //         a.|(*a).tm_wday--->for in the week of day
    //         a.|(*a).tm_yday--->for in the year of day
    //         a.|(*a).tm_mon--->for month
    //         a.|(*a).tm_year--->for  year

    // clock_t start,end,total;---->clock_t it object to create 
    //                             variable  ex. clock_t a,b,c
    // start=clock();---->clock() is use to give cpu time
    //             it is run when clock_t are first create
    // printf("start %ld",start);
    // for (int i = 0; i < 100000000; i++)
    // {
    //     /* code */
    // }
    // end=clock();---->clock() is use to give cpu time
    //             it is run when clock_t are first create
    // printf("start %ld",end);
    // total=(double)(end-start);
    // printf("start %ld",total);

    //time_t a ,b;//---->time_t it object to create variable  
    //           //    ex. time_t a,b,c
    // a=time(NULL);//--->important
    // printf("%ld",a);
    // for (int i = 0; i < 1222224555; i++)
    // {   
    // }
    // b=time(NULL);//--->important
    // printf("%ld",b);
    // printf("%ld",difftime(a,b));
    // ---->difftime(a,d)- are use to print different between a and b 
    
    // char c[100];
    // time_t a;
    // struct tm *b;
    // a=time(NULL);
    // b=localtime(&a);//--->localtime(&a)--it is use for local time
    // printf("%s",asctime(b));// --->asctime(b) it is use for printing time
    // strftime(c,100,"\n%A   %b  %d\n",b);--->it is use to store char in "b" in format 
    // syntax:  strftime(strname,length,format,which variable)
    //%A--->day (friday ,monday)
    //%b--->month (apr,jun)
    //%d--->day(12,26)
    //%I--->hour 
    //%M--->minate 
    //%p---> AM and PM
    // puts(c);--->it is print the string                    
    // strftime(c,100,"\n%I  %M    %p\n",b);
    // fputs(c,stdout);--->it is print the string                      
    //stdout--->for stander output

    //clock_t a;
    // time_t a;
    // struct tm *p;
    // a=time(NULL);
    // p=clock(&a);
    // printf("%s",asctime(p));

    // struct tm a;
    // time_t b;
    // a.tm_year=2020-1900;--->set time
    // a.tm_mon=1;
    // a.tm_mday=4;
    // a.tm_hour=4;
    // a.tm_min=4;
    // a.tm_sec=4;
    // a.tm_isdst=4;
    // b= mktime(&a);--->convert set time into perfect time
    // printf("%s",ctime(&b));--->ctime it ois use for print
    
    // time_t a;
    // struct tm *p;
    // a=time(NULL);
    // p=gmtime(&a);---->convert in universal time
    // printf("%s",asctime(p));


    return 0;
}