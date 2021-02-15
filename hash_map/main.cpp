#include<iostream>
#include "hash_map.h"


using namespace std;


int main()
{
hash_map new_map;
new_map.put(1,10);
new_map.put(2,20);
new_map.put(2,20);
new_map.put(2,20);
new_map.put(2,20);

cout<<"Key Value is : " <<new_map.get(1)<<"\n";

new_map.put(2,80);

cout<<"Key value is : " <<new_map.get(2)<<"\n";

return 0;
}
