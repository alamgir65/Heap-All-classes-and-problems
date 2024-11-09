#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    while(true){
        int n; cin>>n;
        if(n==0) break;
        int tmp=n;
        for(int i=0;i<4;i++){
            int x=0;
            while(tmp!=0){
                x+=tmp%10;
                tmp/=10;
            }
            tmp=x;
            if(tmp<10) break;
        }
        cout<<tmp<<endl;
    }
    return 0;
}
