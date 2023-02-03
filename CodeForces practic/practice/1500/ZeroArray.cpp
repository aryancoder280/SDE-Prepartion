#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ll n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>v;
    int i=0,j=n-1;
    while(i<=j) {
        if(i == j) {
            v.push_back(arr[i]);
        }
        else {
            v.push_back(arr[i]);
            v.push_back(arr[j]);
        }
        i++;
        j--;
    }
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

