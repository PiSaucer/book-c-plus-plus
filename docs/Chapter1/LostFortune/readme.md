# Introducing Lost Fortune

The final project for this chapter, Lost Fortune, is a personalized adventure game in which the player enters a few pieces of information, which the computer uses to enhance a basic adventure story. Figure 1.9 shows a sample run.

I include the file string, part of the standard library, so I can use a string object to access a string through a variable. There’s a lot more to string objects, but I’m going to keep you in suspense. You’ll learn more about them in Chapter 3, “For Loops, Strings, and Arrays: Word Jumble.”

Also, I employ using directives to spell out the objects in the std namespace that I plan to access. As a result, you can clearly see that string is in namespace std.

## Getting Information from the Player

Next I get some information from the player.

```cpp
int main()
{
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	//get the information
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;
```

GOLD_PIECES is a constant that stores the number of gold pieces in the fortune the adventurers seek. adventurers stores the number of adventurers on the quest. killed stores the number that are killed on the journey. I calculate survivors for the number of adventurers that remain. Finally, I get the player’s last name, which I’ll be able to access through leader.

### Trap
> This simple use of cin to get a string from the user only works with strings that have no whitespace in them (such as tabs or spaces). There are ways to compensate for this, but that really requires a discussion of something called *streams*, which is beyond the scope of this chapter. So, use cin in this way, but be aware of its limitations.

## Telling the Story

Next I use the variables to tell the story

```cpp
//tell the story
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << " .\n";

	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the orges were defeated, but a cost. ";
	cout << "Of the adventures, " << killed << " were vanquished.";
	cout << "leaving just " << survivors << " in the group.\n";

	cout << "\nThe party was about to give up all hope. "; 
	cout << "But while laying the deceased to rest. ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So the adventures split " << GOLD_PIECES << " gold pieces.";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course.\n";

	return 0;
}
```

The code and thrilling narrative are pretty clear. I will point out one thing, though. To calculate the number of gold pieces that the leader keeps, I use the modulus operator in the expression GOLD_PIECES % survivors. The expression evaluates to the remainder of GOLD_PIECES / survivors, which is the number of gold pieces that would be left after evenly dividing the stash among all of the surviving adventurers.

# Code
```cpp
// Lost Fortune
// A personalized adventure

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	//get the information
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	//tell the story
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << " .\n";

	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the orges were defeated, but a cost. ";
	cout << "Of the adventures, " << killed << " were vanquished.";
	cout << "leaving just " << survivors << " in the group.\n";

	cout << "\nThe party was about to give up all hope. "; 
	cout << "But while laying the deceased to rest. ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So the adventures split " << GOLD_PIECES << " gold pieces.";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course.\n";

	return 0;
}
```

# Output
```txt
Welcome to Lost Fortune

Please enter the following for your personalized adventure
Enter a number: 10
Enter a number, smaller than the first: 5
Enter your last name: PiSaucer

A brave group of 10 set out on a quest -- in search of the lost treasure of the Ancient Dwarves. The group was led by that legendary rogue, PiSaucer .

Along the way, a band of marauding ogres ambushed the party. All fought bravely under the command of PiSaucer, and the orges were defeated, but a cost. Of the adventures, 5 were vanquished.leaving just 5 in the group.

The party was about to give up all hope. But while laying the deceased to rest. they stumbled upon the buried fortune. So the adventures split 900 gold pieces.PiSaucer held on to the extra 0 pieces to keep things fair of course.
```