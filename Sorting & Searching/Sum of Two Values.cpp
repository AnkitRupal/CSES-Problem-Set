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

void input(vector<vector<int>> &nums,int n){
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        nums[i].push_back(x);
        nums[i].push_back(i+1);
    }
    return ;
}

void print(vector<int> &nums){
    sort(nums.begin(),nums.end());
    if(nums[0] == -1)
        cout<<"IMPOSSIBLE";
    else
        cout<<nums[0]<<" "<<nums[1]<<"\n";
    return ;
}

signed main(){
    IO();
    int n,x,i,j,sum;
    cin>>n>>x;
    vector<vector<int>> nums(n);
    vector<int> ans = {-1,-1};
    input(nums,n);
    sort(nums.begin(),nums.end());
    i = 0;j = n-1;
    while(i<j){
        sum = nums[i][0] + nums[j][0];
        if(sum == x){
            ans = {nums[i][1] ,nums[j][1]};
            break;
        }else if(sum < x){
            i++;
        }else{
            j--;
        }
    }
    print(ans);
    return 0;
}
