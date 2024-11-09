#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fibo(ll n,ll sum){
    if(n==1 || n==2) return 1;
    return sum += fibo(n-1,sum)+fibo(n-2,sum);
}
int main(){
    int n; cin>>n;
    cout<<fibo(n,0);
    return 0;
}
