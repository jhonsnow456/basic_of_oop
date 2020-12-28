#include <iostream>

using namespace std;

// function overloading
void print(int age){ cout << "age: " << age << endl;}
void print(char gender){ cout << "gender: " << gender << endl;}
void print(string name){ cout << "name: " << name << endl;}

int main(){
    int age = 21;
    char gender = 'M';
    string name = "Aman";

        print(age);
        print(gender);
        print(name);

    return 0;
}

/**
 * 
 * FUCTION OVERLOADING
 * 
 * 1. function can not be overloaded using the different return type
 *      ex- int print(int a){}
 *          void print(int a){}
 * 2. function can not be overloaded using the static keyword before function inside class
 *      ex- static int print(int a){}
 *          int print(int a){}
 * 3. function can not be overloaded if we pass an array or pass array by pointer
 *      ex- void print(int arr[]){}
 *          void print(int* arr){}
 * 4. const and volatile does not make any difference
 *      ex- void print(int a){}
 *          void print(const int a){}
 *          void print(volatile int a){}
 * 5. one function paramrter decclared as function type and another pointer to the same function type are equivalent
 *      ex- int add(int ()){}
 *          void add(int (*)()){}
 * 6. function having default parameter but same tyype of parameter do not make any difference 
 *    hence can not be overloaded
 *      ex - int add(int x){}
 *           int add(int x=5){}
*/