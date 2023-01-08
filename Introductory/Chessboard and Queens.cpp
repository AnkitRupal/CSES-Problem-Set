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

void N_Queens_Solution(int row,int const &n,int &cnt,vector<bool> &column,vector<bool> &diag1,vector<bool> &diag2,vector<vector<char>> &board){
    if(row == n){
        cnt++;
        return ;
    }
    for(int col = 0;col<n;col++){
        if(column[col] || diag1[row+col] || diag2[n-1+row-col] || board[row][col] == '*')
            continue;
        column[col] = diag1[row+col] = diag2[n-1+row-col] = 1;
        N_Queens_Solution(row+1,n,cnt,column,diag1,diag2,board);
        column[col] = diag1[row+col] = diag2[n-1+row-col] = 0;
    }
    return ;
}

signed main(){
    IO();
    int n = 8,cnt = 0;
    vector<bool> col(n),diag1(2*n),diag2(2*n);
    vector<vector<char>> board(n,vector<char> (n,'.'));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
        }
    }
    N_Queens_Solution(0,n,cnt,col,diag1,diag2,board);
    cout<<cnt;
    return 0;
}
