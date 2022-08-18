/*Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )*/
#include<stdio.h>
#include<string.h>

void swap(char* ,char* );
void rev_word(char []);
int main()
{
    char a[100];
    printf("enter the string ");
    fgets(a,100,stdin);
    rev_word(a);
    return 0;
}
void rev_word(char b[])
{
    char c[100]={0};
    int i,j=0,k=0,L,m=-1;
    L=strlen(b);

    b[L-1]=' ';
    for(i=0;i<=L-1;i++)
    {
        if(b[i]==32)
        {
            for(j=i-1;j>m;j--,k++)
            {
                c[k]=b[j];
            }
            c[k]=b[i];
            m=k;
            k++;
        }
    }
    for(i=0,j=L-2;i<=j;i++,j--)
    {
        swap(&c[i],&c[j]);
    }
    printf("%s",c);
}
void swap(char* x,char* y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


