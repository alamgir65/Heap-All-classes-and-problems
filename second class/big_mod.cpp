#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1e9+7;
ll big_mod(ll b,ll p){
    ll res=1;
    while(p>0){
        if(p%2) res *= b, p--;
        else b *= b, p/=2;
    }
    return res;
}
ll BigMod(ll b,ll p){
    if(!p) return 1;
    if(p%2==0){
        ll tmp = BigMod(b,p/2);
        return (tmp*tmp);
    }
    return (b*BigMod(b,p-1));
}
int main(){
    ll b,p; cin>>b>>p;
    cout<<big_mod(b,p)<<endl;
    cout<<BigMod(b,p)<<endl;
    return 0;
}
