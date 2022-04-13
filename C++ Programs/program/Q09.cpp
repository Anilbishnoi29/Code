//Q9. Write a C++ program to overload a function to calculate volume of cube, cylinder and rectangular box.
#include<iostream>
using namespace std;
class CalculateVolume {
private:
    const double PI = 3.142;
public:
    void volumeCalculate( double a ) {
        cout << "The volume of Cube is : " << a * a * a << endl;
    }
    void volumeCalculate( double a, double b ) {
        cout << "The volume of Cylinder is : " << PI * a * a * b << endl;
    }
    void volumeCalculate( double a, double b, double c ) {
        cout << "The volume of Rectangle is : " << a * b * c << endl;
    }
};
int main() {
    CalculateVolume CV;
    CV.volumeCalculate( 2 );
    CV.volumeCalculate( 2, 2 );
    CV.volumeCalculate( 2, 2, 2 );
    return 0;
}