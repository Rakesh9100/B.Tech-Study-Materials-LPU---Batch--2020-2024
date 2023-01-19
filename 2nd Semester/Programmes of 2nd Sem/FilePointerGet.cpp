#include <iostream>
#include <fstream>
using namespace std;

int main()
{
fstream fout;

fout.open("test.txt", ios::out);

fout<<"Hello Coders";
fout.close();

fstream fin;
char data[7];
fin.open("test.txt", ios::in);

fin.seekg(6, ios::beg); //ios::end, ios::cur
fin.read(data, 6);
data[6] = '\0';

cout<<"Data: "<<data;

return 0;
}
