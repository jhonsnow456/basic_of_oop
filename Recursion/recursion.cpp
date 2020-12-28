#include <iostream>

using namespace std;

inline void recursion(int times){
    if (times == 0)
        return;
    cout << "forward: " << times << endl;
        recursion(times - 1);
    cout << "reverse: " << times << endl;    
};

int main(){
        recursion(3);
    return 0;
}