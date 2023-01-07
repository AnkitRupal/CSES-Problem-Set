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
    while(true){
        cout<<n<<" ";
        if(n==1){
            break;
        }
        if(n%2 == 0){
            n/=2;
        }else{
            n = 3*n+1;
        }
    }
    return 0;
}
