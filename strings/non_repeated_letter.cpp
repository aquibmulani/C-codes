#include<iostream>
#include<map>
#include<string>

using namespace std;

char non_repeated_letter(string ip)
{
	if(ip.empty()){return NULL;}
	map<char,int> track;
	for(int i =0; i < ip.length();i++)
	{
		track[ip[i]]++;  
	}	
	
	for(int i =0; i < ip.length();i++)
	{
		if(track[ip[i]] ==  1)
		{
			return ip[i];
		}
	
	}


}



int main()
{
cout<<non_repeated_letter("abaccbddef");




return 0;
}
