//Write a function to compare two strings.
#include<stdio.h>

int main()
{
    char a[20],b[20];
    int i,L1,L2;
    printf("enter two strings ");
    fgets(a,20,stdin);
    fgets(b,20,stdin);
    L1=strlen(a);
    L2=strlen(b);
    if(L1==L2)
    {
        for(i=0;a[i]!='\0';i++)
      {
          if(a[i]==b[i])
          {
            continue;
          }
          else
         {
            printf("string are not equal ");
            break;
         }
      }
      if(i==7)
      {
          printf("strings are equal ");
      }
    }
    else
    {
        printf("strings are not equal");
    }
    return 0;

}
