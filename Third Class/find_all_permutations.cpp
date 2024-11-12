#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    do{
        for(auto x:a) cout<<x<<" ";
        cout<<endl;
    }
    while(next_permutation(a.begin(),a.end()));
    return 0;
}
