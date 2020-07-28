// Play Again
// Demonstrates while loops

#include <iostream>
using namespace std;

int main() 
{
	char again = 'y';
	while (again == 'y')
	{
		cout << "\n**Played an exciting game**";
		cout << "\nDo you want to play again? (y/n): ";
		cin >> again;
	}

	cout << "\nOkay, bye.";

    return 0;
}
