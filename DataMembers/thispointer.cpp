#include <iostream>

using namespace std;

class Base{
    int x;
    public:
        Base(){};
        Base(int a):x{a}{}

        int get(){return this->x;}
        void set(int x){this->x = x;}
};

int main(){
        Base k1;
        Base k2(10);
            cout << k2.get() << endl;
    return 0;
}