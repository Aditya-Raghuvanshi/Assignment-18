//Write a function to reverse a string.
#include<stdio.h>
#include<string.h>

void rev(char []);
int main()
{
    char a[20];
    printf("enter the string ");
    fgets(a,20,stdin);
    rev(a);
    return 0;
}
void rev(char b[])
{
    char c[20];
    int i,j,l;
    l=strlen(b);
    printf("reversed string is ");
    for(i=l-2,j=0;b[i]!='\0';i--,j++)
    {
        c[j]=b[i];
        printf("%c",c[j]);
    }

}
