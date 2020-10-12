#include<iostream>

using namespace std;


void swap(int *x,int * y)
{
       int temp= *x;
       *x=*y;
       *y=temp;
}




int return_pivot(int arr[], int low, int high)
{   
   int i =low-1;
   int pivot = arr[high];

   for(int j=low; j<high;j++)
   {
       if(arr[j] < pivot)
       {
           i++;
           swap(arr[i],arr[j]);
       }
   }
   
   swap(arr[i+1],arr[high]);
   return i+1;
}


void quick_sort(int arr[],int low, int high)
{
	if(low < high)
	{
		int pivot = return_pivot(arr,low,high);
		//cout << pivot;	
		quick_sort(arr,low,pivot-1);
		quick_sort(arr,pivot+1,high);
	}

}






int kthSmallest(int arr[], int n, int k)
{
	if(n < k){return -1;}


	if(n ==1) {return arr[0];}

 
 
 	quick_sort(arr,0,n-1);

/*	for(int i =0; i < n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	*/
		
return arr[k-1];
}

//3 5 4 2 9

int main()
{
int n =0, k =0;
cout<<"Enter elements n and k:";
cin>> n >> k;

int inputs[n];

cout<<"Enter" << n << "elements";

for(int i =0; i < n;i++)
{
cin >> inputs[i];
}

cout<< k << "th largest element is : " << kthSmallest(inputs,n,k);
//kthSmallest(inputs,n,k);




return 0;
}
