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

vector<vector<int>> preprocessRanges(void){
    int prod = 10;
    vector<vector<int>> range = {{1,9,1}};
    for(int i=1;i<17;i++,prod*=10)
        range.push_back({range[i-1][1] + 1, (i+1)*prod*9 + range[i-1][1], prod});
    return range;
}

signed main(){
    IO();
    int n,k,digits,starting_num,starting_position,idx,num;
    string number;
    vector<vector<int>> range = preprocessRanges();
    cin>>n;
    while(n--){
        cin>>k;
        for(int i=0;i<18;i++){
            if(range[i][0] <= k && range[i][1] >= k){
                digits = i+1;
                starting_num = range[i][2];
                starting_position = range[i][0];
                break;
            }
        }
        num = (starting_num + ((k-starting_position)/digits));
        idx = k - starting_position - ((digits)*(num - starting_num));
        number = to_string(num);
        cout<<number[idx]<<"\n";
    }
    return 0;
}
