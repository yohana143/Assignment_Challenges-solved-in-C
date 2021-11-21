#include<stdio.h>
#include<string.h>
struct details
{
int travel_agency()
{
int licence;
char name[50];
int kms;
char route[50];
printf("Enter the name of the driver:\n");
scanf("%s",&name);
printf("Enter the licence number of the driver:\n");
scanf("%d",&licence);
printf("Enter the route in which the driver go for driving:\n");
scanf("%s",&route);
printf("Enter the kilometers the driver has driven in the given route:\n");
scanf("%d",&kms);
}
};
int main()
{
    int i,n;
struct details obj;
printf("Enter the number of drivers:\n");
scanf("%d",&n);
for (i=0;i<n ; i++)
{
    obj.travel_agency();
}
}