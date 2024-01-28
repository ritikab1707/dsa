#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        int x;
        base(){
            x = 5;
            y = 7;
            z = 7;
        }
        void printprotected(){
            cout<<y<<endl;
        }
    protected:
        int y;
    private:
        int z;
};

class derived: public base{
    
};

void outside(base obj){
    // cout<<obj.x<<endl;
    obj.printprotected();
    // cout<<obj.z<<endl;
}
int main(){
    base obj1;
    outside(obj1);
    return 0;
}