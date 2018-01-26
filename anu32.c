#include<stdio.h>
void main()
{
char s[100];
int i=0,count;
printf("enter the sentence");
scanf("%[^\n]s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
count++;
}
}
printf("the number of words are %d",count);
}
