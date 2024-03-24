#include<stdio.h>
#include<string.h>
int main()
{
int n;
scanf("%d\n",&n);
for(int i=0;i<n;i++)
{
    char stri[101];
    scanf("%s\n",stri);
    if(strlen(stri)>10)
    {
        printf("%c%d%c\n",stri[0],strlen(stri)-2,stri[strlen(stri)-1]);

    }
    else
      {
        printf("%s\n",stri);
      }
}

return 0;
}