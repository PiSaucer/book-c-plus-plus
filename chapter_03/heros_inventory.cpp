// Hero's Inventory
// Demonstrates arrays

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];

    int numItems = 0;
    inventory[numItems++] = "sword";
    inventory[numItems++] = "armor";
    inventory[numItems++] = "shield";

    cout << "Your items:\n";
    for (int i = 0; i < numItems; ++i)
	{
        cout << inventory[i] << endl;
	}

    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)
	{
        cout << inventory[i] << endl;
	}

    cout << "\nThe item name '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it.\n";

    cout << "\nYou find a healing potion.";
    if (numItems < MAX_ITEMS)
	{
        inventory[numItems++] = "healing potion";
	}
    else
	{
        cout << "You have too many items and can't carry another.";
	}
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)
	{
        cout << inventory[i] << endl;
	}
	
	return 0;
}
