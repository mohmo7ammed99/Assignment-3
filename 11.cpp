#include<iostream>
using namespace std;
int main()
{
	int n,grade;
	int highest,lowest;
	int passed=0, failed=0,excellent=0;
	int sum=0;
	
	cout<<"Enter number of students: "<<endl;
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		cout<<"Enter grade: "<<endl;
		cin>>grade;
		
		if(i==1)
		{
			highest=grade;
			lowest=grade;
		}
		
		if(grade>highest)
		highest=grade;
		
		if(grade<lowest)
		lowest=grade;
		
		sum+=grade;
		
		if(grade>=50)
		passed++;
		
		else
		failed++;
		
		if(grade>=90)
		excellent++;
	}
	
	cout<<endl;
	cout<<"Highest Grade= "<<highest<<endl;
	cout<<"Lowest Grade= "<<lowest<<endl;
	cout<<"Average= "<<(double)sum/n<<endl;
	cout<<"Passed Students= "<<passed<<endl;
	cout<<"Failed Students= "<<failed<<endl;
	cout<<"Excellent Students= "<<excellent<<endl;
	
	return 0;
}

// i used ai here as well. im so sorry...
