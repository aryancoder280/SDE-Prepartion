

// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    vector<pair<int,int>>ans;
    int i=1,small = 0, large = 0;
    while(i<n) {
        if(price[i]<=price[large]) {
            if(small!=large) {
                ans.push_back({small,large});
            }
            small = large = i;

        }
        else if(price[i]>=price[large]) {
            large = i;
        }
        i++;
    }
    if(small!=large) {
       ans.push_back({small,large});
    }
    if(ans.size() == 0) {
        cout<<"No Profit\n";
    }
    else {
        for(int i=0;i<ans.size();i++) {
            cout<<"("<<ans[i].first<<" "<<ans[i].second<<") ";
        }
        cout<<endl;
    }

}
