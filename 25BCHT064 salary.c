#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    system("cls");
    //clrscr();
    printf("Enter gross salary :- ");
    scanf("%d",&a);
    if(a>10000)
    {
        b = a*0.1;
        c = a*0.03;
        d = a+b-c;
        printf("%d net salary",d);

    }
else if(a>5000 && a<=10000)
{
    b = a*0.07;
    c = a*0.03;
    d = a+b-c;
    printf("%d net salary",d);

}
else
    printf(" number not available");
 getch();
}
