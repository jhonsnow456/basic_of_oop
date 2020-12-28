#include <iostream>

using namespace std;

int main(){
        int a, b, c;

        cout << "Enter the value of a: "; cin >> a;
        cout << "Enter the value of b: "; cin >> b;
        cout << "Enter the value of c: "; cin >> c;
        
        a = b = c;
        cout << "a:" << a << " b:" << b << " c:" << c << endl;

        a = b = c++;
        cout << "a:" << a << " b:" << b << " c:" << c << endl;

        a = b = ++c;
        cout << "a:" << a << " b:" << b << " c:" << c << endl;
        
    return 0;
}