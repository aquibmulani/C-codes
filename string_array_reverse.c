#include<stdio.h>
//#include<>


int main()
{
char * ip[] = {"cat", "dog", "horse"};
int size = sizeof(ip)/sizeof(ip[0]);
char * a = ip[0];
char * b = ip[size-1];


printf("%c",*a);

int i =0;
while(i < size)
{
	*a^= *b;
	*b^= *a;
	*a^= *b;
	a++;
	b--;

}


char * print = ip[0];
printf("%c", print[0]);
//printf("%c",*a);
/*for(int i =0; i < size-1;i++)
{
printf("%s \n", ip[i]);

}*/
return 0;
}
