#include <iostream>
using namespace std;

int main()	{
  
    int a[100],na,j,i, nb, b[100], c[100] ,k;

    cout<<"Enter number of elements in first array :" << endl;
    cin>>na;

    cout<<"Enter array1 elements : " << endl;
    for(i=0;i<na;i++)
    cin>>a[i];

    cout<<"Enter number of elements in second array :" << endl;
    cin>>nb;

    cout<<"Enter array2 elements : " << endl;
    for(j=0;j<nb;j++)
    cin>>b[j];
    i=0;
    j=0;
    for(k=0;k<na+nb;k++)
    {
        if(i==na || j==nb)
        break;

        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }

    if(i==na)
    {
        for(j=j;j<nb;j++)
        c[k++]=b[j];
    }
    else if(j==nb)
    {
        for(i=i;i<na;i++)
        c[k++]=a[i];
    }

    cout<<"New array is : " << endl;
    for(k=0;k<na+nb;k++)
    cout<<c[k]<<" ";
  	
  	return 0;
}
