#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	x=temp;
}
int main()
{
	int x=5,y=50;
	swap(5,50);
	cout << "the value of x :"<< x<<endl ;
	cout << "the value of y :"<< y<<endl ;
	return 0;
}
