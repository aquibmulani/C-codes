#include<iostream>
#include<stack>
#include<string>

using namespace std;

char ret_opp_parenthesis(char ip)
{
	if(ip == '}') {return '{';}
	if(ip == ']') {return '[';}
	if(ip == ')') {return '(';}

}



bool valid_parenthesis(string ip)
{
	stack<char> store;
	char store_top;
	for(int i =0; i < ip.length();i++)
	{
		if(ip[i] == '{' || ip[i] == '[' || ip[i] ==  '(')
		{
			store.push(ip[i]);
		}
		else if(ip[i] == '}' || ip[i] == ']' || ip[i] ==  ')')
		{
				if(ip[i] ==  '}')
				{
					char check = ret_opp_parenthesis(ip[i]);
					if(check != store.top())
					{
						return 0;
					}	
					else
					{
						store.pop();
					}				
				}
				else if(ip[i] ==  ')')
				{
					char check = ret_opp_parenthesis(ip[i]);
					if(check != store.top())
					{
						return 0;
					}	
					else
					{
						store.pop();
					}				
				}		
				else if(ip[i] ==  ']')
				{
					char check = ret_opp_parenthesis(ip[i]);
					if(check != store.top())
					{
						return 0;
					}	
					else
					{
						store.pop();
					}				
				}		
		}
		else
		{
			cerr<<"Element other than parenthesis occured";
		}
	
	}

return 1;
}



int main()
{
string ip = "{[(])}";
cout<<valid_parenthesis(ip);


return 0;
}
