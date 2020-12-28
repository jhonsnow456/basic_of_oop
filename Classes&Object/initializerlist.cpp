#include <iostream>

using namespace std;

class Base{
    int x, y;
    public:
        Base(int a, int b): x{a}, y{b} { cout << "x:"<< this->x << " y:" << this-> y << endl;}
        Base(int a):x{a} {cout << "x:" << x << endl;}

        ~Base(){cout << "Destructor is called!" << endl;}
};

int main(){
        Base b1(1, 2), b2(4);
    return 0;
}