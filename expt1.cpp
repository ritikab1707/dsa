// #include<iostream>
// using namespace std;

// class complex{
//     int x, y;
//     public:
//     complex(){
//         x = 0;
//         y = 0;
//     }
//     friend void operator >>(complex &u, complex &v){
//         cout<<"Please enter real value for first number: "<<endl;
//         cin>>u.x;
//         cout<<"Please enter imaginary value for first number: "<<endl;
//         cin>>u.y;
//         cout<<"Please enter real value for second number: "<<endl;
//         cin>>v.x;
//         cout<<"Please enter imaginary value for second number: "<<endl;
//         cin>>v.y;
//     }
//     friend void operator <<(complex &u, complex &v){
//         cout<<"First complex number is: "<<u.x<<"+"<<u.y<<"i"<<endl;
//         cout<<"First complex number is: "<<v.x<<"+"<<v.y<<"i"<<endl;
//     }
//     friend void operator +(complex &u, complex &v){
//         complex add;
//         add.x = u.x + v.x;
//         add.y = u.y + v.y;
//         if(add.y > 0){
//             cout<<"Addition of two complex numbers is: "<<add.x<<"+"<<add.y<<"i"<<endl;
//         }
//         else{
//             cout<<"Addition of two complex numbers is: "<<add.x<<"+"<<(-1)*add.y<<"-i"<<endl;
//         }
//     }
//     friend void operator -(complex &u, complex &v){
//         complex sub;
//         sub.x = u.x - v.x;
//         sub.y = u.y - v.y;
//         if(sub.y > 0){
//             cout<<"Subtraction of two complex numbers is: "<<sub.x<<"+"<<sub.y<<"i"<<endl;
//         }
//         else{
//             cout<<"Subtraction of two complex numbers is: "<<sub.x<<"+"<<(-1)*sub.y<<"-i"<<endl;
//         }
//     }
//     friend void operator *(complex &u, complex &v){
//         complex mul;
//         mul.x = (u.x * v.x) - (u.y * v.y);
//         mul.y = (u.y * v.x) + (v.y * u.x);
//         if(mul.y > 0){
//             cout<<"Multiplication of two complex numbers is: "<<mul.x<<"+"<<mul.y<<"i"<<endl;
//         }
//         else{
//             cout<<"Multiplication of two complex numbers is: "<<mul.x<<"+"<<(-1)*mul.y<<"-i"<<endl;
//         }
//     }
// };

// int main(){
//     char ch;
//     char des;
//     complex s1, s2;
//     operator >>(s1, s2);
//     operator <<(s1, s2);
//     do{
//         cout<<"Choose the operation to be performed: "<<endl;
//         cout<<"(+) addition"<<endl;
//         cout<<"(-) subtractionn"<<endl;
//         cout<<"(*) multiplication"<<endl;
//         cin>>ch;
//         switch(ch){
//             case '+':
//             s1 + s2;
//             break;
//             case '-':
//             s1 - s2;
//             break;
//             case '*':
//             s1 * s2;
//             break;
//             default:
//             cout<<"Invalid operation"<<endl;
//         }
//         cout<<"Do you want to perform operation again? (Y/ N)";
//         cin>>des;
//     }
//     while(des=='y' || des=='Y');
// }

#include<iostream>
using namespace std;
class data1{
    private:
    string name, classDiv, DOB, address, License;
    int roll;
    char BG;
    long int phone;
    static int count;
    public:
    data1();
    data1(data1 *obj);
    data1(int roll, char BG, long int phone, string name, string classDiv, string DOB, string address, string License);
    void getData();
    void show();
    static int getCount();
    ~data1();
};

int data1::count=0;
data1::data1(){
    roll = 0;
    BG = 'A';
    phone = 0;
    name = "Name";
    classDiv = "Class and Division";
    DOB = "DOB";
    address = "Address";
    License = "License";
    count++;
}

data1::data1(data1 *obj){
    cout<<"Copy constructor"<<endl;
    count++;
}

data1::data1(int roll, char BG, long int phone, string name, string classDiv, string DOB, string address, string License){
    cout<<"Parametrized constructor"<<endl;
    this->roll = roll;
    this-> BG = BG;
    this->phone = phone;
    this->name = name;
    this->classDiv = classDiv;
    this->DOB = DOB;
    this->address = address;
    this->License = License;
    count++;
}

void data1::getData(){
    cout<<"Enter roll number: "<<endl;
    cin>>roll;
    cout<<"Enter blood group: "<<endl;
    cin>>BG;
    cout<<"Enter phone number: "<<endl;
    cin>>phone;
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter class and Division: "<<endl;
    cin>>classDiv;
    cout<<"Enter DOB: "<<endl;
    cin>>DOB;
    cout<<"Enter address: "<<endl;
    cin>>address;
    cout<<"Enter License: "<<endl;
    cin>>License;
}

void data1::show(){
    cout<<"roll number is: "<<roll<<endl;
    cout<<"blood group is: "<<BG<<endl;
    cout<<"phone number is: "<<phone<<endl;
    cout<<"name is: "<<name<<endl;
    cout<<"class and Division are: "<<classDiv<<endl;
    cout<<"DOB is: "<<DOB<<endl;
    cout<<"address is: "<<address<<endl;
    cout<<"License number is: "<<License<<endl;
}

int data1::getCount(){
    return count;
}

data1::~data1(){
    cout<<"Destructor is called"<<endl;
}

int main(){
    int num;
    cout<<"Enter size of database: "<<endl;
    cin>>num;
    data1 *d1 = new data1();
    d1->show();
    delete d1;
    data1 *d2 = new data1(10, 'A', 8408075503, "Ritika", "BE A", "17-07-2002", "Pune", "123");
    d2->show();
    data1 *d3 = new data1(d2);
    d3->show();
    delete d2;
    
    data1 dx[num];
    for(int i = 0; i < num; i++){
        dx[i].getData();
    }
    for(int i = 0; i < num; i++){
        dx[i].show();
    }
    cout<<"number of constructors and Destructors called: "<<data1::getCount()<<endl;
    return 0;
}