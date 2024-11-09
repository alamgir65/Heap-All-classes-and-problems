#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define print(flag) (flag)? cout<<"YES\n" : cout<<"NO\n";
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define dqii deque<int> 
#define dqll deque<ll> 
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
double fun(double a, double s) {
    double l = (a - s * s) / (2 * s);
    if (l <= s / 2) return 0;
    double h = sqrt(l * l - (s / 2) * (s / 2));
    return (1.0 / 3.0) * s * s * h;
}
void solve(){
    while(true){
        double a; cin>>a;
        if(a<0) break;
        double l=0,r=sqrt(a);
        ll max_V = 0;
        while(r-l > 1e-7){
            double mid=(l+r)/2;
            double tmp = fun(a,mid);
            if(tmp > max_V){
                max_V = tmp;
            }
            l=mid;
        }
        cout << fixed << setprecision(4) << max_V << endl;
    }
}
love{
    Alamgir
    int t=1;
    // cin>>t;
    for(int i=1;i<=t;i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;    
}