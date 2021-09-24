#include<stdio.h>


// merge arr2 in arr1
int * merge_array(int * arr1,size_t size1, int * arr2,size_t size2)
{
	if (size2 == 0) {return arr1;}
	size_t big_iter = 	size1 + size2-1;
	int i = size1 -1;
	int j = size2 -1;
	while(i >= 0 && j >= 0)
	{
		if(arr1[i] >= arr2[j])
		{
		 	arr1[big_iter] = arr1[i];	
			i--;
		}
		else
		{
		 	arr1[big_iter] = arr2[j];	
			j--;
		}
		big_iter--;
	}

 return arr1;
}

int main()
{
	int * op = NULL;
	int ip1[] = {1,3,5,0,0,0};
	int ip2[] = {1,3,6};
    op = merge_array(ip1,3,ip2,3);
    for(int i =0; i <  6 ;i++)
    {
    	printf("%d \t",op[i]);
    }

return 0;
}
