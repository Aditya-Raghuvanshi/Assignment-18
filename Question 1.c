//Write a function to calculate length of the string
#include<stdio.h>

int length(char []);
int main()
{
    char a[20];
    printf("enter the string ");
    fgets(a,20,stdin);
    printf("length of the given string is %d",length(a));
    return 0;
}
int length(char b[])
{
    int i;
    for(i=0;b[i]!='\0';i++);
    return i;
}
