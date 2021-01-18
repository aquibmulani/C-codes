#include<iostream>
#include "class-cache.h"


caches :: caches(int cache_size)
{
	if(cache_size < CACHE_MAX_SIZE)
	{
		this -> cache_size = cache_size;
	}
	else
	{
		cerr<<"Invalid Cache Size. Should be less than 4096 \n";
	}

}

int caches:: get(int key)
{
	if(key_register.empty())
	{
		cerr<<"Cache Empty\n";
	}
  	
  	if(key_register[key])
  	{
  		track_keys.delete_node(key);
  		
  		if(track_keys.add_end(key))
  		{
		return key_register[key];  	
		}
		else
		{
			cerr<<"Failed to enter in cache";
		}
  	}
 	
 	return -1;
}


void caches::put(int key, int value)
{

	if(track_keys.length_list() > this -> cache_size)
	{
	  	if(key_register[key])
	  	{	
	  		if(!(track_keys.delete_node(key)))
	  		{
				cerr<<"Failed to remove entry from cache";

	  		}
	  		
	  		if(track_keys.add_end(key))
	  		{
		  		key_register[key]= value;	
	  		}
	  		else
	  		{
				cerr<<"Failed to enter in cache";

	  		}
		}
		else
		{
			key_register.erase(track_keys.front_of_list());
			track_keys.delete_front_of_list();
	  		if(track_keys.add_end(key))
	  		{
		  		key_register[key]= value;	
	  		}
	  		else
	  		{
				cerr<<"Failed to enter in cache";

	  		}
		
		}
	}
	else
	{
		
	  	if(key_register[key])
	  	{	
	  		//cout<<"Here";
	  		track_keys.delete_node(key);
	  		if(track_keys.add_end(key))
	  		{
		  		key_register[key]= value;	
	  		}
	  		else
	  		{
				cerr<<"Failed to enter in cache";

	  		}
		}
		else
		{	
	  		if(track_keys.add_end(key))
	  		{
		  		key_register[key]= value;	
	  		}
	  		else
	  		{
				cerr<<"Failed to enter in cache";

	  		}
		}
	}



}

bool caches::hit_miss(int key)
{
	if(key_register.find(key) != key_register.end())
	{
		return 1;
	}
	return 0;
}



void caches::print_cache() 		
{
	track_keys.print_list();
}









