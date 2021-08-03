//Display factor of a given number
#include<iostream>
using namespace std;

class Demo
{
	private:
	int No,i=0;
	public:
		Demo(int x)
		{
			this->No=x;
		}
		int DisplayFactor()
		{
			 // Filter
			if(No==0)			 // If the input number is 0
			{
				return -1;
			}

			// Input updator
			if(No<0)			// If the input is negative
			{
				No=-No;			// convert that negative number into positive number
			}


			for(i=1;i<=No/2;i++)
			{
				if(No%i==0)
				{
					cout<<i<<endl;
				}
			}
		}
};

int main()
{
int iNo=0;
	cout<<"Enter number:";
	cin>>iNo;

	Demo obj(iNo);
	obj.DisplayFactor();
	return 0;
}