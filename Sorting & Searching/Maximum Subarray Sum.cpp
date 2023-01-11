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
    int n,sum,ans;
    cin>>n;
    vector<int> nums(n);
    input(nums,n);
    sum = nums[0];ans = nums[0];
    for(int i=1;i<n;i++){
        sum = max(sum+nums[i],nums[i]);
        ans = max(ans,sum);
    }
    cout<<ans;
    return 0;
}
