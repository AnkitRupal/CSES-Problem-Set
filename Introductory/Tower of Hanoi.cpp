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
 
void solve(int n,int start,int aux, int end){
    if(n == 0)
        return ;
    solve(n-1,start,end,aux);
    cout<<start<<" "<<end<<"\n";
    solve(n-1,aux,start,end);
    return ;
}
 
signed main(){
    IO();
    int n;
    cin>>n;
    cout<<((1<<n)-1)<<"\n";
    solve(n,1,2,3);
    return 0;
}
