#include<iostream>
using namespace std;
int main()
{
	int password;
	const int correct_password=1234;
	
	for(int i=1; i<=3; i++)
	{
		cout<<"Enter your passsword: "<<endl;
		cin>>password;
		cout<<endl;
		
		if(password==correct_password)
		{
			cout<<"Access Granted"<<endl;
			
			return 0;
		}
			else
			{
				cout<<"Wrong Password"<<endl;
			}
		}
		cout<<"Account Locked"<<endl;
		return 0;		
		
	}
	
	// i used ai here cuz there is no time to finish this sorry...


