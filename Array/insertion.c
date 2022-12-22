#include<stdio.h>
void main()
{
int i,number[40],pos,size,value;
printf("Enter no of elements in array of number:");
scanf("%d",&size);
printf("Enter %d elements are:",size);
for(i=0;i<size;i++)
    scanf("%d",&number[i]);
printf("Enter the position where you want to insert the element:");
scanf("%d",&pos);
printf("Enter the value into that poition:");
scanf("%d",&value);
for(i=size-1;i>=pos+1;i--)
    {
    number[i+1]=number[i];
    number[pos-1]= value;
    }
printf("Final array after inserting the value is");
for(i=0;i<=size;i++)
printf("%d ",number[i]);
}