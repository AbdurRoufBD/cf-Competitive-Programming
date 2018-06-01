#include<iostream>
using namespace std;

int main()
{
    int ans = 0;
    int n;
    cin>>n;
    for(int i = 0; i < n ; i++)
    {
        int temp;
        cin>>temp;

        if(temp<= 500000 && temp > ans ) ans = temp - 1;
        else if((1000000 - temp)<= 500000 && (1000000 - temp)>ans) ans = (1000000 - temp);
    }

    cout<<ans;
}
