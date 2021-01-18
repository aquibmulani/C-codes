#include<iostream>
#include<map>
#include "doubly_linked_list.h"
#define CACHE_MAX_SIZE 20

using namespace std;

class caches
{
  private:
               int cache_size; 
               map<int,int> key_register;
               doubly_linked_list track_keys;
                         
  public:
        	caches(int cache_size = 0);
  		int get(int);            // function that returns the requested key from cache
  		void put(int,int);       // function to put a new key in the cache 
		bool hit_miss(int key);  // function that returns if the element was a hit or a miss
		void print_cache(); 	  // function to print the elemebts of cache	
};

