#include <iostream>

using namespace std;

class Base{
    const int *x;
    public:
        Base():x{nullptr}{ cout << "Default of constructor" << endl;}
        Base(int *a):x{a}{ cout << "Parametrized constructor" << " value: " << *a << endl; } 
        ~Base(){ delete x; cout << "Destructor is called! " << endl; }
};

int main(){
    int k = 10;
        Base b(new int(k));
    return 0;
}