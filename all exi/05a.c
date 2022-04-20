#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max 50
int st[max],top=-1;
char  infix[max];
void pushstack( int ele)
{
    top=top+1;
    st[top] = (int)(infix[ele]-48);
}

void caluc(char c)
{
  int a , b , ans;
   a=st[top];
  st[top]='\0';
  top--;

  b=st[top];
  st[top]='\0';
  top--; 

  switch(c)
  {
      case '+' : ans=b+a;
                 break;
      case '-' : ans=b-a;
                 break;
      case '/' : ans=b/a;
                 break;
      case '*' : ans=b*a;
                 break;
      case '^' : ans=pow(b,a);
                break;
     default : ans =0;
  } 
  top++;
  st[top]=ans;
}

int main()
{
    
    int i;
    printf("Enter the infix expression \n");
    scanf("%s",infix);
    printf("The infiix expression is : %s \n",infix);
    for(i=0;i<strlen(infix);i++)
    {
        if(infix[i]>='0' && infix[i]<='9')
        {
            pushstack(i);
        }
        if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='^')
        {
            caluc(infix[i]);
        }
    }
    printf("\n\nResult :: %d",st[top]);
}