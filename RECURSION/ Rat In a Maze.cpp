#include<bits/stdc++.h>
vector<string> result;

bool isSafe(int i, int j, int n){
    return i>=0&&i<n&&j>=0&&j<n;
}

void solve(int i, int j,vector<vector<int>> &m, int n,string &temp){
    
    if(!isSafe(i, j, n)||m[i][j]==0){
        return;
    }
    if(i==n-1&&j==n-1){
        result.push_back(temp);
        return;
    }
    m[i][j]=0;

    temp.push_back('D');
    solve(i+1, j, m, n, temp);
    temp.pop_back();

    temp.push_back('R');
    solve(i, j+1, m, n, temp);
    temp.pop_back();

    temp.push_back('U');
    solve(i-1, j, m, n, temp);
    temp.pop_back();

    temp.push_back('L');
    solve(i, j-1, m, n, temp);
    temp.pop_back();

    m[i][j]=1;

}

vector<string> ratMaze(vector<vector<int>> &m) {
    // Write your code here.
    int n = m.size();
    string temp = "";
    solve(0, 0, m , n, temp);
    return result;
}