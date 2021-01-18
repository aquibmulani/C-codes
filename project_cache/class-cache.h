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
  		int get(int);
  		void put(int,int);
		bool hit_miss(int key);
		void print_cache(); 		

};

