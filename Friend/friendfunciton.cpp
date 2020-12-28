#include <iostream>

using namespace std;

class Base{
    int x;
    public:
        Base(){}
        Base(int a):x{a}{}

        friend void set(Base&, int);
        friend int get(Base&);
};

void set(Base& o, int value){ o.x = value; }
int get(Base& o) {return o.x;}

int main(){
        Base k(5);
        set(k, 20);
        cout << get(k) << endl;
    return 0;
}