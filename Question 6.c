/*Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/
#include<stdio.h>
#include<string.h>

void alpha_num(char []);
int main()
{
    char a[20];
    printf("enter the string ");
    fgets(a,20,stdin);
    alpha_num(a);
    return 0;
}
void alpha_num(char b[])
{
    int i,x=0,y=0;
    int l=strlen(b);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>=65&&b[i]<=91||b[i]>=97&&b[i]<=122)
        {
            x++;
        }
        if(b[i]>=48&&b[i]<=57)
            y++;
        if(x>=1&&y>=1)
        {
            printf("Given string is alphanumeric string ");
            break;
        }
    }
    if(i==l&&x<1||y<1)
        printf("Given string is not alphanumeric string");
}
