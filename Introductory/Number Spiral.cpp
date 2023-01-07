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
    int t,row,col,ans;
    cin>>t;
    while(t--){
        cin>>row>>col;
        if(row >= col){
            if(row&1){
                ans = ((row-1)*(row-1)) + col;
            }else{
                ans = (row*row) - col + 1;
            }
        }else{
            if(col&1){
                ans = (col*col) - row + 1;
            }else{
                ans = ((col-1)*(col-1)) + row;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
