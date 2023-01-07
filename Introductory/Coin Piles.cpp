n#include<bits/stdc++.h>
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

bool solve(int a,int b){
    if(b > 2*a)
        return 0;
    int diff = b-a;
    if((a-diff)%3 == 0)
        return 1;
    return 0;
}

signed main(){
    IO();
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cout<<(solve(min(x,y), max(x,y)) ? "YES":"NO")<<"\n";
    }
    return 0;
}
