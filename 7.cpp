#include<iostream>
using namespace std;
int main()
{
	int number;
	int sum_even=0;
	int sum_odd=0;
	
	cout<<"Enter a number to calculate how many even and odd numbers are there starts from 1 to your number: "<<endl;
	cin>>number;
	
	for(int i=1; i<=number; i++)
	{
		if(i%2==0)
		sum_even++;
		
		else
		sum_odd++;
	}
	
	cout<<"Even numbers= "<<sum_even<<endl;
	cout<<"Odd numbers= "<<sum_odd<<endl;
	
	return 0;
}

// it was a bit tricky, not that hard.
// at first i didnt add whats there at line #6,7 so if i entered the number 10 it would give me even=5, odd=6 whick i dont know why
// thats why i made ((sum_even)&(sum_odd))=0
// spent ~7 min.
