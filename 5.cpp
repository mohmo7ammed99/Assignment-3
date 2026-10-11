#include<iostream>
using namespace std;
int main()
{
	int number,sum;
	
	cout<<"Enter a number to add one by one starts from 1:"<<endl;
	cin>>number;
	
	for(int i=1; i<=number; i++)
	{
		if(i%2==0)
		{
		cout<<i;
		sum+=i;	
	
		if(i!=(number-1) && number!=i)
			{	
				cout<<" + ";		
			}
		}
	}
	
	cout<<" = "<<sum;
	
	return 0;
}
// i dont know how to not make it type + whenever i enter an odd number...
// in line #15 i tried to put if(sum<number) and it did kinda work, but not as i expected. im still working on it.
// after i did assignment #6 i copied the line in #17. 
// its all messy and all around the place but i did it.
// in lines #14,15 i figured out they need to be at the first *if to run everything correctly.
// spent ~20-25 min.
