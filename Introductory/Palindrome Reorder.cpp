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

bool solve(vector<int> &freq){
    bool found = false;
    for(auto &x:freq){
        if(x&1){
            if(found)
                return false;
            found = true;
        }
    }
    return true;
}

signed main(){
    IO();
    int n,i,j;
    char chr='a';
    string s;
    cin>>s;
    n = s.size();
    vector<int> freq(26,0);
    for(auto &x:s)
        freq[x-'A']++;
    if(!solve(freq)){
        cout<<"NO SOLUTION\n";
    }else{
        vector<string> str(n);
        i=0;j=n-1;
        for(int itr=0;itr<26;itr++){
            if(freq[itr]&1){
                chr = (itr+'A');
                freq[itr]--;
            }
            while(freq[itr] > 0){
                str[i++] = (itr+'A');
                str[j--] = (itr+'A');
                freq[itr] -= 2;
            }
        }
        if(chr != 'a')
            str[i] = chr;
        for(auto c:str)
            cout<<c;
    }
    return 0;
}
