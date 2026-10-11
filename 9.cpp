#include<iostream>
using namespace std;
int main()
{
	int number;
	int sum=0;
	int sum_even=0;
	int sum_odd=0;
	
	cout<<"Enter a number to get the sum for all numbers, the sum of even numbers, and the sum of odd numbers starts from 1 to your number: "<<endl;
	cin>>number;
	
	for(int i=1; i<=number; i++)
	{
		if(i%2==0)
		sum_even+=i;
		
		else
		sum_odd+=i;
		
		sum+=i;
	}
	
	cout<<"Sum= "<<sum<<endl
		<<"Even Sum= "<<sum_even<<endl
		<<"Odd Sum= "<<sum_odd<<endl;
	
	
	return 0;
}

// it was easy. didnt think that hard.
// spent ~5 min.
