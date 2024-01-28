
// exception - unexpected problem that arises during execution of code.
// exception handling - provides a way to transfer control from one part   of a program to other. Separates the error handling code to handle the actual functionality of the program.
// C++ keywords to handle exceptions - try, catch, and throw 

// try - when you feel an exception might occur you put that piece of code in the try block.

// catch - code to handle that exception is written in catch

// throw - program throws an exception when a problem shows up.

// every try catch should have a corresponding catch block. A single try block can have multiple catch blocks.


#include<iostream>
using namespace std;

int main(){
    int num, den, res;
    cout<<"enter numerator and denominator: "<<endl;
    cin>>num>>den;

    try{
        if(den == 0){
            throw den;
        }
        int res = num / den;
    }
    catch(int ex){
        cout<<"exception: divide by zero is not allowed"<<endl;
    }

    cout<<"result: "<<res;

    return 0;

}