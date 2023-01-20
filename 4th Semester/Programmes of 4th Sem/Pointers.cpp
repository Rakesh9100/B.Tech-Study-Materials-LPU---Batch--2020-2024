#include <iostream>
using namespace std;

int main()
{
    int x = 15;
    int * P;
    P = &x;
    cout << P<< endl;
    cout << *P << endl;
    P = P + 2;
    cout << P;
    
}