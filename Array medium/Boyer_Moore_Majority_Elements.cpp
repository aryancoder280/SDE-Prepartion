#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int size)
{

    int count = 1;
    int element = arr[0];
    for(int i=1;i<size;i++) {
        if(arr[i] == element) {
            count++;
        }
        else {
            count--;
        }
        if(count == 0) {
            element = arr[i];
            count = 1;
        }
    }
    // second traverse
    int cnt = 0;
    for(int i=0;i<size;i++) {
        if(arr[i] == element) {
            cnt++;
        }
    }
    int majority = floor(size/2);
    if(cnt>majority) {
        return element;
    }
    return -1;

}
int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<majorityElement(arr,n);
}
