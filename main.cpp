#include "pet.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  Pet *p1 = new Pet("Ulysses", 4, "dog", 63.7);
  Pet *p2 = new Pet("Pearl", 7, "cat", 9.4);

  cout << p1->getName() << ':' << endl;
  cout << "\tage: " << p1->getAge() << endl;
  cout << "\ttype: " << p1->getType() << endl;
  cout << "\tweight: " << p1->getWeight() << endl;

  cout << p2->getName() << ':' << endl;
  cout << "\tage: " << p2->getAge() << endl;
  cout << "\ttype: " << p2->getType() << endl;
  cout << "\tweight: " << p2->getWeight() << endl;

  delete p1;
  delete p2;

  return 0;
}