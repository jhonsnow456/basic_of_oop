#include <iostream>

using namespace std;

void print(int& x) { cout << "x-non-constant: " << x << endl;}
void print(const int& x) {cout << "x-constant: " << x << endl;}
void print(int* x) { cout << "#x-non-constant: " << *x << endl;}
void print(const int* x) {cout << "#x-constant: " << *x << endl;}

struct Test{
    void print() { cout << "Non-constant" << endl;}
    void print() const {cout << "constant" << endl; }
};

int main(){
    int k = 20;
    const int p = 20;
        print(k);
        print(&k);

        print(p);
        print(&p);

    Test t1;
    Test const t2;

        t1.print();
        t2.print();
        
    return 0;
}