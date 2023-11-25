#include<iostream>
#include"mshapes.h"
using namespace std;
int main()
{
	int height,weidth,side;
	cout<<"Enter the dimentions of rectangle(hxw):";
	cin>>height>>weidth;
	shapes::rectangle(height,weidth);
	cout<<endl;
	cout<<"Enter the side length of square:";
	cin>>side;
	shapes::square(side);
	cout<<endl;
	cout<<"Enter the slide of right angle triangle:";
	cin>>height>>weidth;
	rtangle(height,weidth);
	
}
