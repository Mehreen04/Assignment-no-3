#include<iostream>
#incude"mBasic.h"
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;
	cout<<"Fabonacci series:";
	series::fabonacci(num);
	cout<<endl;
	cout<<"Fatorial of"<<num<<"is "<<fact(num);
}
