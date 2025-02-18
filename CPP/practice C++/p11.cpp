#include <iostream>
using namespace std;

class Shape
{
public:
  virtual float area() const = 0; // pure virtual function
};

class triangle : public Shape
{
private:
  float base, height;

public:
  triangle(float r, float h) : base(r), height(h) {}
  float area() const override
  {
    return 0.5 * base * height;
  }
};

class Rectangle : public Shape
{
private:
  float width, height;

public:
  Rectangle(float w, float h) : width(w), height(h) {}
  float area() const override
  {
    return width * height;
  }
};

int main()
{
  triangle c(5.0, 2.0);
  Rectangle r(4.1, 6.5);

  cout << "The area of the triangle is: " << c.area() << endl;
  cout << "The area of the rectangle is: " << r.area() << endl;

  return 0;
}
