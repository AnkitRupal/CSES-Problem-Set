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
    int n,currSum = 0   ;
    cin>>n;
    vector<int> nums(n);
    input(nums,n);
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(currSum + 1 < nums[i])
            break;
        currSum += nums[i];
    }
    cout<<currSum+1;
    return 0;
}
