// Q.18 Write a C++ program to create a time class. Implement various constructors for time class. A member function should display the object of time in hour : min: sec format and a member function to add two objects of time class.
#include<iostream>
using namespace std;
class Time {
private:
    int hours, minutes, seconds;
public:
//  H : M : S
    Time( int hour, int minute, int second ) {
        this->hours = hour;
        this->minutes = minute;
        this->seconds = second;
    }
//  Obj 1 + Obj2
    Time( Time& a, Time& b ) {
        this->hours = a.hours + b.hours;
        this->minutes = a.minutes + b.minutes;
        this->seconds = a.seconds + b.seconds;
    }
    // get seconds
    int getSeconds() {
        int sec;
        if (this->seconds < 60)  sec = this->seconds;
        if (this->seconds >= 60) {
            int min = this->seconds / 60;
            this->minutes += min;
            sec = this->seconds % 60;
        }
        return sec;
    };
// get Minutes
    int getMinutes() {
        int min;
        if (this->minutes < 60) min = this->minutes;
        if (this->minutes >= 60) {
            int hour = this->minutes / 60;
            this->hours += hour;
            min = this->minutes % 60;
        }
        return min;
    };
    //  get Hours
    int getHours() { return this->hours; };
    void showTime() {
        int sec = getSeconds();
        int min = getMinutes();
        int hour = getHours();
        cout << "time is " << hour << " : " << min << " : " << sec << endl;
    }
};
int getHours() {
    int hour;
    cout << "Enter Hours : " << endl;
    cin >> hour;
    return hour;
}
int getMinutes() {
    int min;
    cout << "Enter Minutes : " << endl;
    cin >> min;
    return min;
}
int getSecond() {
    int sec;
    cout << "Enter Seconds : " << endl;
    cin >> sec;
    return sec;
}
int main() {
    cout << "Enter the time for Obj-1" << endl;
    Time t1( getHours(), getMinutes(), getSecond() );
    cout << endl;
    cout << "Enter the time for Obj-2" << endl;
    Time t2( getHours(), getMinutes(), getSecond() );
    Time t3( t1, t2 );
    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}