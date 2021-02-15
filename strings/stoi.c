#include<stdio.h>
#include<string.h>

int my_stoi(char * ip)
{
    int i =0;
    int ret_val=0; 
    while(ip[i] != '\0')
    {

    	if(ip[i] >= '0' && ip[i] <= '9')
    	{


	    	ret_val = ret_val*10 + (int)(ip[i] - '0') ;    		
    	}
    	else
    	{
    		break;
    	}
    	i++;
    }
return ret_val;

}


int main()
{
char ip[] = "a238989hshsgffsgfs";
printf("%d", my_stoi(&ip[1]));

return 0;
}
