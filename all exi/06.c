#include<stdio.h>
#include<stdlib.h>
int SIZE;
int choice,count=0,f=0,r=-1;
char item, q[20];
void insert_rear(char item)
	{
	if(count==SIZE)
		{
		printf("\n Queue is full");
		}
	else
		{

		r=(r+1)%SIZE;
		q[r]=item;
		count+=1;
		}
	}

void delete_front()
	{
	if(count==0)
	        {
        	         printf("\n Queue is empty");
       	         }
	else
		{
		printf("\n the deleted item is %c\n",q[f]);
		f=(f+1)%SIZE;
		count-=1;
		}
	}

void display(int f, int count)
	{
	int i;
	if(count==0)
        		{
       		 printf("\n Queue is empty");
        		}
	else
		{
		printf("\n the elements of the list are");
		for(i=1;i<=count;i++)
			{
			printf("\t %c",q[f]);
			f=(f+1)%SIZE;
			}
		printf("\n");
		}
	}


int main()
	{
	printf("\n Enter the size of the queue\n");
	scanf("%d",&SIZE);


	while(1)
		{
		printf("\n Enter 1: Insert  2: Delete 3: Display  4: Exit \n");
		scanf("%d",&choice);
		switch(choice)
			{
			case 1: printf("\n Enter the number to be inserted");
				scanf("%s",&item);
                insert_rear(item);
				break;
			case 2: delete_front();
				break;
			case 3: display(f,count);
				break;
			case 4:printf("\n thank you\n");
				break;
			default: printf("\n Invalid choice");
			}
        }
	}
