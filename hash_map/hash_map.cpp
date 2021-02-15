#include<iostream>
#include<"hash_map.h">






bool hash_map::put(int key, int value)
{
	bool found_flag = false;
	
	for(int i =0; i < map_structure.size();i++)
	{
		if(key == map_structure[i][0])
		{
			found_flag = true;
			map_structure[i][1]= value;
			return true;
		}
	}
	
	if(!found_flag)
	{
		map_structure.push_back({key,value});
		return true;
	}
return false;
}


int hash_map::get(int key)
{
	for(int i =0; i < map_structure.size();i++)
	{
		if(map_structure[i][0] == key)
		{
			return map_structure[i][1];
		}
	}
	return -1;
}



bool remove(int key)
{
	for(int i =0; i < map_structure.size();i++)
	{
		if(map_structure[i][0] == key)
		{
			map_structure.erase(map_structure.begin()+i);
			return true;
		}	
	
	}
return false;
}
