/*Distribute Candies
Send Feedback
Shaky has N (1<=N<=50000) candy boxes each of them contains a non-zero number of candies (between 1 and 1000000000). 
Shaky want to distibute these candies among his K (1<=K<=1000000000) IIIT-Delhi students. He want to distibute them in a way such that:
1. All students get equal number of candies.
2. All the candies which a student get must be from a single box only.
As he want to make all of them happy so he want to give as many candies as possible. Help Shaky in finding out what is
 the maximum number of candies which a student can get.
Input
First line contains 1<=T<=20 the number of test cases. Then T test cases follow. First line of each test case contains N 
and K. Next line contains N integers, ith of which is the number of candies in ith box.
Output
For each test case print the required answer in a seperate line.
Sample Input:
2
3 2 
3 1 4
4 1
3 2 3 9
Sample Output:
3
9
*/
#include<bits/stdc++.h>
using namespace std;

bool check(long long a[],long long mid,long long k,long long n){
    long long i;
    long long dis=0;
    for(i=0;i<n;i++){
        dis+=a[i]/mid;
    }
    if(dis>=k){
        return true;
    }
    return false;
}

int main(){
    long long n;
    long long t;
    long long a[n];
    long long k;
    cin>>t;
    
    
    while(t--){
        cin>>n>>k;
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long start=0;
        long long end=a[n-1];
        long long ans=0;
        while(start<=end){
            long long mid = (start+end)/2;
            if(check(a,mid,k,n)){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        cout<<ans<<endl;
    }  
}
