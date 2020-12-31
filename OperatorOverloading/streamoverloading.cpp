#include <iostream>

class Test{
    int x;
    public:
        Test (int x = 0): x{x}{}
        friend std::istream& operator >> (std::istream& in, Test& o);
        friend std::ostream& operator << (std::ostream& out, Test& o);
};

std::istream& operator >> (std::istream& cin, Test& o){
    cin >> o.x;
    return cin;
}

std::ostream& operator << (std::ostream& cout, Test& o){
    cout << o.x;
    return cout;
}

int main(){
        Test t;
            std::cin >> t;
            std::cout << t << std::endl; 
    return 0;
}