/*
 * Stlshape.cpp
 *
 *  Created on: Jan 16, 2015
 *      Author: swy
 */
//: C07:Stlshape.cpp
// From "Thinking in C++, Volume 2", by Bruce Eckel & Chuck Allison.
// (c) 1995-2004 MindView, Inc. All Rights Reserved.
// See source code use permissions stated in the file 'License.txt',
// distributed with the code package available at www.MindView.net.
// Simple shapes using the STL.
#include <vector>
#include <iostream>
using namespace std;

class Shape {
public:
  virtual void draw() = 0;
  virtual ~Shape() {};
};

class Circle : public Shape {
public:
  void draw() { cout << "Circle::draw" << endl; }
  ~Circle() { cout << "~Circle" << endl; }
};

class Triangle : public Shape {
public:
  void draw() { cout << "Triangle::draw" << endl; }
  ~Triangle() { cout << "~Triangle" << endl; }
};

class Square : public Shape {
public:
  void draw() { cout << "Square::draw" << endl; }
  ~Square() { cout << "~Square" << endl; }
};

int main() {
  typedef std::vector<Shape*> Container;
  typedef Container::iterator Iter;
  Container shapes;
  Shape * Shape_ptr[3];
  Shape_ptr[0]=new Circle;
  Shape_ptr[1]=new Square;
  Shape_ptr[2]=new Triangle;
  shapes.push_back(Shape_ptr[0]);
  shapes.push_back(Shape_ptr[1]);
  shapes.push_back(Shape_ptr[2]);
  for(Iter i = shapes.begin(); i != shapes.end(); i++)
    (*i)->draw();
  // ... Sometime later:
  for(Iter j = shapes.begin(); j != shapes.end(); j++)
    delete *j;
} ///:~



