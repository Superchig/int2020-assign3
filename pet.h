#include <string>

using namespace std;

class Pet {
public:
  Pet();
  Pet(string name, int age, string type, double weight);

  // Accessors
  string getName();
  int getAge();
  string getType();
  double getWeight();

  // Mutators
  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);

private:
  string m_name;
  int m_age;
  string m_type; // Either "cat" or "dog"
  double m_weight; // Presumably in pounds
};