// file - used to store data permanently
// stream - represents a device on which input and output operations are performed - iostream

// ofstream - data type that represents output file stream and is used to create files and to write information to files

// ifstream - data type that represents the input file stream and is used to read information from files

// fstream - has capabilities of both ofstream and ifstream

// different modes to open file
// ios::app - appends the content, old content remains same
// ios::in - performing input operation i.e taking input from file
// ios::out - performing output operation i.e write to the file
// ios::ate - at the end of file

//to use any two modes - eg: ios::out|ios::app

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char arr[100];
    cout<<"enter name and age: "<<endl;
    //cin>>arr; //anything after space is ignored, hence getline is used
    cin.getline(arr,100); // passing array name and its size

    //writing to file
    ofstream myfile("xyz.txt", ios::app); //opens the file by default in output mode
    myfile<<arr; //whatever is in the array is written to this file
    myfile.close();

    cout<<"file write operation performed successfully"<<endl<<endl;

    cout<<"reading from file operation started"<<endl;
    char arr1[100];
    ifstream obj("xyz.txt"); //taking input from file
    obj.getline(arr1, 100);
    cout<<"array content: "<<arr1<<endl;
    cout<<"file read operation completed";
    obj.close();
    return 0;
}
