// overloading rules- different type, number and sequence of parameters
#include<bits/stdc++.h>
using namespace std;

int add(int a, int b){
    cout<<"function1"<<endl;
    return (a + b);
}

double add(double a, double b){
    cout<<"function2"<<endl;
    return (a + b);
}

int add(int a, int b, int c){
    cout<<"function3"<<endl;
    return (a + b + c);
}

double add(int a, double b){
    cout<<"function4"<<endl;
    return (a + b);
}

double add(double a, int b){
    cout<<"function5"<<endl;
    return (a + b);
}

int main(){
    cout<<add(1, 2);
    cout<<add(1.2, 2.2);
    cout<<add(1, 2, 3);
    cout<<add(1, 2.2);
    cout<<add(1.2, 2);
    return 0;
}

