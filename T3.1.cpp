#include <iostream>
using namespace std;
class Rectangle {
public:
    // Constructor
    Rectangle(double length, double width) : length_(length), width_(width) {}

    // Member functions to calculate perimeter and area
    double calculatePerimeter() const {
        return 2 * (length_ + width_);
    }

    double calculateArea() const {
        return length_ * width_;
    }

    // Getter functions for length and width
    double getLength() const {
        return length_;
    }

    double getWidth() const {
        return width_;
    }

private:
    double length_;
    double width_;
};

int main() {
    // Create two rectangles
    Rectangle rectangle1(5.0, 3.0);
    Rectangle rectangle2(4.0, 6.0);

    // Calculate perimeter and area of the first rectangle
    double perimeter1 = rectangle1.calculatePerimeter();
    double area1 = rectangle1.calculateArea();

cout << "Rectangle 1:\n";
    cout << "Perimeter: " << perimeter1 << "\n";
    cout << "Area: " << area1 << "\n\n";

    // Calculate perimeter and area of the second rectangle
    double perimeter2 = rectangle2.calculatePerimeter();
    double area2 = rectangle2.calculateArea();

    cout << "Rectangle 2:\n";
    cout << "Perimeter: " << perimeter2 << "\n";
    cout << "Area: " << area2 << "\n\n";

    // Compare the perimeters and areas
    if (perimeter1 > perimeter2) {
        cout << "Rectangle 1 has a larger perimeter than Rectangle 2.\n";
    }
    else if (perimeter1 < perimeter2) {
        cout << "Rectangle 2 has a larger perimeter than Rectangle 1.\n";
    }
    else {
        cout << "Both rectangles have the same perimeter.\n";
    }

    if (area1 > area2) {
        cout << "Rectangle 1 has a larger area than Rectangle 2.\n";
    }
    else if (area1 < area2) {
        cout << "Rectangle 2 has a larger area than Rectangle 1.\n";
    }
    else {
        cout << "Both rectangles have the same area.\n";
    }

    return 0;
}
