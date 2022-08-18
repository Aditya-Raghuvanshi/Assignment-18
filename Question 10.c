//Write a function to find the repeated character in a given string.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    printf("enter the string ");
    fgets(a,20,stdin);
    print_repeating(a);
    return 0;
}
void print_repeating(char b[])
{
    int i,j,l;
    l=strlen(b);
    for(i=3;i<=l;i++)
    {
        for(j=0;j<=l-i;j++)
        {
            if(b[j]>b[j+1])
            {
                int temp;
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf("repeating characters are : ");
    for(i=0;i<=l-2;i=j)
    {
        int x=0;
        for(j=i+1;;j++)
        {
            if(b[i]==b[j])
            {
                x++;
                continue;
            }
            else if(x>0)
            {
                printf("%c ",b[i]);
                break;
            }
            else
                break;
        }

    }

}
