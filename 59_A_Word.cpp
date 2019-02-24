#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string str;
    cin>>str;

    int smallcounter = 0;
    int stringln = str.size();

    for(int i = 0; i < stringln; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            smallcounter++;
        }
    }

    if(smallcounter>=(stringln-smallcounter))
    {
        for(int i = 0; i < stringln ; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i] = str[i] - 'A' + 'a';
            }
            else continue;
        }
    }
    else
    {
        for(int i = 0; i < stringln ; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
               continue;
            }
            else str[i] = str[i] - 'a' + 'A';
        }
    }

    cout<<str;
}
