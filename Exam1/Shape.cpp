#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float area() {
        return 3.14 * radius * radius;
    }

    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }

    void draw() {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {

    Shape* shapes[2];

    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);

    for(int i = 0; i < 2; i++) {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << endl;
    }

    return 0;
}