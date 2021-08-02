#include<iostream>
using namespace std;

typedef int BOOLEAN;
#define TRUE 1
#define FALSE 0

class Demo
{
private:
	int No,Res;

public:
	
	Demo(int x)
	{
		this->No=x;
	}
	BOOLEAN Check()
	{
		Res=No%2;
		if(Res==0)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
};

int main()
{
	int iNo=0;
	BOOLEAN iRet=FALSE;

	cout<<"Enter number:";
	cin>>iNo;
	Demo obj(iNo);		//object of class
	iRet=obj.Check();		//call function using object
	
	if(iRet==TRUE)
	{
		cout<<"Number is even";
	}
	else
		cout<<"Number is odd";
	return 0;
}