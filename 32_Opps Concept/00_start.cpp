#include <iostream>  
using namespace std;  

class Person {
private:
    string name;
    int age;

public:
    // Getter for name
    string getName() const {
        return name;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for name
    void setName(const string& newName) {
        name = newName;
    }

    // Setter for age with validation
    void setAge(int newAge) {
        if (newAge >= 0) {  // Age can't be negative
            age = newAge;
        } else {
            cout << "Invalid age! Age must be positive." << endl;
        }
    }
};

int main()  
{  
    cout << "Hn ji" << endl;

    // Create a Person object
    Person person;

    // Using setters
    person.setName("Rahul");
    person.setAge(25);

    // Using getters
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    // Try setting invalid age
    person.setAge(-5);  // This will show error message
    cout << "Age after invalid attempt: " << person.getAge() << endl;

    return 0;
}