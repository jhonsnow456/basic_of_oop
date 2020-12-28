#include <iostream>

using namespace std;

void function1(int x, int y, int z){
    cout << "x: " << x << " y:" << y << " z:" << z << endl;
}

void function2(int x, int y= 32, int z = 19){
    cout << "x: " << x << " y:" << y << " z:" << z << endl;
}

int main(){
    int val = 22;
        cout << "Before function call: " << val << endl;
            function1(val, 20, 30);
            function2(val);
        cout << "After function call: " << val << endl;
    return 0;
}