#include<stdio.h>
#include<string.h>


void reverse(char * ip,int length)
{
	int j = length-1;
	for(int i =0; i < (length-1)/2;i++)
	{
		char temp = ip[j];
		ip[j] = ip[i];
		ip[i] = temp;
		j--;	
	}

}

void reverse_words(char * ip)
{
	int length = strlen(ip);
	int i =0;
	unsigned int  j =0;
	while(j <= strlen(ip))
	{
		if(*(ip+j) == ' ' || *(ip+j) ==  '\0')
		{
			reverse((ip+i),j-i);
			i =j+1;
		}
		j++;
	
	}

 reverse(ip, strlen(ip));

}



int main()
{
char ip[] = "Hello World";
reverse_words(ip);

printf("%s", ip);

return 0;
}


