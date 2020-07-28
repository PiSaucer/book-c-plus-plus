//Heap Data Member
//Demonstrates an object with a dynamically allocated data member

#include <iostream>
#include <string>

using namespace std;

class Critter
{
public: 
    Critter(const string& name = "", int age = 0);  
    ~Critter();                   //destructor prototype   
    Critter(const Critter& c);    //copy constructor prototype
    Critter& Critter::operator=(const Critter& c);  //overloaded assignment op
    void Greet() const; 

private:
    string* m_pName;
    int m_Age;
};

Critter::Critter(const string& name, int age)
{
    cout << "Constructor called\n";
    m_pName = new string(name);
    m_Age = age;  
}

Critter::~Critter()                        //destructor definition
{
    cout << "Destructor called\n";
    delete m_pName;
}

Critter::Critter(const Critter& c)        //copy constructor definition
{
    cout << "Copy Constructor called\n";
    m_pName = new string(*(c.m_pName));
    m_Age = c.m_Age;
}

Critter& Critter::operator=(const Critter& c)  //overloaded assignment op def
{
    cout << "Overloaded Assignment Operator called\n";
    if (this != &c)
    {
        delete m_pName;
        m_pName = new string(*(c.m_pName));
        m_Age = c.m_Age;
    }
    return *this;
}

void Critter::Greet() const
{
     cout << "I'm " << *m_pName << " and I'm " << m_Age << " years old. ";
     cout << "&m_pName: " << cout << &m_pName << endl;
}

void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();

int main()
{
    testDestructor();
    cout << endl;
    
    Critter crit("Poochie", 5);
    crit.Greet();
    testCopyConstructor(crit);
    crit.Greet();
    cout << endl;
    
    testAssignmentOp();

    return 0;
}

void testDestructor()
{
    Critter toDestroy("Rover", 3);
    toDestroy.Greet();
}

void testCopyConstructor(Critter aCopy)  
{
    aCopy.Greet();
}

void testAssignmentOp()
{
    Critter crit1("crit1", 7);
    Critter crit2("crit2", 9);
    crit1 = crit2;
    crit1.Greet();  
    crit2.Greet();
    cout << endl;
        
    Critter crit3("crit", 11);
    crit3 = crit3;
    crit3.Greet();
}

