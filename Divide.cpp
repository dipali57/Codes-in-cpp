#include<iostream>
using namespace std;
class Divide{
private:
	int iNo1,iNo2;
	double iAns;
public:
	Divide(int i,int j){
		this->iNo1=i;
		this->iNo2=j;
	}
	double DisplayDivision(){
		if(iNo2==0){
			return -1;
		}
		iAns=(double)iNo1/(double)iNo2;	 //type casting
		return iAns;
	}
};
int main(){
	int iValue1=0,iValue2=0;
	double iRet=0.0;
	cout<<"Enter the number:\n";
    cin>>iValue1;
	cout<<"Enter the number:\n";
    cin>>iValue2;
	Divide obj(iValue1,iValue2);
	iRet=obj.DisplayDivision();
	if(iRet=-1)
		cout<<"Division is not possible";
	else
		cout<<iRet;
	return 0;
}
