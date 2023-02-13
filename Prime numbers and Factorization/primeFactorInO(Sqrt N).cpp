
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

//O(Sqrt N) time brute force
void factor(int n) {

    for(int i=2;i*i<=n;i++) {

        if(n%i == 0) {
            int cnt = 0;
            while(n%i == 0) {
                n/=i;
                cnt++;
            }
            cout<<i<<"^"<<cnt<<", ";
        }
    }
    if(n!=1) {
        cout<<n<<"^"<<1<<endl;
    }
}
int main() {

    ll n;
    cin>>n;
    factor(n);
}

