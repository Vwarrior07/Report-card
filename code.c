#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    float avg;
    printf("please enter the marks: ");
    scanf("%i",&a);
    printf("please enter the marks: ");
    scanf("%i",&b);
    printf("please enter the marks: ");
    scanf("%i",&c);
    printf("please enter the marks: ");
    scanf("%i",&d);
    printf("please enter the marks: ");
    scanf("%i",&e);
    printf("please enter the marks: ");
    scanf("%i",&f);
    avg=(a+b+c+d+e+f)/6;
    if (a<35 || b<35 || c<35 || d<35 || e<35 || f<35 )
    {
        printf("fail");
    }
    else
     {
      if (avg>=35 && avg<50)
     { 
        printf("third division");
     }
      if (avg>=50 && avg<60)
     {
        printf("third division");
     }
      if (avg>=60 && avg<75)
     {
        printf("third division");
     }
     if (avg>=75 && avg<=100)
     {
        printf("third division");
     }
    }
    return 0;
}