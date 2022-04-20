#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void create();
void inserbeg();
void insertrer();
void displaybeg();
int delfirst();
int dellast();
int count =0;

struct node
{
    int sem,phno;
    char name[20],branch[20],usn[20];
    struct node *next;
}*first=NULL,*last=NULL,*temp=NULL,*temp1=NULL;

void create()
{
    int sem,phno;
    char name[20],branch[20],usn[20];
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the student details sem, phno, name, branch, usn :");
    scanf("%d %d %s %s %s",&sem,&phno,name,branch,usn);
    temp->sem=sem;
    temp->phno=phno;
    strcpy(temp->name,name);
    strcpy(temp->branch,branch);
    strcpy(temp->usn,usn);
    temp->next=NULL;
    count++;
    
    

}

void inserbeg()
{
    if(first==NULL)
    {
        create();
        first=temp;
        last=first;
        
        

    }
    else
    {
        create();
        temp->next=first;
        first=temp;
        
    }

}

void insertrer()
{
    if(last==NULL)
    {
        create();
        first=temp;
        last=first;
    }
    else
    {
        create();
        last->next=temp;
        last=temp;
    }
}

int delfirst()
{
    struct node *temp;
    temp=first;
    if(temp->next==NULL)
    {
      free(temp);
      first=NULL;
      return 0 ;
    }
    else
    {
    temp=temp->next;
    printf("%d %d %s %s %s ",temp->sem,temp->phno,temp->name,temp->branch,temp->usn);
    free(temp);
   
    }
    
    
    count --;
    return 0;
}

int dellast()
{
    struct node *temp;
    temp=first;
    if(temp->next==NULL)
    {
        free(temp);
        first=NULL;
       
    }
    else
    {
        while(temp->next!=last)
        {
            temp=temp->next;
        }
        free(last);
        temp->next=NULL;
        last=temp;
        
    }
     return 0;
    count --;
 
}



void display()
{
   
    temp1=first;
    if(temp==NULL)
    {
        printf("List is empty \n");
        return;
    }
    while(temp!=first)
    {
       printf("%d %d %s %s %s\n",temp1->sem,temp1->phno,temp1->name,temp1->branch,temp1->usn);
       temp1=temp1->next;
    }
    printf("Total number of nodes are %d ",count );
}

void main()
{
    int cho=0,n,i;
    first=last=temp1=NULL;
    printf("welcome .^. \n");
    printf(" 1. create n employes 2. Insert last 3. Display 4.exit 5.Delete 1st 6. delete last \n");
    while(1)
    {
    scanf("%d",&cho);
    printf("welcome .^. \n");
    printf(" 1. insert 1st 2. Insert last 3. Display 4.exit 5.Delete 1st 6. delete last \n");
    switch(cho)
    {
        
        case 1 : printf("Enter the number of students  to create nodes ");
                 scanf("%d",&n);
                 for(i=0;i<n;i++)
                 {
                 inserbeg();
                 }
                 break;
        case 2 : insertrer();
                 break;
        case 3 : display();
                 break;
        case 4 : exit(0);
                 break;
        case 5 : delfirst();
                 break;
        case 6 : dellast();
                 break;
        default: printf("Default choice \n");
    }
    

   }
}