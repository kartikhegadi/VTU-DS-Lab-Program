#define SIZE 50 /* size of stack */ 
#include <ctype.h>
#include <stdio.h>
char st[SIZE];
int top = -1; /* Global declarations */
push(char ele) /* Function for push operation */ 
{
st[++top] = ele; 
}
char pop() /* Function for POP operation */ 
{
return (st[top--]); 
}
int pr(char ele) /* Function for precedence */
{
switch (ele) 
{
case '#':return 0 ;
 case '(':return 1;
case '+': 
case '-':return 2;
case '*': 
case '/': 
case '%':return 3;
case '^':return 4;
 }
}

int main()
{
    char infix[50], posfx[50], ch, ele;
    int i = 0, k = 0;
    printf("\n\nEnter the Infix Expression ");
    scanf("%s", infix);
    push('#');
     while((ch=infix[i++])!='\0')
     {
         if(ch=='(')
         {
             push(ch);
         }
         else if(isalnum(ch))
         {
             posfx[k++]=ch;
         }
         else if(ch==')')
         {
             while(st[top]=='(')
             {
                 posfx[k++]=pop();

             }
             ele=pop();
         }
         else 
         {
             while(pr(st[top])>= pr(ch))
             {
                 posfx[k++]=pop();
             }
             push(ch);
         }

     }
    while(st[top]!='#')
    {
        posfx[k++]=pop();
    }
    posfx[k]='\0';
    printf("The postfix expression is %s \n ",posfx);
}   