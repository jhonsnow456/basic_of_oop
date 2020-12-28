#include <iostream>

using namespace std;

inline int iterate(int n){
        if (n == 0) {
            return 0;
        }
        cout << n << endl;
    return iterate(n-1);
}
int main(){
        cout << iterate(6) << endl;
    return 0;
}