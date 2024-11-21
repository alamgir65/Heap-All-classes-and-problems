#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    int ans = ((n*m)/2) + ((n*m)%2);
    cout<<ans<<endl;
}
int main(){
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
