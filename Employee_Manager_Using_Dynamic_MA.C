#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i=0;
    int n;
    char *ptr;
    while(i < 3)
    {
    printf("Entre the size of the array for employee %d:",i+1);
    scanf("%d",&n);
    ptr = (char *)malloc((n+1)*sizeof(char));
    printf("Enter the name of the employee %d:",i+1);
    scanf("%s",&ptr[i]);
    i++;
    }
    for (int j=0;j<3;j++)
    {
        printf("Thr names of the employee's are %s:\n",ptr);
    }
}