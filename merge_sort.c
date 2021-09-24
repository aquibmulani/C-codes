#include<stdio.h>
void merge_sort(int * ip, int l,int m, int r)
{
    int size1 = m-l+1;
    int size2 = r-m;

    int arr1[size1];
    int arr2[size2];
    
    int pt1 = 0;int pt2 = 0;
    int k =l;
    for(int i =0;i < size1;i++)
    {
    	arr1[i] = ip[l+i];
    }
    
   for(int i =0;i < size2;i++)
    {
    	arr2[i] = ip[m+i+1];
    }

   while(pt1 < size1 && pt2 <size2)
    {
    	if(arr1[pt1] <= arr2[pt2])
    	{
    		ip[k] = arr1[pt1];
	    	pt1++;
		//k++;	
    	}
    	else
    	{
    		ip[k] = arr2[pt2];
	    	pt2++;
			
    	}
	k++;
    }
    while(pt1 < size1)
    {
    	ip[k] = arr1[pt1];
    	pt1++;
    	k++;
    }

    while(pt2 < size2)
    {
    	ip[k] = arr2[pt2];
    	pt2++;
    	k++;
    }
}












void merge(int * ip,int l, int r)
{
	if(l >=r)
	{	
		return;
	}
	int m = (l+r-1)/2;
	merge(ip,l,m);
	merge(ip,m+1,r);
	
	merge_sort(ip,l,m,r);

}




int main()
{
int arr1[] = {9,7,4,5,1,2,3};
int sizeofarr = sizeof(arr1)/sizeof(arr1[0]);
merge(arr1,0,sizeofarr);

for(int i =0; i < sizeofarr;i++)
{

printf("%d \t",arr1[i]);
}



return 0;
}
