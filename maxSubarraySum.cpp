#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long curMx = arr[0], ans =arr[0];
    for(int i=1; i<n; ++i){
        curMx+=arr[i];
        ans = max(ans,curMx);
        if(curMx<0)curMx=0;
    }
    return (ans<0)?0:ans;
}