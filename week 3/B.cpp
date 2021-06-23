#include<iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    long long n;
    cin>>n;
    cout<<ceil(((-1+ sqrt(1+8*n))/2));
    return 0;
}