#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define MOD 1000000007

void IO(void){
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
}

signed main(){
    IO();
    int n,ans = 1;
    cin>>n;
    for(int i=0;i<n;i++){
        ans <<=1;
        ans %= MOD;
    }
    cout<<ans;
    return 0;
}
