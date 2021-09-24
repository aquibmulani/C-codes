#include<iostream>
#include<map>

using namespace std;


map<int, int> my_map {{1,100},{2,200}};

int main()
{
	my_map[1]=1000;
//	cout<<my_map[1];
	
	for(auto i = my_map.begin(); i != my_map.end();i++)
	{
		cout<<i -> first<<"\t" <<i -> second<<"\n";  	
	
	}



return 0;
}
