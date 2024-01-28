#include<bits/stdc++.h>
using namespace std;

class base{
    protected:
        int val;
};

class derived1: virtual public base{
    public:
        derived1(){
            val = 1;
        }
        void get(){
            cout<<val;
        }
};

class derived2: virtual public base{
    public:
        derived2(){
            val = 2;
        }
        void get(){
            cout<<val;
        }
};

class derived3: public derived1, public derived2{
    public:
        void get(){
            derived1::get(); 
        }
};
int main(){
    derived3 obj;
    obj.get();
    return 0;
}