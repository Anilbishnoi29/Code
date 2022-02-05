//Q.20 Create a date class which has data members day, month, and year. Overload operator ‘++’ to increase date by one and create necessary constructors to initialize members.
#include<iostream>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;
public:
    Date( int d, int m, int y ) {
        this->day = d;
        this->month = m;
        this->year = y;
    };
    void showDate() {
        cout << this->day << " : " << this->month << " : " << this->year << endl;
    };
    Date operator++() {
        int tempDay = this->day;
        int tempMonth = this->month;
        int tempYear = this->year;
        Date temp( ++tempDay, tempMonth, tempYear );
        return temp;
    };
};
int main() {
    Date d1( 5, 2, 2022 );
    Date d2 = ++d1;
    d1.showDate();
    d2.showDate();
    return 0;
}