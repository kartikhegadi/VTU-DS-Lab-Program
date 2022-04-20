// circular queue
#include<stdio.h>
#include<stdlib.h>

int size;
int choice, count=0 , f=0, r=-1;
char item ,q[20];

//fuinctions 

void insert_rear( char item )
{
    if(count==size)
    {
        printf("The queue size is ful \n ");
    }
    else
    {
        r=(r+1)%size;
        q[r]=item;
        count ++ ;
    }
}

void delete_front()
{
    if(count==0)
    {
        printf("The queue is empty \n ");

    }
    else
    {
        printf(" the deleted item %c ",  q[f]);
        f=(f+1)%size;
        count-- ;
    }
}

void display(int f , int count)
{
    int i;
    if(count==0)
    {
        printf("Queue is empty \n");

    }
    else
    {
        printf(" The element of queue  listed are \n");
        for(i=1 ; i<= count ; i++)
        {
            printf("\t %c ", q[f]);
            f=(f+1)%size;
        }
        printf("\n");
    }
}

int main()
{
    printf("Enter the size of the queue \n");
    scanf("%d", &size);
    
    do
    {
        printf("-------MENUE---------- \n  ");
        printf( " 1 . INSERT \n 2 . DELETE \n 3. DISPLAY \n 4. EXIT \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : printf(" Enter the number to be inserted \n");
                    scanf("%s",&item);
                    insert_rear(item);
                    break;
            case 2 : delete_front();
                     break;
            case 3 : display(f,count);
                     break;
            case 4 : printf(" \n Thank you \n ");
                     break;
            default : printf("\n Invalid choice \n ");
        }
    } while (choice!=4);
}