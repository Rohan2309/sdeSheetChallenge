#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int p=0;
    int minP = prices[0];
    int n = prices.size();
    for(int i=0; i<n; ++i){
        int c = prices[i]-minP;
        p=max(p,c);
        minP=min(minP,prices[i]);
    }
    return p;
}