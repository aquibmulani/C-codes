#include<stdio.h>

void swap(int * x , int * y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


int partition(int * arr, int low,int high)
{
	int pivot = arr[high];
	int i = low -1;
	
	for(int j =low; j <= high-1; j++)
	{
		if(arr[j] <= arr[high])
		{
			i++;		
			swap(&arr[i],&arr[j]);
		}
	
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}





void quick_sort(int * arr,int low,int high)
{
	if(low < high)
	{	
		int pivot = partition(arr,low,high);
		
		quick_sort(arr,low,pivot-1);
		quick_sort(arr,pivot+1,high);

	}


}





int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    quick_sort(arr, 0, n-1); 
	
	for(int i =0; i < n;i++)
	{
	
		printf("%d \t",arr[i]);
	}	



return 0;
}
