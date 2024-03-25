#include<stdio.h>
int main()
{


char P;
scanf("%c",&P);

if(P>=97&&P<=122)

{
printf("%c",P-32);
}
else
{
    printf("%c",P+32);
}


    return 0;
}
