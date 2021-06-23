#include<iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,i,j;
        cin>>n>>m>>i>>j;
        if(i == 1)
        {
            cout<<n<<" "<<1<<" "<<
            n<<" "<<m<<"\n";
        }
        else if(i == n)
        {
            cout<<1<<" "<<1<<" "<<1<<" "<<m<<"\n";
        }
        else if(j == 1)
        {
            cout<<1<<" "<<m<<" "<<n<<" "<<m<<"\n";
        }
        else if(j == m)
        {
            cout<<1<<" "<<1<<" "<<n<<" "<<1<<"\n";
        }
        else
        {
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n";
        }
    }

return 0;
}