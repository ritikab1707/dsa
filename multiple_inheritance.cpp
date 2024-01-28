#include<bits/stdc++.h>
using namespace std;

class a{
    public:
        void print(){
            cout<<"class a"<<endl;
        }
};

class b{
    public:
        void print(){
            cout<<"class b"<<endl;
        }
};

class ab: public a, public b{
    //print()->class a
    //print()->class b

    public:
        void print(){
            a::print();
            b::print();
            cout<<"class ab"<<endl;
        }
};

int main(){
    ab obj;
    obj.print();
    return 0;
}