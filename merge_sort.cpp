#include<iostream>
#include<vector>

using namespace std;
void merge(int* ip_arr, int l,int m,int r)
{
	int n1 = m-l+1;
	int n2 = r-m;
	
	int arr1[n1];
	int arr2[n2];
	for(int i =0; i < n1;i++)
	{
		arr1[i] = ip_arr[l+i];
	}
	
	for(int j =0; j < n2;j++)
	{
		arr2[j] = ip_arr[m+1+j];
	}
	
	int i =0; int j =0;
	int k =l;
	
	while(i < n1 && j < n2)
	{
		if(arr1[i] <= arr2[j])
		{
			ip_arr[k] = arr1[i];
			i++;
		}
		else
		{
			ip_arr[k] = arr2[j];
			j++;
		}
		k++;
	}
	
	while(i < n1)
	{
		ip_arr[k] = arr1[i];
		i++;
		k++;
	
	}
	while(j < n2)
	{
		ip_arr[k] = arr2[j];
		j++;
		k++;
	
	}
}

void merge_sort(int* ip_arr, int l,int r)
{
	if(l >= r)
	{
		return;
	}
	int m = (l + r -1 )/2;
	merge_sort(ip_arr,l,m);
	merge_sort(ip_arr,m+1,r);
	merge(ip_arr,l,m,r);

}

int main()
{
int ip_addr[] = {1,7,6,2,3,9};
int l =0; 
int r = sizeof(ip_addr)/sizeof(ip_addr[0]);  

merge_sort(ip_addr,l,r-1);
for(int i =0; i < r;i++)
{
	cout<<ip_addr[i]<<"\n";
}
return 0;
}
