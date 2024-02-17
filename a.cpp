#include<bits/stdc++.h>

using namespace std;


int32_t main()
{
    char str[100];
    cin>>str;
    for(int i=0;i<100;i++)
    {
        if(str[i]<=122 && str[i]>=97)   
            cout<<str[i]<<str[i];
        else
            return 0;
    }
    return 0;
}