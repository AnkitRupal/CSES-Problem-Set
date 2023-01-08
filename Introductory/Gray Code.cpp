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

void print(vector<vector<int>> const &subsets){
    for(auto &x:subsets){
        for(auto &y:x){
            cout<<y;
        }
        cout<<"\n";
    }
}

signed main(){
    IO();
    int n;
    cin>>n;
    vector<vector<int>> subsets;
    for(int i=0;i<(1<<n);i++){
        vector<int> subset;
        for(int b=n-1;b>=0;b--){
            if(i&(1<<b))
                subset.push_back(1);
            else
                subset.push_back(0);
        }
        for(int b = n-1;b>0;b--)
            subset[b] ^= subset[b-1];
        subsets.push_back(subset);
    }
    print(subsets);
    return 0;
}
