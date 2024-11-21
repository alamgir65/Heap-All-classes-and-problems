#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    double r; cin>>r;
    double areaS = (2.0 * r)*(2.0 * r);
    double areaC = 3.141592653589793 * r * r;
    double ans = areaS - areaC;
    cout<<fixed<<setprecision(2)<<ans<<endl;
}
int main(){
    int t; cin>>t;
    int i=1;
    while(t--){
        cout<<"Case "<<i++<<": ";
        solve();
    }
    return 0;
}
