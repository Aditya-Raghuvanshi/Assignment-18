//Write a function to transform string into uppercase
#include<stdio.h>

int main()
{
    char a[20];
    printf("enter the string ");
    fgets(a,20,stdin);
    uppercase(a);
    return 0;
}
void uppercase(char b[])
{
    int i;
    printf("Updated string in uppercase is : ");
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>=97&&b[i]<=122)
        {
            b[i]=b[i]-32;
        }
        printf("%c",b[i]);
    }
}
