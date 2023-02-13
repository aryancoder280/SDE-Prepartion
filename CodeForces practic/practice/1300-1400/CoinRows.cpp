#include<bits/stdc++.h>
using namespace std;

typedef long long int  ll;

int main() {
    ll t;
    cin>>t;
    while(t--) {
       int n;
       cin>>n;
       int arr[2][n];
       for(int i=0;i<2;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
       }
       int sum = 0;
       for(int j=0;j<n;j++) {
        sum+=arr[0][j];
       }
       sum-=arr[0][0];
       int i=0,j=0;
       int down = 0;
       int bob = -1;
       bool alice = true;
       while(alice&&i!=2) {
           if(!(sum<down+arr[i+1][j])) {
                down+=arr[i+1][j];
                sum-=arr[i][j+1];
                j++;
            }
            else if(j == n-1 || sum<down+arr[i+1][j]) {
                if(bob==-1) {
                    bob  = max(down,sum);
                }
                alice = false;
            }
       }
       cout<<bob<<endl;
    }
}

