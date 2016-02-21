# include <stdio.h>
# include <ctype.h>
# define EOL '\n'

void main()
{
char c[100];
int count=0;
c[count]=getchar();
while(c[count] != EOL)
{
count++;
c[count]=getchar();
putchar(c[count]);
}

int tag;
tag=count;
count=0;
printf("\n");
printf(" The lowercase letters:\n");
while(count<=tag && c[count]>=65 && c[count]<=90 && isalpha(c[count]))
{
c[count]=c[count]+32;
putchar(c[count]);
count++;
}
printf("\nPlease enter a valid uppercase letter");
return;

}
