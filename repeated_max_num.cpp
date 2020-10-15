#include<iostream>
#include<vector>

using namespace std;

/*
	input: numbers[5,4,5,3,2,1]
	       q[1,2,3,4,5]

	op :res[2,1,1,1,1]
*/
vector<int> max_num_of_times(vector<int> numbers,vector<int> q)
{	
	vector<int> result;
	int max =0, cnt =0;
	for(int i=0;i < q.size();i++)
	{
		for(int j = q[i]-1;j < numbers.size();j++)
		{
				//cout<<"j=" << q[i] <<"\t";
				if(numbers[j] > max )
				{
					max = numbers[j];
					if(cnt == 0)
					{
						cnt++;
					}
				}
				else if(max == numbers[j])
				{
					cnt++;
				}
		}
//		cout<<"\n";
		result.push_back(cnt);
		cnt =0;
		max = 0;
	}

return result;
}


int main()
{


	vector<int> nums;
	nums.push_back(5);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
		


	vector<int> q;
	q.push_back(1);
	q.push_back(2);
	q.push_back(3);
	q.push_back(4);
	q.push_back(5);
	q.push_back(6);
	q.push_back(7);
	q.push_back(8);


	cout<<"\n";
	vector<int> printit;
	printit = max_num_of_times(nums,q);	

  for(int i =0; i < printit.size();i++)
  {
  	cout<<printit[i] <<"\t";
  }












return 0;
}
