#include<stdio.h>
#include<math.h>
int main()
{
 int n;//number of problems//number of rows 
 scanf("%d",&n);
 int m=3;// numbers of participant
 int a,b,c;
 int count=0;
 
 
 for(int i=1;i<=n;i++)
 {
   scanf("%d %d %d\n",&a,&b,&c);
   if ((a==1 && b==1)|| (a==1 && c==1) || (b==1&&c==1) || (a==1 &&b==1&&c==1))
    {count++;}
 }
 
printf("%d",count);
    return 0;
}