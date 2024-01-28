#include<bits/stdc++.h>
using namespace std;

class Shape{
    protected:
        int width;
        int height;
    public:
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }
};

class Rectangle: public Shape{
    public:
        int getArea(){
            return (width * height);
        }
};

int main(){
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(7);

    cout<<rect.getArea();
    return 0;

}