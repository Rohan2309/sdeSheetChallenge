#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.'
    if(n==0)return {};
    int newI=-1;
    for(int i=n-2; i>=0; --i){
        if(permutation[i]<permutation[i+1]){
            newI=i;
            break;
        }
    }
    if(newI==-1){
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    else{
        int newJ=-1;
        for(int j=n-1; j>newI; --j){
            if(permutation[j]>permutation[newI]){
                newJ=j;
                break;
            }
        }
        swap(permutation[newI], permutation[newJ]);
        reverse(permutation.begin()+newI+1, permutation.end());
    }
    return permutation;
}