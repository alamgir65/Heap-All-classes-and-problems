#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v;
ll nCr(ll n,ll r){
    double sum=1;
    for(int i=1;i<=r;i++){
        sum *= (n-i+1)/i;
    }
    return (ll)sum;
}
ll power(ll b, ll p){
    ll res=1;
    while(p>0){
        if(p%2) res *= b,p--;
        else b *= b, p/=2;
    }
    return res;
}

void fun(ll n){
    v.push_back(n);
    if(n>1000000000) return;
    fun(n*10+4);
    fun(n*10+7);
}

int main(){
    ll n; cin>>n;
    fun(0);
    sort(v.begin(),v.end());
    v.resize(unique(v.begin(),v.end())-v.begin());
    cout<< lower_bound(v.begin(),v.end(),n)-v.begin()<<endl;
    return 0;
}
