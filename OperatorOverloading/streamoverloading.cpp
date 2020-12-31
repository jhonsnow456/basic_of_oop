#include <iostream>

class Test{
    int x;
    public:
        Test (int x = 0): x{x}{}
        friend std::istream& operator >> (std::istream& in, Test& o);
        friend std::ostream& operator << (std::ostream& out, Test& o);
};

std::istream& operator >> (std::istream& in, Test& o){
    in >> o.x;
    return in;
}

std::ostream& operator << (std::ostream& out, Test& o){
    out << o.x;
    return out;
}

int main(){
        Test t;
            std::cin >> t;
            std::cout << t << std::endl; 
    return 0;
}