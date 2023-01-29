
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool valid = true;
        for(int i=1;i<n;i++){
            if(arr[i]<=arr[i-1]) {
                valid = false;
            }
        }
        if(valid) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }

    }
}
