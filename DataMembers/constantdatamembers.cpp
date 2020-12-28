#include <iostream>

using namespace std;

class Circle{
    const float pi = 3.14;
    float r;

    public:
        Circle(float r) { this->r = r;}
        float getArea() { return pi * r * r; }
};

class Phone{
    const string phone_model;
    public:
        Phone(string name): phone_model{name}{}
        string getPhoneModel() { return phone_model;} 
};


// note: ex - const int a = 5  is know as initializing 
// a = 7 is known as assigning

int main(){
        Circle c(3.2);
        cout << c.getArea() << endl;

        Phone p("Moto G");
        cout << p.getPhoneModel() << endl;
    return 0;
}