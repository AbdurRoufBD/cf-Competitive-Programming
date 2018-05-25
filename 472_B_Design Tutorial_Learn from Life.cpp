#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    /*int a[10] = {2,3,3,1,4,6,7,8,4,5};
    sort(a,a+10);
    for(int i = 0; i < 10 ;i++)
    {
        cout<<a[i]<<" ";
    }*/

    int n,mn;
    cin>>n>>mn;
    int a[n];
    for(int i = 0; i < n ;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    int time  = 0;

    for(int i = n-1; i>=0; i-=mn)
    {
        time+= (2*(a[i]-1));
    }

    cout<<time;
}
