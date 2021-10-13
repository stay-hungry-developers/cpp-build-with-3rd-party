#include <iostream>
#include <header.hpp>

using namespace std;

Cls::Cls() {
  std::cout << "Cls ctor" << std::endl;
}

Cls::~Cls() {
  cout << "Cls dtor" << endl;
}

void Cls::SayHello() {
  cout << "hello" << endl;
}


