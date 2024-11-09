#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+2;
vector<int> v;
bool visited[N];
int main(){
    int n; cin>>n;
    for(int i=2;i<=n;i++){
        if(!visited[i]){
            v.push_back(i);
            for(int j=i*i;j<=n;j+=i){
                visited[j]=true;
            }
        }
    }
    for(auto x:v) cout<<x<<" ";
    return 0;
}
