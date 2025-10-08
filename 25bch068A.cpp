#include<stdio.h>
#include<conio.h>
int main()
{
  char str[50];
  printf("enter a string\n");
  gets(str);
  void prntstr(char []);
  prntstr(str);
  getch();
}
    void prntstr(char s[])
    {
        char *ptr=s;
        while (*ptr!='\0')
    {
        printf("%c\n ",*ptr);
        ptr++;
    }
}
