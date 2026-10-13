
#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    Rectangle() {
        width = 0;
        length = 0;
    }

    void setWidth(double w) {
        width = w;
    }

    void setLength(double l) {
        length = l;
    }

    double getWidth() {
        return width;
    }

    double getLength() {
        return length;
    }

    double calculateArea() {
        return width * length;
    }

    double calculatePerimeter() {
        return 2 * (width + length);
    }
};

int main() {
    Rectangle r1;

    r1.setWidth(5);
    r1.setLength(10);

    cout << "Rectangle 1" << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Length: " << r1.getLength() << endl;
    cout << "Area: " << r1.calculateArea() << endl;
    cout << "Perimeter: " << r1.calculatePerimeter() << endl;

    Rectangle r2;

    r2.setWidth(4);
    r2.setLength(6);

    cout << "\nRectangle 2" << endl;
    cout << "Width: " << r2.getWidth() << endl;
    cout << "Length: " << r2.getLength() << endl;
    cout << "Area: " << r2.calculateArea() << endl;
    cout << "Perimeter: " << r2.calculatePerimeter() << endl;

    return 0;
}
