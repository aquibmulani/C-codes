#include<stdio.h>
#include<string.h>

int is_anagram(char * ip1,char * ip2)
{
	if(strlen(ip1) != strlen(ip2))
	{
		return 0;
	}
	
	int char_container1[100] ={0};
	int char_container2[100] ={0};

//	memset(char_container,0,256);
	int length1 = strlen(ip1);
	int length2 = strlen(ip2);
	for(int i =0; i < length1;i++)
	{
		char_container1[ip1[i]-'a']++;
	
	}
	
	for(int i =0; i < length2;i++)
	{
		char_container2[ip2[i]-'a']++;
	
	}



	for(int i =0;i < 100;i++)
	{
		if(char_container1[i] != char_container2[i])
		{
			return 0;
		}
	}
return 1;

}




int main()
{
printf("%d",is_anagram("abcdeg","degcab"));


return 0;
}
