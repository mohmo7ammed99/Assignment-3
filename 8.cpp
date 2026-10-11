#include<iostream>
using namespace std;
int main()
{
	int number,even,odd;
	
	cout<<"Enter a number to decect which number is odd or even starts from 1 to your number: "<<endl;
	cin>>number;
	
	for(int i=1; i<=number; i++)
	{
		if(i%2==0)
		{
		cout<<i<<" - Even"<<endl;
			
		}
		else
		{
		cout<<i<<" - Odd"<<endl;
			
		}
	}
	
	return 0;
}
// it was fun doing it. not that hard but it was kinda confusing.
// spent ~5 min. 
