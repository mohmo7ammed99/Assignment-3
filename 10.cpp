#include<iostream>
using namespace std;
int main()
{
	int number,greatest;
	
	cout<<"Enter 10 numbers to detect the greatest number: "<<endl;
	
	for(int i=1; i<=10; i++)
	{
		cin>>number;
		
		if(i==1 || number>greatest)
		{
			greatest=number;	
		}
		
	}
	
	cout<<"The greatest number= "<<greatest<<endl;
	
	return 0;
}

//unfortunatly i couldnt do this one so i used ai...
//sorry.
