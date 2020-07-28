//Critter Farm
//Demonstrates object containment

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Critter
{
public:
    Critter(const string& name = "");
    string GetName() const;  
    
private:
    string m_Name;
};

Critter::Critter(const string& name):
    m_Name(name)
{}

inline string Critter::GetName() const 
{
    return m_Name;
}

class Farm
{
public:
    Farm(int spaces = 1); 
    void Add(const Critter& aCritter);
    void RollCall() const;
    
private:
    vector<Critter> m_Critters;
};

Farm::Farm(int spaces)
{
    m_Critters.reserve(spaces);
}

void Farm::Add(const Critter& aCritter)
{
    m_Critters.push_back(aCritter);
}

void Farm::RollCall() const
{
    for (vector<Critter>::const_iterator iter = m_Critters.begin(); 
         iter != m_Critters.end(); 
         ++iter)
	{
        cout << iter->GetName() << " here.\n";
	}
}

int main()
{
    Critter crit("Poochie");
    cout << "My critter's name is " << crit.GetName() << endl; 

    cout << "\nCreating critter farm.\n";
    Farm myFarm(3);
    
    cout << "\nAdding three critters to the farm.\n";
    myFarm.Add(Critter("Moe"));
    myFarm.Add(Critter("Larry"));
    myFarm.Add(Critter("Curly"));

    cout << "\nCalling Roll...\n";
    myFarm.RollCall();
       
    return 0;
}
