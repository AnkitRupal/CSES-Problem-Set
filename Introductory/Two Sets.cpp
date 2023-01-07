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

void print(vector<int> &nums){
    cout<<nums.size()<<"\n";
    for(auto &x:nums)
        cout<<x<<" ";
    cout<<"\n";
    return ;
}

void processSet(int i,int j,int cnt,vector<int> &set1,vector<int> &set2){
    while(cnt--){
        set1.push_back(i++);
        set1.push_back(j--);
    }
    while(i<j){
        set2.push_back(i++);
        set2.push_back(j--);
    }
}

signed main(){
    IO();
    int n;
    cin>>n;
    if(n%4 == 3){
        cout<<"YES\n";
        vector<int> set1,set2;
        set1.push_back(n);
        set2.push_back(1);set2.push_back(n-1);
        processSet(2,n-2,(n-3)/4,set1,set2);
        print(set1);
        print(set2);
    }else if(n%4==0){
        cout<<"YES\n";
        vector<int> set1,set2;
        processSet(1,n,n/4,set1,set2);
        print(set1);
        print(set2);
    }else{
        cout<<"NO\n";
    }
    return 0;
}
