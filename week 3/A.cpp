#include<iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n;
    cin>>n;
    int price = floor(1.08*n);
    if(price < 206)
    cout<<"Yay!";
    else if(price == 206)
    cout<<"so-so";
    else
    cout<<":(";
    return 0;
}