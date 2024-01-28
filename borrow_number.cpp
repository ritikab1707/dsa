#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    int f = 0;
    int count = 0;
    if(stoi(s1) < stoi(s2))
        cout<<"not possible";
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] < s2[i]){
            f = 1;
            count++;
        }
        else if(s1[i] == s2[i]){
            if(f == 1)
                count++;
        }
    }
    cout<<count;
    return 0;
}