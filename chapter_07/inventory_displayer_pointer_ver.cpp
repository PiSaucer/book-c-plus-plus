// Inventory Displayer Pointer
// Demonstrates passing constant pointers to constant objects

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string>* const pInventory);

int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");  
    
    display(&inventory);

    return 0;
}

//receive the address of inventory into the pointer pInventory
//pInventory can be a constant pointer because the address it stores doesn't change
//inventory can be accepted as a constant object because the function won't change it
void display(const vector<string>* const pInventory)
{
    cout << "Your items:\n";
    for (vector<string>::const_iterator iter = (*pInventory).begin(); 
         iter != (*pInventory).end(); ++iter)
	{
         cout << *iter << endl;
	}
}

