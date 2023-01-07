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
    int n,prev,curr,ans = 0;
    cin>>n>>prev;
    for(int i=0;i<n-1;i++){
        cin>>curr;
        if(curr<prev){
            ans += prev-curr;
        }else{
            prev = curr;
        }
    }
    cout<<ans;
    return 0;
}
