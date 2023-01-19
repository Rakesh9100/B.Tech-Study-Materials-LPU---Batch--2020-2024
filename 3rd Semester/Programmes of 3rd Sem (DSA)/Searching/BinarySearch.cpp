#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, item;

    cout<<"How many elements ? ";
    cin>>n;

    cout<<"Enter " <<n<< " elements : ";
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<"Enter element to be searched : ";
    cin>>item;

    int beg=0;
    int end=n-1;
    int mid;

    while(beg<=end)
    {

        mid=(beg+end)/2;
        if(a[mid]==item)
        {
            cout<<"Element found!!";
            break;
        }
        else if(a[mid]>item)
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    
    if(beg>end)
    {
        cout<<"Element not found!!";
    }
}
