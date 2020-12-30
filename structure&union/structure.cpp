#include <iostream>

using namespace std;

// class Base0{
//     int x;
// };

// struct Base1{
//     int x;
// };

// int main(){
//         Base0 c; Base1 s;
//         // c.x = 10; 
//         s.x = 50;

//         // note: what we see is classes are basically having private acess specifier 
//         // by default and structure are having public acess specifier
//     return 0;
// }

struct dummy{
    int k;
};

class Base0: dummy{
    int x;
};

struct Base1: dummy{
    int x;
};

int main(){
        Base0 c; Base1 s;
        // c.k = 10; 
        s.k = 50;

        // note: what we see is classes inherit data by private acess specifier 
        // by default and structure are inherit public acess specifier

        // cout << c.k << " ";
        cout << s.k << endl;
    return 0;
}