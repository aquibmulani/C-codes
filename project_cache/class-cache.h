#include<iostream>



#define CACHE_MAX_SIZE 4096

using namespace std;



class caches
{
  private:
               int cache_size; 
  	
  public:
        	caches(int cache_size = 0);
  		int get(int);
  		void put(int,int);
		void hit();
		void miss();
		void print_cache(); 		

};

