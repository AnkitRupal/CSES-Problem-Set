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
    int n,x,xor_nums = 0,xor_n = 0;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>x;
        xor_n ^= i+1;
        xor_nums ^= x;
    }
    cout<<(xor_n^n^xor_nums);
    return 0;
}
