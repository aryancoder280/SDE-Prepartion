
#define M 1000000007
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {

    int n;
    cin>>n;
    int last = 1,lastToLast = 1;
    for(int i=2;i<=n;i++) {
        int sum = (last%M + lastToLast%M)%M;
        lastToLast = last;
        last = sum;
    }
    cout<<last<<endl;
}

