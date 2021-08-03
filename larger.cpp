//maximum of 3 numbers using template
#include<iostream>
using namespace std;
//template declaration
 template<class T>  //template header

//template functin
T maximum(T ino1,T ino2,T ino3)
{
	T max=0;
	if(ino1>=ino2 && ino1>=ino3)
	{
		max= ino1;
	}
	else if(ino2>=ino3 && ino2>=ino1)
	{
		max=ino2;
	}
	else 
	{
		max=ino3;
	}
	return max;
}
int main()
{
	

	int ch=1;
	int val1,val2,val3,iRet=0;
	float f1,f2,f3,fRet=0.0;
	double d1,d2,d3,dRet=0.0;

	cout<<"1.Integer|\n2.float|\n3.Double \n";
	
	while(ch)
	{
	cout<<"Enter your choice:";
	cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"Enter 3 numbers(Integer only):";
				
				cin>>val1;
				cin>>val2;
				cin>>val3;

				iRet=maximum(val1,val2,val3);
				cout<<"largest is:"<<iRet<<"\n";

				break;
		case 2:
			
			cout<<"Enter 3 numbers(Float only):";
				cin>>f1;
				cin>>f2;
				cin>>f3;
				fRet=maximum(f1,f2,f3);
				cout<<"largest is:"<<fRet<<"\n";
				break;

		case 3:
			
			cout<<"Enter 3 numbers(Double):";
				
				cin>>d1;
				cin>>d2;
				cin>>d3;
				dRet=maximum(d1,d2,d3);
				cout<<"largest is:"<<dRet<<"\n";

				break;

		default:
			cout<<"nothing";
			break;
		}
	}
	
	
	return 0;
}