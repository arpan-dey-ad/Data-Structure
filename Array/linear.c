#include<stdio.h>
void main()
{
int i,n,item, arr[100];
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the number of elements");
for (i=0; i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the item to be searched");
scanf("%d",&item);
for(i=0; i<n;i++)
{
if(arr[i]==item)
{
printf("element found at %d\n",i+1);
}
if(i==n) 
{ 
printf("not found in array");
}
}
}