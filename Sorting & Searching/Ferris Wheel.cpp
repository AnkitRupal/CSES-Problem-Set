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
    int n,x,i,j,cnt = 0;
    cin>>n>>x;
    vector<int> nums(n);
    input(nums,n);
    sort(nums.begin(),nums.end());
    i = 0;j = n-1;
    while(i <= j){
        if(nums[i] + nums[j] <= x){
            i++;
            j--;
            cnt++;
        }else{
            cnt++;
            j--;
        }
    }
    cout<<cnt;
    return 0;
}
