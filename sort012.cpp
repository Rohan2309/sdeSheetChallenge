#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int cnt0=0, cnt1=0, cnt2=0;
    for(int i=0; i<n; ++i){
        switch(arr[i]){
            case 0:
                cnt0++;
                break;
            case 1: 
                cnt1++;
                break;
            case 2:
                cnt2++;
                break;
        }
        
    }
    int i=0;
        while(cnt0--){
            arr[i++]=0;
        }
        while(cnt1--){
            arr[i++]=1;
        }
        while(cnt2--){
            arr[i++]=2;
        }
}