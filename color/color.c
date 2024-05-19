#include<stdio.h>
#include<windows.h>
void textcolor(int color_name)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color_name);
}
int main()
{
    int i;
    for ( i = 0; i <15 ; i++)
    {
        textcolor(i);
        printf("Karan Sharma\n");
    }
    textcolor(7);

    return 0;
}