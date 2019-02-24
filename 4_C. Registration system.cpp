#include<iostream>
#include<math.h>
#include<set>
#include<string>
#include<map>
#include<vector>

using namespace std;


int main()
{
    long long n;
    cin>>n;
    map<string,int> stored;

    //map<string,i> stringset;
    vector<string> output;
    for(long long i = 0; i < n; i++)
    {
        string temp;
        cin>>temp;
        if(stored[temp] == 0)
        {
            stored[temp] = 1;
            output.push_back("OK");
        }
        else
        {
            output.push_back(temp+to_string(stored[temp]));
            stored[temp]++;

        }
    }

    long long s = output.size();

    for(long long i = 0; i < s; i++)
    {
        cout<<output[i]<<endl;
    }
}
