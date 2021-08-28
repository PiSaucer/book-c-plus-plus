[Docs](../../../) / [Chapter1](../../) / [GameStats](../)
# Introducing the Game Stats 3.0 Program
The Game Stats 3.0 program uses constants to represent values. First the program calculates a player’s score, and then it calculates the upgrade cost of a unit in a strategy game. Figure 1.8 shows the results.

## Working with Constants

A *constant* is an unchangeable value that you name. Constants are useful if you have an unchanging value that comes up frequently in your program. For example, if you were writing a space shooter in which each alien blasted out of the sky is worth 150 points, you could define a constant named ALIEN_POINTS that is equal to 150. Then, any time you need the value of an alien, you could use ALIEN_POINTS instead of the literal 150.

Constants provide two important benefits. First, they make programs clearer. As soon as you see ALIEN_POINTS, you know what it means. If you were to look at some code and see 150, you might not know what the value represents. Second, constants make changes easy. For example, suppose you do some playtesting with your game and you decide that each alien should really be worth 250 points. With constants, all you’d have to do is change the initialization of ALIEN_POINTS in your program. Without constants, you’d have to hunt down every occurrence of 150 and change it to 250.

## Using Constants

I define a constant, ALIEN_POINTS, to represent the point value of an alien.

```cpp
const int ALIEN_POINTS = 150;
```

I simply use the keyword const to modify the definition. Now I can use ALIEN_POINTS just like any integer literal. Also, notice that the name I chose for the constant is in all capital letters. This is just a convention, but it’s a common one. An identifier in all caps tells a programmer that it represents a constant value.

Next I put the constant to use in the following line:

```cpp
int score = aliensKilled * ALIEN_POINTS;
```

I calculate a player’s score by multiplying the number of aliens killed by the point value of an alien. Using a constant here makes the line of code quite clear.

### Trap
> You can’t assign a new value to a constant. If you try, you’ll generate a compile error.

## Using Enumerations

An *enumeration* is a set of unsigned int constants, called enumerators. Usually the enumerators are related and have a particular order. Here’s an example of an enumeration:

```cpp
enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
```

This defines an enumeration named difficulty. By default, the value of enumerators begins at zero and increases by one. So NOVICE is 0, EASY is 1, NORMAL is 2, HARD is 3, and UNBEATABLE is 4. To define an enumeration of your own, use the keyword enum followed by an identifier, followed by a list of enumerators between curly braces.

Next I create a variable of this new enumeration type.

```cpp
difficulty myDifficulty = EASY;
```

The variable myDifficulty is set to EASY (which is equal to 1). myDifficulty is of type difficulty, so it can only hold one of the values defined in the enumeration. That means myDifficulty can only be assigned NOVICE, EASY, NORMAL, HARD, UNBEATABLE, 0, 1, 2, 3, or 4.

Next I define another enumeration.

```cpp
enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
```

This line of code defines the enumeration shipCost, which represents the cost in Resource Points for three kinds of ships in a strategy game. In it, I assign specific integer values to some of the enumerators. The numbers represent the Resource Point value of each ship. You can assign values to the enumerators if you want. Any enumerators that are not assigned values get the value of the previous enumerator plus one. Because I didn’t assign a value to BOMBER_COST, it’s initialized to 26.

Next I define a variable of this new enumeration type.

```cpp
shipCost myShipCost = BOMBER_COST;
```

Then I demonstrate how you can use enumerators in arithmetic calculations.

```cpp
(CRUISER_COST - myShipCost)
```

This piece of code calculates the cost of upgrading a Bomber to a Cruiser. The calculation is the same as 50 - 26, which evaluates to 24.

# Code
```cpp
// Game Stats 3.0
// Demonstrates constants

#include <iostream>
using namespace std;

int main()
{
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;
	
	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;

	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resource Points.\n";

	return 0;
}
```

# Output
```txt
score: 1500

To upgrade my ship to a Cruiser will cost 24 Resource Points.
```