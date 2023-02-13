#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() {
    ll t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int cnt = 0;
        vector<int>v;
        for(int i=0;i<n-1;i++) {
            if(__gcd(arr[i],arr[i+1]) == 1) {
                continue;
            }
            else {
              if(arr[i]>arr[i+1]) {
                int num = arr[i+1]/6;
                int nextPrime = num*6+1;
                if(i-1>=0) {
                    while(nextPrime<=arr[i+1] || __gcd(arr[i+1],nextPrime)!=1 ||__gcd(arr[i-1],nextPrime)!=1) {
                        num++;
                        nextPrime = num*6-1;
                    }
                    cnt++;
                    arr[i] = nextPrime;
                    int ind1 = i+1;
                    int ind2 = i+2;
                    int a = arr[i];
                    int b = arr[i+1];
                    v.push_back(ind1);
                    v.push_back(ind2);
                    v.push_back(a);
                    v.push_back(b);
                }
                else {
                    while(nextPrime<=arr[i+1] || __gcd(arr[i+1],nextPrime)!=1) {
                        num++;
                        nextPrime = num*6-1;
                    }
                    cnt++;
                    arr[i] = nextPrime;
                    int ind1 = i+1;
                    int ind2 = i+2;
                    int a = arr[i];
                    int b = arr[i+1];
                    v.push_back(ind1);
                    v.push_back(ind2);
                    v.push_back(a);
                    v.push_back(b);
                }
              }
              else {
                int num = arr[i]/6;
                int nextPrime = (num)*6+1;
                while(nextPrime<=arr[i] || __gcd(arr[i],nextPrime)!=1) {
                    num++;
                    nextPrime = num*6-1;
                }
                cnt++;
                arr[i+1] = nextPrime;
                int ind1 = i+1;
                int ind2 = i+2;
                int a = arr[i];
                int b = nextPrime;
                v.push_back(ind1);
                v.push_back(ind2);
                v.push_back(a);
                v.push_back(b);
              }

            }
        }
        cout<<cnt<<endl;
        int w = 0,x = 1,y = 2, z =3;
        for(int i=0;i<cnt;i++) {
            cout<<v[w]<<" "<<v[x]<<" "<<v[y]<<" "<<v[z]<<endl;
            w = z+1;
            x = w+1;
            y = x+1;
            z = y+1;
        }
    }

}



