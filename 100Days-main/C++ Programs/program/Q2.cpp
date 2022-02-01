#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    const double PI = 3.142;

public:
    Circle( double r ) {
        this->radius = r;
    }
    double getCircleArea() {
        return (radius * radius) * PI;
    }
    double getCirclePerimeter() {
        return (radius * 2) * PI;
    }
};
class Rectangle {
private:
    double length, width;

public:
    Rectangle( double l, double w ) {
        this->length = l;
        this->width = w;
    }
    double getRectangleArea() {
        return (length * width);
    }
    double getRectanglePerimeter() {
        return (length + width) * 2;
    }
};

int main() {
    double circleRadius;
    cout << "Enter the radius of circle : ";
    cin >> circleRadius;
    Circle MyCircle( circleRadius );

    cout << "Area of circle is : " << MyCircle.getCircleArea() << endl;
    cout << "Perimeter of circle is : " << MyCircle.getCirclePerimeter() << endl;

    double rectangleWidth;
    double rectangleLength;
    cout << "Enter the width of Rectangle : ";
    cin >> rectangleWidth;
    cout << "Enter the length of Rectangle : ";
    cin >> rectangleLength;

    Rectangle MyRectangle( rectangleLength, rectangleWidth );

    cout << "Area of Rectangle is : " << MyRectangle.getRectangleArea() << endl;
    cout << "Perimeter of Rectangle is : " << MyRectangle.getRectanglePerimeter() << endl;
    return 0;
}