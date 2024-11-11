#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s="abc";
    ll base=31,mul=31,mod=1e9+7;
    int n=s.size();
    ll H=0;
    for(int i=0;i<n;i++){
        H = (H + (s[i]-'a')*base)%mod;
        base = (base*mul)%mod;
    }
    return 0;
}
