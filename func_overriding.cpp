#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
        void sound(){
            cout<<"animal"<<endl;
        }
};

class dog: public animal{
    public:
        void sound(){
            cout<<"bark"<<endl;
        }
};

class cat: public animal{
    public:
        void sound(){
            cout<<"meow"<<endl;
        }
};

int main(){
    animal a;
    a.sound();
    dog d;
    d.sound();
    cat c;
    c.sound();
    return 0;
}