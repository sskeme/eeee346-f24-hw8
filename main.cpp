#include "library.h"

int main() {
  Book obj1("C++ How to Program", 2017, "P. Deitel and H. Deitel", 1080);
  DVD obj2("Toy Story 4", 2019, "Josh Cooley", 100);
  DVD obj3("Home Alone", 1999, "Chris Columbus", 103);

  obj1.display();
  obj2.display();
  obj3.display();

  return 0;
}
