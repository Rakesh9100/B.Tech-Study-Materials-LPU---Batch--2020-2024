#include <iostream>
#include <fstream>
using namespace std;

int main()
{
fstream fout;

fout.open("test.txt", ios::out);

fout<<"Hello Coders";

fout.seekp(-6, ios::end);
fout.write("World", 5);
fout.close();

return 0;
}
