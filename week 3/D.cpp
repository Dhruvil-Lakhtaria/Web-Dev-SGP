#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    int v[n] = {0};
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s = 0,e = n-1,k = 0;
    while(s<e)
    {
        if(arr[s] != arr[e])
        {
            v[k] = arr[s];
            v[k+1] = arr[e];
            k+=2;
        }
        s++;
        e--;
    }
    sort(v,v+k);
    
    int count = k/2;
    int paired = 0;
    for(int i = 0;i<k-1;i++)
    {
        if(v[i] == v[i+1])
        {
            paired++;
            i++;
        }
    }
    if(n == 1)
    cout<<0;
    else
    {
        if(count == paired)
        {
            cout<<count-1;
        }
        else
        cout<<count;
    }
    
    return 0;
}