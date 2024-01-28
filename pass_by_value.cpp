#include<bits/stdc++.h>
using namespace std;

void passByValue(int x, int y){
    int z = x;
    x = y;
    y = z;
}

void passByRef(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

void passByAddress(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;
}

int main(){
    int a = 5, b = 6;
    cout<<"Before swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;

    // passByValue(a, b);  //Swapping doesnt happen - values are copied
    // passByRef(a, b);   //Swapping happens - here, adress is copied
    passByAddress(&a, &b); //Swapping happens - creates copy of address

    cout<<"After swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;
    return 0;
}