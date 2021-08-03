//Display maximum of 3 numbers
#include<iostream>
using namespace std;
class Demo
{
	private:
		int No1,No2,No3;
	public:
		Demo(int x,int y,int z)
		{
			this->No1=x;
			this->No2=y;
			this->No3=z;
		}
		void DisplayLarger()
		{
			if((No1>No2)&&(No1>No3))
				cout<<"No1 "<<No1<<" is larger";
			else if((No2>No1)&&(No2>No3))
				cout<<"No2 "<<No2<<" is larger";
			else
				cout<<"No3 "<<No3<<" is larger";

		}

};
int main()
{
int Num1=0,Num2=0,Num3=0;

	cout<<"Enter number 1:";
	cin>>Num1;

	cout<<"Enter Number 2:";
	cin>>Num2;

	cout<<"Enter Number 3:";
	cin>>Num3;

	Demo obj(Num1,Num2,Num3);

	obj.DisplayLarger();

	return 0;
}