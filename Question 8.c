//Write a function to count words in a given string
#include<stdio.h>

void count_char(char []);
int main()
{
    char a[50];
    printf("enter the string ");
    fgets(a,50,stdin);
    count_char(a);
    return 0;
}
void count_char(char b[])
{
    int i,space=0;
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]==32)
            space++;
    }
    printf("no. of words in the given string is %d",space+1);
}
