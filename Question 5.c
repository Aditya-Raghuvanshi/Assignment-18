//Write a function to transform a string into lowercase
#include<stdio.h>

int main()
{
    char a[20];
    printf("enter the string ");
    fgets(a,20,stdin);
    lowercase(a);
    return 0;
}
void lowercase(char b[])
{
    int i;
    printf("Updated string in lowercase is : ");
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>=65&&b[i]<=91)
        {
            b[i]=b[i]+32;
        }
        printf("%c",b[i]);
    }
}
