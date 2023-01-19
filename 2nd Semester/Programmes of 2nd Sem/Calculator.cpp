#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

int add(int, int);
int subt(int, int);
int multi(int, int);
int divide(int, int);

int main()
{
	int x, y;
	char calc;
	
	cout<<"Enter the two values";
	cin>>x>>y;
	while(true)
	{
		cout<<"MENU\n";
		cout<<"1. Enter '+' for add\n";
		cout<<"1. Enter '-' for subt\n";
		cout<<"1. Enter '*' for multi\n";
		cout<<"1. Enter '/' for divide\n";
		cout<<"1. Enter '^' for power\n";
		cout<<"6. Enter '#' to Exit\n";
		
		cout<<"Enter your choice:";
		cin>>calc;
		
		switch(calc)
		{
		case'+':
			cout<<add(x,y)<<endl;
			break;
		case'-':
			cout<<subt(x,y)<<endl;
			break;
		case'*':
			cout<<multi(x,y)<<endl;
			break;
		case'/':
			cout<<divide(x,y)<<endl;
			break;
		case'^':
			cout<<pow(x,y)<<endl;
			break;
		case'#':
			exit(0);
			break;
		default:
			cout<<"Invalid Choice, Enter correct value:";
		
		}
		
	}
	

}

int add(int x,int y)
{
	return x+y;
}
int subt(int x,int y)
{
	return x-y;
}
int multi(int x,int y)
{
	return x*y;
}
int divide(int x,int y)
{
	return x/y;
}
