#include<stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


int find_pivot(int * ip_arr,int low,int high)
{
    int pivot = ip_arr[high];
    int j = low-1;
    for(int i =low; i <= high-1;i++)
    {
        if(ip_arr[i] <= pivot)
        {
            j++;
            swap(&ip_arr[j],&ip_arr[i]);
        }
    }
    swap(&ip_arr[j+1],&ip_arr[high]);
    return j+1;
}

void quick_sort(int * ip_arr, int low, int high)
{
    if(low < high)
    {

        int pi = find_pivot(ip_arr,low,high);

        quick_sort(ip_arr,low,pi-1);
        quick_sort(ip_arr,pi+1,high);


    }
}


int main()
{

int arr[] = { 100, 709, 8, 9, 1, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    quick_sort(arr, 0, N - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    return 0;
}