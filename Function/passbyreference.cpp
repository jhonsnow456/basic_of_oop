#include <iostream>

using namespace std;

// here & is a reference variable or an alias
void function1(int& x){
    x *= 3;
}

int main(){
    int val = 22;
        cout << "Before function call: " << val << endl;
            function1(val);
        cout << "After function call: " << val << endl;
    return 0;
}