#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isValid(int arr[],int i, int j,int n) {
    int cnt = 0;
    //cout<<i<<" "<<j<<endl;
    if(i == 0) {
        cnt++;
    }
    if(i!=0 && arr[i-1]>arr[i]) {
            cnt++;
    }
    if(j == n-1) {
        cnt++;
    }
    if(j!=n-1 && arr[j]<arr[j+1]) {
        cnt++;
    }
   // cout<<"cnt in fun="<<cnt<<endl;
    if(cnt == 2) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int i=0,j=0;
        int cnt = 0;
        while(i<n) {

            if(isValid(arr,i,j,n)) {
                cnt++;
                i = j+1;
                j  = i;
            }
            else if(j+1<n && arr[j+1] == arr[j]){
                    while(j+1<n &&arr[j]==arr[j+1]) {
                        j++;
                    }
            }
            else {
                i = j+1;
                j = i;
            }
        }
        //cout<<"cnt="<<cnt<<endl;
        if(cnt == 1) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}

