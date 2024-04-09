#include "stdio.h"
int main(){
    int h,r;
    scanf("%d%d",&h,&r);
    double pi=3.14;
    double v=pi*r*r*h;
    int a=20000/v;
    printf("%d",a+1);
    return 0;
}