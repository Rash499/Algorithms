#include <iostream>

class Shape {
protected:
    float width, height;

public:

    Shape(float a, float b);

    float areaTriangle();

    float areaRectangle();
};

Shape::Shape(float a, float b) : width(a), height(b) {}

float Shape::areaTriangle() {
    return 0.5 * width * height;
}

float Shape::areaRectangle() {
    return width * height;
}

int main() {
    Shape myShape(4.0, 5.0);

    std::cout << "Area of Triangle: " << myShape.areaTriangle() << std::endl;

    std::cout << "Area of Rectangle: " << myShape.areaRectangle() << std::endl;

    return 0;
}
