//Check if a Character is Vovel or not.
#include<stdio.h>
int main()
{
char ch;
printf("enter any Alfabet:");
scanf("%c",&ch);
if (ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='I'|| ch=='i'|| ch=='o'|| ch=='O'|| ch=='u'|| ch=='U')
{
    printf("%c is Vovel",ch);
}
else 
{
    printf("%c is not a Vovel",ch);
}
return 0;
}