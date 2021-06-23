#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    long long sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <int> a(n);
        sum = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
        }
        if(sum == n)
        {
            cout<<0<<"\n";
        }
        else if(sum < n)
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<sum - n<<"\n";
        }
    }
    
    return 0;
}