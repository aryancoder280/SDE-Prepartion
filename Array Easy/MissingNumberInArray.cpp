#include<bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    int sum = (N*(N+1))/2;
    for(int i=0;i<N-1;i++){
        sum-=A[i];
    }
    return sum;
}
int main() {

    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++) {
        cin>>arr[i];
    }
    cout<<missingNumber(arr,n);
}
