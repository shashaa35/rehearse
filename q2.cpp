/*this is a program to find the number which is most frequent
example
if we input 5 numbers 4 4 2 2 2
    output :2
    explanation:frequency of 2 is 3 while frequency of 4 is 2

*/


#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    printf("enter the number of elements(less than 100) you want to enter : ");
    scanf("%d",&n);
    int count[100]={0},i,j;
    printf("enter all elements [NOTE:elements must be less than 100]:\n");
    for(i=0;i<n;i++)
    {
        cin>>j;
        count[j]++;
    }
    int l,ans;
    for(i=0;i<n;i++)
    {
        if(l<count[i])
        {
            l=count[i];
            ans=i;
        }
    }
    printf("%d",ans);
    return 0;
}
