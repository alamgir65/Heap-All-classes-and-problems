#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll f(ll n){
    if(n==0) return 1;
    return n*f(n-1);
}
int main(){
    cout<< f(5);
    return 0;
}
