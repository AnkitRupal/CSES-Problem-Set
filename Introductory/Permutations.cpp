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
    int n;
    cin>>n;
    if(n == 1){
        cout<<"1";
    }else if(n<=3){
        cout<<"NO SOLUTION";
    }else{
        // Printing odd numbers in decreasing order
        for(int i = n - !(n&1); i>0;i-=2){
            cout<<i<<" ";
        }
        for(int i = n - (n&1); i>0;i-=2){
            cout<<i<<" ";
        }
    }
    return 0;
}
