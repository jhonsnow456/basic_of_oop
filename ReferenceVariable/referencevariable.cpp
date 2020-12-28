#include <iostream>

using namespace std;

int main(){
    int x = 5;
    int &r = x;
    int k = x;

        x++;
        r++;
        cout << "x:" << x << '\n' << "r:" << r << '\n' << "k:" << k << endl;

        cout << "-----------" << endl;
        r = k + 5;
        cout << "x:" << x << '\n' << "r:" << r << '\n' << "k:" << k << endl;

    return 0;
}