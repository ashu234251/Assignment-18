/* 9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )
*/
#include<stdio.h>
#include<string.h>

void reverse(char []);
int r;
int main()
{
    char str[50]={};
    printf("Enter String: ");
    gets(str);
    
    reverse(str);
    return 0;
}

void reverse(char str[])
{  
  int i,j,l;
  l=strlen(str);
  for(i=l-1;i>=0;i--)
   {
     if(str[i]==' ')
      {
        for(j=i+1;(str[j]!=' ' && j<l-1);j++)
        {
         printf("%c",str[j]);
        }
        printf(" ");
      }
     if(i==0)
      {
        for(j=0;str[j]!=' ';j++)
         {
            printf("%c",str[j]);
         }
      }

   }

}