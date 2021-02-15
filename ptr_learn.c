#include<stdio.h>



int main()
{

int i=300;
char *ptr;
ptr = &i;
*(++ptr)=2;
printf("Apna jugad : %d",i);


        int arr[] = {10, 20};
        int *p = arr;
        ++*p;          // is equivalent to  ++(*p)
        printf("arr[0] = %d, arr[1] = %d, *p = %d\n",
                                  arr[0], arr[1], *p);  // 11 20 11
        *p++;
        printf("arr[0] = %d, arr[1] = %d, *p = %d\n", // increases the pointer address
                                  arr[0], arr[1], *p); // 11 20 20
        *++p;
        printf("arr[0] = %d, arr[1] = %d, *p = %d\n", // equivalent to *(++p)
                                  arr[0], arr[1], *p); // 11 20 garbage_value for address
        return 0;
}
