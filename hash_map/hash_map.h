#include<iostream>
#include<vector>

using namespace std;

class hash_map
{
    
	public:
	vector<vector<int> > map_structure;
	hash_map(){}
	bool put(int,int);
	int get(int);
	bool remove(int);

};



