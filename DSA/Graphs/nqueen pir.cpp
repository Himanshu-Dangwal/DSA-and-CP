#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
typedef long long ll;

bool isPossible(int row,int col,vector<vector<int>> &board,int n){
	
	for(int i=row-1;i>=0;i--){
		if(board[i][col] == 1)
			return false;
	}
	
	for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
		if(board[i][j] == 1)
			return false;
	}
	
	for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
		if(board[i][j] == 1)
			return false;
	}
	
	return true;
}

void placeQueens(int n,vector<vector<int>> &board,int row){
	
	if(row == n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	
	for(int col=0;col<n;col++){
		if(isPossible(row,col,board,n)){
			board[row][col] = 1;
			placeQueens(n,board,row+1);
			board[row][col] = 0;
		}
	}
	
}

int main(){

	int n;
	cin>>n;
	
	vector<vector<int>> board(n,vector<int>(n,0));
	
	placeQueens(n,board,0);
	
	return 0;
}



