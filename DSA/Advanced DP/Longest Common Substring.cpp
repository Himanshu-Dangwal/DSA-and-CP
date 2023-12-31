
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
typedef long long ll;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	
	int dp[s1.length()+1][s2.length()+1];
	int ans = 0;
	for(int i=0;i<=s1.length();i++){
		for(int j=0;j<=s2.length();j++){
			if(i == 0 || j == 0){
				dp[i][j] = 0;
			}else{
				if(s1[i-1] == s2[j-1]){
					dp[i][j] = dp[i-1][j-1] + 1;
				}else{
					dp[i][j] = 0;
				}
			}
			ans = max(ans,dp[i][j]);
		}
	}
	cout<<ans;
	return 0;

	return 0;
}

