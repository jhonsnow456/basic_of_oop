#include <iostream>

using namespace std;

class Base{
    int& x;
    public:
        Base(int& a): x{a} {}
        void print() { cout << x << endl; }
};

int main(){
    int k = 23;
    int& r = k;
        Base b(r);
        b.print();
    return 0;
}