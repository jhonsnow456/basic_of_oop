#include <iostream>

using namespace std;

// here in the function we are receving address
void function1(int* x){
    cout << "Address of val passed to x is: " << x << endl;
    cout << "Address of x: " << &x << endl;
        
        *x *= 3;
}

int main(){
    int val = 22;
        cout << "Before function call: " << val << endl;
            cout << "Address of val is: " << &val << endl;
            function1(&val);
        cout << "After function call: " << val << endl;
    return 0;
}