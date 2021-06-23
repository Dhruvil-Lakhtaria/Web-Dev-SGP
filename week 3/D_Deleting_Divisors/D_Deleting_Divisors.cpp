#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool is_prime(long long n)
{
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

long long factor(long long n)
{
    if(n%2 == 0)
    return 2;

    for(int i = 3;i*i<n;i+=2)
    {
        if(n%i == 0)
        {
            return i;
        }
    }
    return -1;
}
void b(long long n);
void a(long long n);

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        a(n);
    }
    
return 0;
}

void b(long long n)
{
    if(is_prime(n))
    {
        cout<<"Alice"<<"\n";
    }
    else{
         a(n - factor(n));
    }
}
void a(long long n){
    if(is_prime(n))
    {
        cout<<"Bob"<<"\n";
        return;
    }
    else
    {
        b(n - factor(n));
    }
}