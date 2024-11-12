#include<bits/stdc++.h>
#define ll long long
using namespace std;
int divisorCount(ll n){
    int cnt=0;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if(i!=n/i) cnt++;
        }
    }
    return cnt;
}
void solve(){
    ll n; cin>>n;
    ll l=1,r=1e18;
    while(l<=r){
        ll mid=(l+r)/2;
        if(divisorCount(mid)>=n){
            r=mid-1;
        }else l=mid+1;
    }
    cout<<r<<endl;
}
int main(){
    solve();
    return 0;
}
