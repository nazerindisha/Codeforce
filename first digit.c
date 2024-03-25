#include<stdio.h>
int main()
{
 int a;
 scanf("%4d",&a);
 int p=a/1000;
 if(p%2==0)
 {
    printf("EVEN");
 }
 else{
    printf("ODD");
 }
    return 0;
}
