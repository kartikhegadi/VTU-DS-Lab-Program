#include<stdio.h>
#include<stdlib.h>

// global vari decleration
#define max 5
int  st[max],top=-1;

void push();
void pop();
void display();
void palindrome();



int main()
{
    int  choice;
    while(1)
    {
    printf("1. PUSH \n");
    printf("2. POP \n");
    printf("3. DISPLAY \n");
    printf("4. CHEQE PALINDROME \n");
    
    printf("Enter the choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : push();
                 break;
                
        case 2 : pop();
                 break;
            
        case 3 : display();
                 break;
                
        case 4 : palindrome();
                 break;
        
        default : printf("Enter the valid choice \n");
    }
}
}

void push()
{
    if(top==max)
    {
        printf("st is full");
    }
    else
    {
    printf("Enter the element to PUSH \n"); int ele;
    scanf("%d",&ele);
    st[++top]=ele;
    printf("The element entered is %d \n",st[top]);
    }

}

void pop()
{   
    if(top==-1)
    {
        printf("st is empty \n");
    }
    else
    {
    int ele;
    ele=st[top];
    top=top-1;
    printf("The element POPED is %d \n ",ele);
    
   }
}

void display()
{
    int i;
    printf("The elements are from st are \n");
    for(i=top;i>=0;i--)
    {
        printf("st elements are %d -> %d \n ",i,st[i]);
    }
}

void palindrome()
{

    if(top==-1)
    {
        printf("Stach is empty \n ");
    }
    else
    {
    int digit,j,k,len=top+1,flag=0,ind=0 ,length = 0; 
    int num[len],rev[len],i=0;
    while(top!=-1)
    {
        digit=st[top];
        num[i]=digit;
        top--;
        i++;
        
    }
    
    printf("st elements are \n ");
    for(i=0;i<len ; i++)
    {
       printf("%d \n ",num[i]);
    }
    printf("Reversing operation  \n ");
    for(j=len-1;j>=0;j--)
    {
        rev[j]=num[ind];
        ind++;
    }
    printf("The reversed string is \n ");
    for(k=0;k<len;k++)
    {
        printf("%d\n", rev[k]);
    }
    printf("Check for palindrome \n");
    for(k=0;k<len;k++)
    {
        if(num[k]==rev[k])
        {
            length++;
        }
    }

    if(len==length)
    {
        printf("given string  is palindrome \n ");

    }
    else 
    {
        printf("not a palindrome \n .^.");
    }
     top=len-1;
    }
   
} 

