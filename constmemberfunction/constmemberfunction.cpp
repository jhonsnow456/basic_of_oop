#include <iostream>

using namespace std;

class Base{
    int x;
    // mutable int x;
    public:
        Base(){}
        Base(int a):x{a}{}

        void setX(int a) {x = a;}
        int getX() const { return x; }
        // int getX() const { x = 20; return x; } // -> err
};; 

int main(){
        Base b;
        b.setX(5);
        cout << b.getX() << endl;
    return 0;
}