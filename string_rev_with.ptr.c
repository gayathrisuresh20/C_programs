#include<stdio.h>
#include<string.h>
void main()
{
char str[50];
char *s=str;

printf("\nenter the string\n");
scanf("%[ a-zA-Z0-9!@#$%^&*.]",str);
int n;
n=strlen(str);
printf("\nlength:%d\t",n);
int i;
printf("\n*s is:%c",*s);

printf("\nThe reversed string is:\n");
for(i=n-1;i>=0;i--)
{
//printf("\n-----\n");
printf("%c", *(s+i));

}

printf("\n");
}
