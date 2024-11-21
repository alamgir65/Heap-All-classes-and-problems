#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int n; cin>>n;
        ll sum=0;
        for(int j=1;j<n;j++){
            if(n%j==0) sum += j;
        }
        cout<<sum<<endl;
    }
    return 0;
}
