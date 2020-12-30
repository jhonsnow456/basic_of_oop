#include <iostream>

using namespace std;

struct Date{
    unsigned int date;
    unsigned int month;
    unsigned int year;
};
int main(){
    Date d;
        // d.date = 2; d.month = 12; d.year = 2012;
        cout << "Enter the date: "; cin >> d.date;
        cout << "Enter the month:"; cin >> d.month;
        cout << "Enter the year: "; cin >> d.year;

        cout << d.date << "/" << d.month << "/" << d.year << endl;
        cout << sizeof(Date) << endl;
    return 0;
}