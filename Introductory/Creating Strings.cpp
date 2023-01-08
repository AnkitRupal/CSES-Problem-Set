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
 
void generate_permutations(int idx,int n,string &s,set<string> &permutations){
    if(idx == n){
        permutations.insert(s);
        return ;
    }
    for(int i = idx;i<n;i++){
        swap(s[i],s[idx]);
        generate_permutations(idx+1,n,s,permutations);
        swap(s[i],s[idx]);
    }
    return ;
}
 
void print(set<string> const &permutations){
    cout<<permutations.size()<<"\n";
    for(auto &x:permutations)
        cout<<x<<"\n";
    return ;
}
 
signed main(){
    IO();
    int n;
    string s;
    cin>>s;
    n = s.size();
    sort(s.begin(),s.end());
    set<string> permutations;
    generate_permutations(0,n,s,permutations);
    print(permutations);
    return 0;
}