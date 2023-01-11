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

void input(vector<int> &nums,int n){
    for(int i=0;i<n;i++)
        cin>>nums[i];
    return ;
}

signed main(){
    IO();
    int n,median,ans = 0,half;
    cin>>n;
    vector<int> nums(n);
    input(nums,n);
    sort(nums.begin(),nums.end());
    half = (n/2);
    if(n&1){
        median = nums[half];
    }else{
        median = (nums[half] + nums[half-1])/2;
    }
    for(auto &x:nums)
        ans += abs(x-median);
    cout<<ans<<"\n";
    return 0;
}
