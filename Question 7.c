//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>

void palindrome(char []);
int main()
{
    char a[20];
    printf("enter the string ");
    fgets(a,20,stdin);
    palindrome(a);
    return 0;
}
void palindrome(char b[])
{
    int i,l,j;
    l=strlen(b);
    for(i=0,j=l-2;i<=j;i++,j--)
    {
        if(b[i]==b[j])
            continue;
        else
        {
            printf("given string is not palindrome ");
            break;
        }
    }
    if(i>j)
        printf("string is palindrome ");


}
