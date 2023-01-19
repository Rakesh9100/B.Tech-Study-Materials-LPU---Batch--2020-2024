#include<iostream>
using namespace std;

int main()

{
	string s1, s2;
	
	char s[20];
	
	cout<<"Enter cin string: ";
	cin>>s1;
	cin.sync();
	cout<<"Enter the getline string: ";
	cin>>ws;
	getline(cin, s2);
		
	cout<<"Cin string: "<<s1<<endl;
	cout<<"Getline string: "<<s2<<endl;
}

