#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
 
void IO(void){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
}
 
void solve(int n){
    cout<<(((n*n)*((n*n) - 1))/2 - (4*(n-1)*(n-2)))<<"\n";
    return ;
}
 
signed main(){
    IO();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        solve(i);
    return 0;
}