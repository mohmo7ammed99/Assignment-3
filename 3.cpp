#include<iostream>
using namespace std;
int main()
{
	int number;

	cout<<"Enter a number to get the multiply table for that number from (1-10):"<<endl;
	cin>>number;
	
	for(int i=1; i<=10; i++)
	{
		cout<<number<<" x "<<i<<" = "<<(number * i)<<endl;
 	}
	
	return 0;
}

// was a bit tricky but i did it. it was tricky on finding out the right inputs to set in the program.
//spent ~5 min on it.
