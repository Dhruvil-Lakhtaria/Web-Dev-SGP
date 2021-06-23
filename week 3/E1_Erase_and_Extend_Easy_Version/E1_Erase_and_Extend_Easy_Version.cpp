#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int size = s.length();
    bool check = false;
    for(int i = 0;i<s.length()-1;i++)
    {   if(s[i]<s[i+1])
        for(int j = i+1;j<n;j+=i)
        {
            for(int m = 0;m<i;m++)
            {  
                if(s[m]<s[j+m])
            {
                size = j;
                check = true;
                break;
            }
                
            }
            if(check)
            break;
        }
        
        if(check)
        break;
    }
    string ans = "";
    while(ans.length() < k)
    {
         ans = ans.append(s.substr(0,size+1));
    }
    cout<<ans.substr(0,k);

return 0;
}