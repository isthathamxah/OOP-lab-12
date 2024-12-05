#include <iostream>
using namespace std;

class Polygon {
public:
    
    double width, height;

   
    virtual void set_values(double w, double h) = 0;

   
    virtual double area() = 0;
};


class Rectangle : public Polygon {
public:
    void set_values(double w, double h) override {
        width = w;
        height = h;
    }
    double area() override {
        return width * height; 
    }
};

class Triangle : public Polygon {
public:
    void set_values(double w, double h) override {
        width = w;
        height = h;
    }
    double area() override {
        return 0.5 * width * height;
    }
};

int main() {
    Rectangle rect;
    Triangle tri;
    double width, height;
    cout << "Enter width and height of the rectangle: ";
    cin >> width >> height;
    rect.set_values(width, height);

    cout << "Enter width and height of the triangle: ";
    cin >> width >> height;
    tri.set_values(width, height);

    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Area of Triangle: " << tri.area() << endl;

    return 0;
}
