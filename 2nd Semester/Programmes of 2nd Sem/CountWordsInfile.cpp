#include <iostream>
#include <fstream>
using namespace std;

int main()
{
fstream f;
char ch;
int spaces = 0;
f.open("sample.txt", ios::in);
if(!f)
cout<<"File not found"<<endl;
else
{
while(f)
{
f.get(ch);
if(ch == ' ')
spaces++;
}
f.close();
}
cout<<"No of words: "<<spaces + 1<<endl;

return 0;
}
