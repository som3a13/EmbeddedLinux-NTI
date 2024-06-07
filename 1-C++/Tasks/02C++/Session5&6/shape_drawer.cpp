#include <iostream>
#include <memory>

class Shape {
private:
    int width;
    int radius;

public:
    int length=1;
    virtual void draw() = 0; // Pure function
    Shape() {}
    virtual ~Shape() {}
};

class circle : public Shape {
public:
    circle() {}
    void draw() override {
        std::cout << "Draw Circle" << std::endl;
    }
    ~circle() {}
};

class rectangle : public Shape {
public:
    rectangle(int w) {}
    void draw() override {
        std::cout << "Draw Rectangle" << std::endl;
    }
    ~rectangle() {std::cout << "Distructor rec is called" << std::endl;}
};

void disp(Shape &obj) {
    obj.draw();
}

int main() {
    std::shared_ptr<Shape> ptr = std::make_shared<rectangle>();
    std::cout << "Reference Count after creating rectangle: " << ptr.use_count() << std::endl;
    ptr->draw();

    // Share ownership by creating another shared_ptr from the existing one
    std::shared_ptr<Shape> ptr2 = ptr;
    std::cout << "Reference Count after creating ptr2: " << ptr.use_count() << std::endl;
    ptr2->draw();

    ptr = std::make_shared<circle>();
    std::cout << "Reference Count after creating circle: " << ptr.use_count() << std::endl;
    ptr->draw();

    circle a;
    disp(a);

    return 0;
}
