#include<stdio.h>
void main ()
{
	int i, arr[10]={7,9,0,5,3,8,2,63,7};
	int small, large;
	small=large=arr[0];
	for (i=0;i<=9;i++);
	{
		if (arr[i]<small)
		small=arr[i];
		if (arr[i]>large)
		large=arr[i];
	}
printf("Smallest=%d,Largest=%d \n,small,large");
}
