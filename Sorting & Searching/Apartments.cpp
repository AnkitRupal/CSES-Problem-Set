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
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return ;
}

bool isApartmentFit(int apartmentSize,int maxSizeDiff,int requirement){
    int leastValidSize = apartmentSize - maxSizeDiff;
    int maxValidSize   = apartmentSize + maxSizeDiff;
    return (requirement >= leastValidSize && requirement <= maxValidSize);
}

bool isApartmentSmall(int apartmentSize,int maxSizeDiff,int requirement){
    int leastValidSize = apartmentSize - maxSizeDiff;
    return requirement < leastValidSize;
}

signed main(){
    IO();
    int n,m,k,i = 0,j = 0,cnt = 0;
    cin>>n>>m>>k;
    vector<int> applicants(n), apartments(m);
    input(applicants,n);
    input(apartments,m);
    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
    while(i<n && j<m){
        if(isApartmentFit(apartments[j],k,applicants[i])){
            cnt++;
            i++;
            j++;
        }else if(isApartmentSmall(apartments[j],k,applicants[i])){
            i++;
        }else{
            j++;
        }
    }
    cout<<cnt;
    return 0;
}
