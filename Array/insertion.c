#include <stdio.h>
void main()
{
int arr[100] = { 0 };
int i, x, pos, n = 10;
for (i = 0; i < 10; i++) /* initial array of size 10*/
arr[i] = i + 1;
for (i = 0; i < n; i++) /*print the original array */
printf("%d ", arr[i]);
printf("\n");
x = 50; // element to be inserted
pos = 5; //*position at which element is to be inserted*/
n++; // increase the size by 1
for (i = n - 1; i >= pos; i--) // shift elements forward
arr[i] = arr [i - 1];
// insert x at pos
arr[pos - 1] = x;
for (i = 0; i < n; i++)
printf("%d ", arr[i]); // print the updated array
printf("\n");
}