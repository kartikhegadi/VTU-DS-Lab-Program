#include<stdio.h>
#include<stdlib.h>

void towers(int n , char frompeg, char auxpeg, char topeg)
{
    if(n==1)
    {
        printf("Move disk 1 from %c to %c\n",frompeg,topeg);
        return ;
    }
    towers(n-1,frompeg,auxpeg,topeg);
    printf("Move disk %d from %c to %c\n",n,frompeg,auxpeg);
    towers(n-1,auxpeg,topeg,frompeg);
}

int main()
{
    int n;
    printf("Enter the number of disks\n");
    scanf("%d",&n);
    towers(n,'A','C','B');
}