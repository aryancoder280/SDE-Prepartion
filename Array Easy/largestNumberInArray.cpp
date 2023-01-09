#include<bits/stdc++.h>
using namespace std;
class solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest = 0;
        for(int i=0;i<arr.size();i++) {
            largest = max(largest,arr[i]);
        }
        return largest;
    }
};

int main() {
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    solution obj;
    cout<<obj.largest(v,n);
}
