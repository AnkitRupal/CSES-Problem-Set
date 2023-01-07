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
    int n,len = 1,ans = 0;
    string s;
    cin>>s;
    n = s.size();
    s.push_back('$');
    for(int i=1;i<=n;i++){
        if(s[i] == s[i-1]){
            len++;
        }else{
            len = 1;
        }
        ans = max(ans,len);
    }
    cout<<ans;
    return 0;
}
