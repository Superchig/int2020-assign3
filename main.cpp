#include "pet.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{
  Pet *p1 = new Pet("Ulysses", 4, "dog", 63.7);
  Pet *p2 = new Pet("Pearl", 7, "cat", 9.4);

  cout << p1->getName() << endl;
  cout << setw(10) << "age: " << p1->getAge() << endl;
  cout << setw(10) << "type: " << p1->getType() << endl;
  cout << setw(10) << "weight: " << p1->getWeight() << endl;

  cout << endl;

  cout << p2->getName() << endl;
  cout << setw(10) << "age: " << p2->getAge() << endl;
  cout << setw(10) << "type: " << p2->getType() << endl;
  cout << setw(10) << "weight: " << p2->getWeight() << endl;

  delete p1;
  delete p2;

  return 0;
}