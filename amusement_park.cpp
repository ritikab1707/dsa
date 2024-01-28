'''
Problem Statement – Akshay loves to go to WONDERLA , an amusement park. They are offering students who can code well with some discount. Our task is to reduce the cost of the ticket as low as possible.

The cost of tickets can be removed by removing the digits from the price given. They will give some k turns to remove the digits from the price of the ticket. Your task is to help Akshay in coding a program that can help him to reduce the cost of a ticket by removing the digits from its price and getting the maximum possible discount.

Note – You cannot make the cost of a ticket zero. For eg -: If the cost of a ticket is 100, and you have 2 turns to reduce the price, the final price will be 1 and not zero.

Constraints:

1 <= number of tickets <= 10^5
1 <= K < Number of digits in Price of ticket
Input Format for Custom Testing:

The first line contains a string,Tickets, denoting the given cost of each ticket.
The next line contains an integer, K, denoting the number of tickets that is to be removed.
Sample Cases:

Sample Input 1
203
2
Sample Output 1
2
'''

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string v;
    cin>>v;
    int num = stoi(v);

    vector<int> res;

    int rem;
    while(num > 0){
        rem = num % 10;
        if(rem != 0)
            res.push_back(rem);
        num = num / 10;
    }

    sort(res.begin(), res.end());
    cout<<res[0];
    
    return 0;
}