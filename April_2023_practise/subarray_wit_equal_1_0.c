//Find the largest subarray having an equal number of 0’s and 1’s
#include<stdio.h>



int find_num(int ip[][2],int size,int num)
{
    for(int i =0; i < size;i++)
    {
        if(ip[i][0] == num)
        {
            return 1;
        }
    }
    return 0;
}


int * subarry_of_equal_1_0(int * ip_array, const int my_size)
{
    //const int k = my_size;
    //int maps[k][2];
    int **my_map = (int**)malloc(my_size*sizeof(int));
    for(int i =0; i < my_size;i++)
    {
        my_map[i] = (int *) malloc(2*sizeof(int));
    }
    int sum =0;
    my_map[0][0] =abs(-1);
    int subarr_len = 0;
    int end_index = -1;

    for(int i =0; i < my_size;i++)
    {
        sum = sum + (ip_array[i] == 0? -1:1);
        sum = abs(sum);
        if(find_num(my_map,my_size,sum))
        {
            if(subarr_len < (i-my_map[sum][1]))
            {
                subarr_len = i-my_map[sum][1];
                end_index = i;
            }

        }
        else
        {
            my_map[sum][1] = abs(i);
        }

    }
    int *ret_arr= malloc(2*sizeof(int));
     ret_arr[0] = end_index-subarr_len+1;
     ret_arr[1] = end_index; 
     return ret_arr;   

}


int main()
{
    int my_arr[] = { 0, 0, 1, 0, 1, 0, 0 };; 
    int *print_arr = subarry_of_equal_1_0(my_arr,7);

        printf("%d \t",*print_arr);
        printf("%d \t",*(print_arr++));


    return 0;
}