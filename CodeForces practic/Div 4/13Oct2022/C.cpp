

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isValid(char matrix[8][8],char c,int i,int j) {

    int cnt = 0;
    if(c == 'R') {
        int ind = 0;
        while(ind<8) {
            if(matrix[i][ind] == 'R')
                cnt++;
            ind++;
        }
        if(cnt == 8) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        int ind = 0;
        while(ind<8) {
            if(matrix[ind][j] == 'B')
                cnt++;
            ind++;
        }
        if(cnt==8) {
            return true;
        }
        else
            return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        char matrix[8][8];
   for(int i=0;i<8;i++) {
    for(int j=0;j<8;j++) {
        char x;
        cin>>x;
        matrix[i][j] = x;

    }

   }
   bool ans = false;
   for(int i=0;i<8 && !ans ;i++) {
    for(int j=0;j<8 && !ans;j++) {
        if(matrix[i][j] == 'B') {
            if(isValid(matrix,'B',i,j))
            {
                cout<<"B\n";
                ans = true;
                break;
            }
        }
        else if(matrix[i][j] == 'R') {
            if(isValid(matrix,'R',i,j))
            {
                cout<<"R\n";
                ans = true;
                break;
            }
        }
    }
   }
    }

}
