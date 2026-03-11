#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    string sound;

public:
    void setData(string n, string s) {
        name = n;
        sound = s;
    }

    virtual void displayDetails() {
        cout << "Animal: " << name << " makes sound " << sound << endl;
    }
};

class Dog : public Animal {
public:
    void displayDetails() {
        cout << "Dog Name: " << name << endl;
        cout << "Sound: " << sound << endl;
    }
};

class Cat : public Animal { 
public:
    void displayDetails() {
        cout << "Cat Name: " << name << endl;
        cout << "Sound: " << sound << endl;
    }
};

int main() {

    Dog d;
    Cat c;

    d.setData("Dog", "Bark");
    c.setData("Cat", "Meow");

    Animal* animals[2];

    animals[0] = &d;
    animals[1] = &c;

    for(int i = 0; i < 2; i++) {
        animals[i]->displayDetails();
        cout << endl;
    }

    return 0;
}  