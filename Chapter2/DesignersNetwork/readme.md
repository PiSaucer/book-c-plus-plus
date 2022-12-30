# Introducing the Designers Network Program

The Designers Network program simulates a computer network in which only a select group of game designers are members. Like real-world computer systems, each member must enter a username and a password to log in. With a successful login, the member is personally greeted. To log in as a guest, all a user needs to do is enter `guest` at either the username or password prompt. 

# Code
```cpp
// Designers Network
// Demonstrates logical operators

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string username;
	string password;
	bool success;

	cout << "\tGame Designer's Network\n";

	do
	{
		cout << "\nUsername: ";
		cin >> username;

		cout << "Password: ";
		cin >> password;

		if (username == "S.Meier" && password == "civilization")
		{
			cout << "\nHey, Sid. ";
			success = true;
		}

		else if (username == "S.Miyamoto" && password == "mariobros")
		{
			cout << "What's up, Shigeru?";
			success = true;
		}
		else if (username == "W.Wright" && password == "thesims")
		{
			cout << "\nHow goes it, Will?";
			success = true;
		}
		else if (username == "guest" || password == "guest")
		{
			cout << "\nWelcome, guest";
			success = true;
		}
		else {
			cout << "\nYour login failed.";
			success = false;
		}
	} while (!success);

	return 0;
}
```

# Output 

## S.Meier Logon
```
        Game Designer's Network

Username: S.Meier
Password: civilization

Hey, Sid.
```

## S.Miyamoto Logon
```
        Game Designer's Network

Username: S.Miyamoto
Password: mariobros
What's up, Shigeru?
```

## W.Wright Logon
```
        Game Designer's Network

Username: W.Wright
Password: thesims

How goes it, Will?
```

## guest Logon
```
        Game Designer's Network

Username: guest
Password: guest

Welcome, guest
```

## Incorrent Logon
```
        Game Designer's Network

Username: PiSaucer
Password: Password1234

Your login failed.
Username:
```