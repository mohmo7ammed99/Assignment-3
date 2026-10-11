#include<iostream>
using namespace std;
int main()
{
	int number,sum;
	
	cout<<"Enter a number to add one by one starts from 1:"<<endl;
	cin>>number;
	
	for(int i=1; i<=number; i++)
	{
		if(i%2!=0)
		{
		cout<<i;
		sum+=i;	
	
		if(i!=(number-1) && number!=i )
			{	
				cout<<" + ";		
			}
		}
	}
	
	cout<<" = "<<sum;
	
	return 0;
}
// i skipped assignment #5 and tried to do this one. in line #17 i did if(i!=(number-1) && number!=i ) which i dont even know how did i came up with that.
// spent ~20 min.
