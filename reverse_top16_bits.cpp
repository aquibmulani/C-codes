#include<iostream>
#include<cstdint>
#include<bitset>


using namespace std;

uint32_t reverse_bits(uint32_t ip_num)
{
	uint32_t ret_val =0; 
	while(ip_num)
	{
		ret_val =  (ret_val << 1) | (ip_num & 0x1);
		ip_num>>=1;	
	}
return ret_val;

}

uint32_t reverse_top16(uint32_t ip_num)
{
	uint32_t ret_val =0;
	uint32_t reverse_num =0;
	reverse_num = reverse_bits(ip_num);
        ret_val =    ((reverse_num & 0xFFFF) << 16) | (ip_num & 0xFFFF);
return ret_val;

}



int main()
{
cout<< std::hex <<reverse_top16(2874277887);



return 0;
}
