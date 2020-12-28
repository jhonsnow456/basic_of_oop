#include <iostream>

using namespace std;

void happynewyear(){
    cout << "Happy New Year!!" << endl;
}

void parameter(int year){
    cout << year << endl;
}

int main(){
    // function pointer-> <return type> (*<funciton name>)(parameter, ....) = <function_name to be called>
    void (*function0)() = happynewyear;
        function0();
    
    void (*function1)(int) = parameter;
        function1(2021);

    return 0;
}