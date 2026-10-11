#include<iostream>
using namespace std;
int main()
{
	int number,sum;
	
	cout<<"Enter a number to add one by one starts from 1:"<<endl;
	cin>>number;
	
	for(int i=1; i<=number; i++)
	{
		cout<<i;
		
		if(i<number)
		cout<<" + ";
		
		sum+=i;		
	}
	
	cout<<" = "<<sum;
	
	return 0;
}

// in line #17 sum+=i; means add to sum i and then make the new value for sum.
//spent ~15 min trying to figure it out.
