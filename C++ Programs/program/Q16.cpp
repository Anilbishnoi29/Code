//Q16. Create a distance class to show the addition of two distance objects. Class contains two data members feet and inch.Create addition class to add two objects of distance class.
#include<iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inch;
public:
    void setDistance() {
        cout << "Enter the distance in feet" << endl;
        cin >> this->feet;
        cout << "Enter the distance in inch" << endl;
        cin >> this->inch;
        cout << endl;
    };
    void getDistance() {
        cout << "Total distance is feet : " << this->feet << ", inches : " << this->inch << endl;
    };
    void addDistance( Distance d1, Distance d2 ) {
        this->feet = d1.feet + d2.feet;
        this->inch = d1.inch + d2.inch;
        this->feet += (inch / 12);
        this->inch = inch % 12;
    }
};
int main() {

    Distance pointA;
    pointA.setDistance();

    Distance pointB;
    pointB.setDistance();

    Distance pointC;
    pointC.addDistance( pointA, pointB );
    pointC.getDistance();

    return 0;
}