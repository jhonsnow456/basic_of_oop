#include <iostream>

using namespace std;

class Base{
    int* x;
    public:
        Base(int* k): x{k}{ cout << x << endl;}
        void printX() {cout << *x << endl; }
};

int main(){
        int k = 10;
        Base b(&k);

        b.printX();
    return 0;
}