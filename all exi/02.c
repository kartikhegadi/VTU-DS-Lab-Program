#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[20],pat[10],ans[40],rep[20];
    printf("Enter the main string \n"); gets(str);
    printf("Enter the pattern string \n"); gets(pat);
    printf("Enter the replace string \n"); gets(rep);

    int k,c,m,i,j,flag;
    k=c=m=i=j=0;
    

    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            i++;
            m++;

            if(pat[i]=='\0')
            {
                for(k=0;rep[k]!='\0';k++ , j++)
                {
                    ans[j]=rep[k];
                    flag=1;

                }
                i=0;
                c=m;
            }
        }
    else
    {
        ans[j]=str[c];
        j++;
        c++;

        m=c;
        i=0;
    }
    }
    

    if(flag==0)
    {
        printf("string  dosen't match !!!\a");

    }
    else
    {
        ans[j]='\0';
        printf("String Match found and replaced string is %s :",ans);
    }
}
