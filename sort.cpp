//you have to sort the numbers
#include <iostream>

using namespace std;

int main()
{
    int i,j,a[100],t,n;
    cout<<"enter the number of elements(less than 100) you want to sort:";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<"\nsorted output is: ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
