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
    int n,a,b,cnt = 0,ans = 0;
    cin>>n;
    map<int,int> customerTimeTable;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        customerTimeTable[a]++;
        customerTimeTable[b]--;
    }
    for(auto &x:customerTimeTable){
        cnt += x.second;
        ans = max(ans,cnt);
    }
    cout<<ans<<"\n";
    return 0;
}
