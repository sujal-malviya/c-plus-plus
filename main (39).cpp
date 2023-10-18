//polymorfism;

#include <iostream>

using namespace std;
class Shape {
public:
  virtual void draw() = 0;
};

class Circle : public Shape {
public:
  void draw() override {
    std::cout << "Drawing a circle" << std::endl;
  }
};

class Square : public Shape {
public:
  void draw() override {
    std::cout << "Drawing a square" << std::endl;
  }
};

int main() {
  Shape* shapes[] = {new Circle(), new Square()};

  for (int i = 0; i < 2; i++) {
    shapes[i]->draw();
  }

  for (int i = 0; i < 2; i++) {
    delete shapes[i];
  }

  return 0;
}