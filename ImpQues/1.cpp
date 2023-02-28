// Multiple Inheritance: 

#include <iostream>
using namespace std;

class A {
 public:
 string name, enroll;

 void getDetails () {
   cout << "Enter your name:" ;
   cin >> this->name;
   cout << "Enter the enrollnment number:";
   cin >> this->enroll;
 }
};

class B {
 public:
 int sub[5];
 void GetMarks() {
  for (int i = 0; i < 5 ; i++) {
   cout << "Enter the Marks of the subject" << i + 1 << ":";
   cin >> sub[i];
   cout << endl;
  }
 }
};


class C: public A, public B {
   public:
   float total;

    C() {
     total = 0;
    }
    void Total () {
    A::getDetails();
    B::GetMarks();

    for (int i = 0; i < 5 ; i++) {
     total += sub[i];
    }

    cout << "The total no of marks are:" << total;
   }
};

int main () {
 C c1;
 c1.Total();

 return 0;
}
