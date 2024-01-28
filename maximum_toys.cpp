#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    long long k;
    cin>>k;

    long long sum = a[0];
    int right, left = 0;
    int maxi = 0;
    while(right < n){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            maxi = max(maxi, right - left + 1);
        }
        right++;
        if(right < n){
            sum += a[right];
        }
    }
    cout<<maxi;
}