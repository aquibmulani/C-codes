#include<iostream>
#include "class-cache.h"



caches :: caches(int cache_size)
{
	if(cache_size < CACHE_MAX_SIZE)
	{
		this -> cache_size = cache_size;
		cout<<"Init complete \n";
	}
	else
	{
		cerr<<"Invalid Cache Size. Should be less than 4096 \n";
	}

}
