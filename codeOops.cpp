#include <iostream>
#include <string>
using namespace std;

// main 4 pillars of oops
// 1. Encapsulation
// 2. Abstractions
// 3. Inheritance
// 4. Polymorphisam
//---------------------------------------------
// Cpp contains 3 access modifier  :
// 1. private (BY DEFAULT)- data and methids accessible inside class
// 2. public data and methods accesible to everyone
// 3. protected data & methods accesible inside class and to its derived class
//-----------------------------------------------
// # Encapsulation
//  -> Encapsulation is a wrapping up of data & member function is a single unit called class.
// data / propeteries +  member functuions  ----> class
// helps :
//  - data hinding / sensitive info
//----------------------------------------------
// # Constructor
// 3 types of constructor :
// 1. non- parameterised contsructor
// 2. parameterised constructor
// 3. copy constructor
// one class can contain multiple constructors with different parameters
// special method invoked automatically at time of object creation. used for initialisation.
// same name as class
// constructor dosen't have a return type
// only called once (automatically) , at object creation
// Memory allocation happens when constructor is called
// always it is contain public class only coz main class have not access for private class
// this is a special pointer in c++ that points to the current object.
// this->prop is same as '(this).prop
// copy constructor (Default) used to copy properties of one object into another.
// shallow & deep copy -> a shallow copy of an object copies all of the members values from one objet to another.
// a deep copy, on the other hand , not only copies the member values but also makes copies of and dynamically allocated memeory that the members too.
//-----------------------------------------------------
// #Destructure - opposite of construture
// - ~classname() {}
// pointer del pointerobj
// destruction occures by itself
//------------------------------------------------------
// #Inheritance
// - when properties & member functions of base class are passed on to the derived class.
// - used fot code reusability
// 3 modes of inheritance
//              |Derived Class    |Derived Class    |Derived Class
//              |                 |                 |
// Base Class   |Private Mode     |Protected Mode   |Public Mode
// Private      |Not Inherited    |Not Inherited    |Not Inherited
// Protected    |Private          |Protected        |Protected
// Public       |Private          |Protected        |Public
// 2 types of Inheritance
// 1. single leval Inheritance
// 2. Multi-leval Inheritance
// 3. Multiple Inheritance
// 4. Hybrid Inheritance
// class Encapsulation and constructor
// ------------------------------------------------------
// #Polymorphism : ploy(multiple) morph(forms)
// polymorphism is the abilty of objects to taken on different forms of behave in different ways depending on the context in which they are used.
// -> Compile Time Polymorphism
// example : constructor overloading , function overloading ,operator overloading
// -> Run Time Polymorphism /Dynamic Polymorphism
// function overriding - parent & child both contain the same function with different implementation. The parent class function is said to be overridden.
// virtual functions : a virtual function is a member function that you expect tp be redefined in derived classes.
// virtual functions are Dynamic in nature.
// Defined by the keyword "virtual" inside a base class and are always declared with a base class and overriden in a child class.
// a virtaul function is called during Runtime
//-----------------------------------------------------------------
// #Abstraction (data hiding)
// Hiding all unnecessary deatils & ahowing only the important parts
// access modifires/specifires are one of the way to implement abstaractions
// another way (using abstract classed)
// abstract classes are used to provided a base class form which other classed can be derived.
// they cannot be instanntiated/objects and are meant to be inherited.
// abstract classes are typically used to define and interface for derived classes.

class Teacher
{
private:
    double salary;

public:
    //  Teacher class non - parameterised contsructor
    Teacher()
    {
        cout << " Hi . I'm constructor." << endl;

        // dy default value from starting
        department = "Computer Science";
    }

    // Copy constructor
    Teacher(const Teacher &t)
    {
        cout << "Copy constructor called!" << endl;
        name = t.name;
        department = t.department;
        subject = t.subject;
        salary = t.salary;
    }

    // parameterised constructor
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        department = d;
        subject = s;
        salary = sal;
    }

    // properties / attributes
    string name;
    string department;
    string subject;

    // methods / member function
    void changeDept(string newDept)
    {
        department = newDept;
    }

    // Setter for salary
    void setSalary(double s)
    {
        salary = s;
    }

    // Getter for salary
    double getSalary()
    {
        return salary;
    }

    // Method to print all details
    void printDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

// inheritance
class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        cout << "i am parent class Persob constructor" << endl;
        this->name = name;
        this->age = age;
    }
    // Person()
    // {
    //     cout << "i am parent class Persob constructor" << endl;
    // }
};

class Student : public Person
{
    // name . age , rollno
public:
    int rollNumber;

    // constructor
    Student(string name, int age, int rollNumber)
        : Person(name, age) // Pass actual values to base class constructor
    {
        cout << "I am Student child class constructor" << endl;
        this->rollNumber = rollNumber;
    }

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll Number : " << rollNumber << endl;
    }
};

// Polymorphism
// Base class
class Animal
{
public:
    string name;

    Animal(string n)
    {
        name = n;
    }

    // Virtual function for runtime polymorphism
    virtual void speak()
    {
        cout << name << " makes a sound." << endl;
    }
};

// Derived class Dog
class Dog : public Animal
{
public:
    Dog(string n) : Animal(n) {}

    // Overriding base class method
    void speak() override
    {
        cout << name << " says: Woof Woof!" << endl;
    }
};

// Derived class Cat
class Cat : public Animal
{
public:
    Cat(string n) : Animal(n) {}

    // Overriding base class method
    void speak() override
    {
        cout << name << " says: Meow Meow!" << endl;
    }
};

int main()
{
    // Calls default constructor
    Teacher t1;
    t1.name = "vibhuti";
    t1.subject = "cpp";
    t1.setSalary(100000);
    t1.printDetails();

    cout << "-----------------" << endl;

    // Calls parameterised constructor
    Teacher t2("vishv", "IT", "Java", 80000);
    t2.printDetails();

    cout << "-----------------" << endl;

    // Calls copy constructor (t3 copies t2)
    Teacher t3(t2);
    t3.printDetails();

    cout << "-----------------" << endl;
    // inhertinace class objects
    // Student s1;
    // s1.name = " sanket";
    // s1.age = 25;
    // s1.rollNumber = 001;

    // s1.getInfo();
    Student s1("Sanket", 25, 1);
    s1.getInfo();

    cout << "---------------------" << endl;
    cout << "I am plomorphism..." << endl;

    // Demonstrating polymorphism
    Animal *a1 = new Dog("Bruno");
    Animal *a2 = new Cat("Kitty");

    // Even though pointers are of type Animal,
    // the correct derived class method is called at runtime
    a1->speak(); // Output: Bruno says: Woof Woof!
    a2->speak(); // Output: Kitty says: Meow Meow!

    // Clean up memory
    delete a1;
    delete a2;

    return 0;
}
