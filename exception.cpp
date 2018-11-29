#include<iostream>
using namespace std;
int main()
{
	int i,j,res;
	cout<<"enter no1"<<endl<<"enter no2"<<endl;
	cin>>i>>j;
	try
	{
		if(j==0)
		{
			throw j;
		}
		else
		{
			res=i/j;
			cout<<"result="<<res<<endl;
		}
	}
	catch(int)
	{
		cout<<"can not divide by zero"<<endl;
		
	}
	catch(...)//generic catch 
	{
		cout<<"can not divide by zero"<<endl;
	}

return 0;
}



























