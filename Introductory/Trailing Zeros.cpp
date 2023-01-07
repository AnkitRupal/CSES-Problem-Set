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

signed main(){
    IO();
    int n,ans = 0,power = 5;
    cin>>n;
    while(power <= n){
        ans += (n/power);
        power *= 5;
    }
    cout<<ans;
    return 0;
}
