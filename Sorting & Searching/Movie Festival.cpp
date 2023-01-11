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

void input(vector<pair<int,int>> &nums,int n){
    for(int i=0;i<n;i++)
        cin>>nums[i].second>>nums[i].first;
    return ;
}

void print(vector<pair<int,int>> &nums){
    for(auto &x:nums){
        cout<<x.second<<" "<<x.first<<"\n";
    }
}

signed main(){
    IO();
    int n,i = 1,cnt = 1,starting_time;
    cin>>n;
    vector<pair<int,int>> movieTimes(n);
    input(movieTimes,n);
    sort(movieTimes.begin(),movieTimes.end());
    starting_time = movieTimes[0].first;
    for(i=1;i<n;i++){
        if(starting_time > movieTimes[i].second)
            continue;
        cnt++;
        starting_time = movieTimes[i].first;
    }
    cout<<cnt;
    return 0;
}
