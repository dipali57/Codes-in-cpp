//Display sum of factor
#include<iostream>
using namespace std;

class Demo
{
private:
	int No;
	int sum,i;
public:
	Demo(int x)
	{
	this->No=x;
	}

	int DisplaySumFactor()
	{
		//filter
		if(No==0)
		{
			return -1;
		}
		//input updator
		if(No<0)
		{
			No=-No;
		}
		sum=1;						
		for(i=2;i<=No/2;i++)
			{
				if(No%i==0)
				{
					sum=sum+i;
				}
			}
		return sum;
	}
};
int main()
{
int iNo=0,Ret=0;

	cout<<"Enter no:";
	cin>>iNo;

	Demo obj(iNo);
	Ret=obj.DisplaySumFactor();

	cout<<"sum of "<<iNo<<"factors is:"<<Ret;
	return 0;
}