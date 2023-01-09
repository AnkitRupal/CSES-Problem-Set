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

void solve(int idx,int const &n,int curr_sum,int const &total_sum,int &ans,vector<int> const &nums){
    if(idx == n){
        ans = min(ans,abs(2*curr_sum-total_sum));
        return ;
    }
    solve(idx+1,n,curr_sum+nums[idx],total_sum,ans,nums);
    solve(idx+1,n,curr_sum,total_sum,ans,nums);
    return ;
}

signed main(){
    IO();
    int n,sum = 0,ans = INT_MAX;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        sum += nums[i];
    }
    solve(0,n,0,sum,ans,nums);
    cout<<ans;
    return 0;
}