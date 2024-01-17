//Linear Search recursive approach
#include <stdio.h>
int linear(int arr[], int n, int key, int count)
{
	if(count>=n)
		return -1;
	else if(arr[count]==key)
		return count+1;
	else
		linear(arr, n, key, count+1);
}
int main()
{
	int n, key, res;
	printf("\nEnter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	printf("\nEnter the key to find: ");
	scanf("%d", &key);
	res=linear(arr, n, key, 0);
	if(res!=-1)
		printf("\nElement found. And the count is: %d\n", res);
	else
		printf("\nElement not found.\n");
	
	return 0;
}


/*
//Linear Search iterative approach
#include <stdio.h>
int main()
{
	int n, key, count;
	printf("\nEnter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	printf("\nEnter the key to find: ");
	scanf("%d", &key);
	for(int i=0; i<n; i++)
	{
		count++;
		if(arr[i]==key)
		{
			printf("\nElement found. And the count is: %d\n", count);
		}
	}
	
	return 0;
}
*/

//@BKY