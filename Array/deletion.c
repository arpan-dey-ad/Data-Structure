
#include<stdio.h>
void main ()
{
int arr[50];
int pos, i, num; 
printf ("Enter the number of elements in an array:  ");
scanf (" %d", &num);
printf ("Enter %d elements in array: ", num);
for (i=0;i<=num-1;i++)
{
    scanf ("%d", &arr[i]);
}
printf( "Enter position where you want to delete: ");
scanf ("%d", &pos);
if (pos >= num+1)
{
printf ("Error");
}
else
{
for(i = pos - 1; i < num -1; i++)
{
arr[i] = arr[i+1];
}
printf ("The resultant array is: \n");
for (i = 0; i< num - 1; i++)
{
printf (" %c \n", arr[i]);
}
}
}