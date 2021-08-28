[Docs](../../../) / [Chapter1](../../) / [GameStats](../)
# Introducing the Game Stats Program

The Game Stats program displays information that you might want to keep track of in a space shooter game, such as a player’s score, the number of enemies the player has destroyed, and whether the player has his shields up. The program uses a group of variables to accomplish all of this. Figure 1.5 illustrates the program.

## Declaring and Initializing Variables

A *variable* represents a particular piece of your computer’s memory that has been set aside for you to use to store, retrieve, and manipulate data. So if you wanted to keep track of a player’s score, you could create a variable for it, then you could retrieve the score to display it. You could also update the score when the player blasts an alien enemy from the sky.

## Understanding Fundamental Types

Every variable you create has a *type*, which represents the kind of information you can store in the variable. It tells your compiler how much memory to set aside for the variable and it defines exactly what you can legally do with the variable.

*Fundamental types*—those built into the language—include bool for Boolean values (true or false), char for single character values, int for integers, float for single-precision floating point numbers, and double for double-precision floating point numbers.

## Understanding Type Modifiers

You can use modifiers to alter a type. short is a modifier that can reduce the total number of values a variable can hold. long is a modifier that can increase the total number of values a variable can hold. short may decrease the storage space required for a variable while long may increase it. short and long can modify int. long can also modify double.

signed and unsigned are modifiers that work only with integer types. signed means that a variable can store both positive and negative values, while unsigned means that a variable can store only positive values. Neither signed nor unsigned change the total number of values a variable can hold; they only change the range of values. signed is the default for integer types.

Okay, confused with all of your type options? Well, don’t be. Table 1.1 summarizes commonly used types with some modifiers thrown in. The table also provides a range of values for each.

### Trap
> The range of values listed is based on my compiler. Yours might be different. Check your compiler’s documentation.

### Hint
> For brevity’s sake, short int can be written as just short and long int can be written as just long.


| Type               | Values                                 |
|--------------------|----------------------------------------|
| short int          | -32,768 to 32,767                      |
| unsigned short int | 0 to 65,535                            |
| int                | -2,147,483,648 to 2,147,483,647        |
| unsigned int       | 0 to 4,294,967,295                     |
| long int           | -2,147,483,648 to 2,147,483,647        |
| unsigned long int  | 0 to 4,294,967,295                     |
| float              | 3.4E +/- 38 (seven significant digits) |
| double             | 1.47 +/- 308 (15 significant digits)   |
| long double        | 1.47 +/- 308 (15 significant digits)   |
| char               | 256 character values                   |
| bool               | true or false                          |


## Declaring Variables
All right, now that you’ve got a basic understanding of types, it’s time to get back to the program. One of the first things I do is *declare* a variable (request that it be created) with the line:
```cpp
int score;
```

In this code, I declare a variable of type int, which I name score. You use a variable name to access the variable. You can see that to declare a variable you specify its type followed by a name of your choosing. Because the declaration is a statement, it must end with a semicolon.

I declare three more variables of yet three more types in the next three lines. distance is a variable of type double. playAgain is a variable of type char. And shieldsUp is a variable of type bool.

Games (and all major applications) usually require lots of variables. Fortunately, C++ allows you to declare multiple variables of the same type in a single statement. That’s just what I do next in the line.
```cpp
short lives, aliensKilled;
```
This line establishes two short variables—lives and aliensKilled.

Even though I’ve defined a bunch of variables at the top of my main() function, you don’t have to declare all of your variables in one place. As you’ll see later in the program, I often define a new variable just before I use it.

## Naming Variables

To declare a variable, you must provide a name, known as an *identifier*. There are only a few rules you have to follow to create a legal identifier.

- An identifier can contain only numbers, letters, and underscores. 
- An identifier can’t start with a number.
- An identifier can’t be a C++ keyword.

A *keyword* is a special word that C++ reserves for its own use. There aren’t many, but to see a full list, check out Appendix C.

In addition to the rules for creating *legal* variable names, following are some guidelines for creating *good* variable names.

-  **Choose descriptive names.** Variable names should be clear to another programmer. For example, use score instead of s. (One exception to this rule involves variables used for a brief period. In that case, single-letter variable names, such as x, are fine.)
- **Be consistent.** There are different schools of thought about how to write multiword variable names. Is it high_score or highScore? In this book, I use the second style, where the initial letter of the second word (and any other words) is capitalized, known as c*amel case*. But as long as you’re consistent, it’s not important which method you use.
- **Follow the traditions of the language.** Some naming conventions are just traditions. For example, in most languages (C++ included) variable names start with a lowercase letter. Another tradition is to avoid using an underscore as the first character of your variable names. Names that begin with an underscore can have special meaning.
- **Keep the length in check.** Even though playerTwoBonusForRoundOne is descriptive, it can make code hard to read. Plus, long names increase the risk of a typo. As a guideline, try to limit your variable names to fewer than 15 characters. Ultimately, though, your compiler sets an actual upper limit.

### Trick 
> *Self-documenting* code is written in such a way that it’s easy to understand what is happening in the program independent of any comments. Choosing good variable names is an excellent step toward this kind of code. 

## Assigning Values to Variables

In the next group of statements, I assign values to the six variables I declared. I’ll go through a few assignments and talk a little about each variable type.

### Assigning Values to Integer Variables

In the following assignment statement I assign the value of 0 to score.
```cpp
score = 0;
```
Now score stores 0.

You assign a value to a variable by writing the variable name followed by the assignment operator (=) followed by an expression. (Yes, technically 0 is an expression, which evaluates to, well, 0.)

### Assigning Values to Floating Point Variables

In the statement I assign distance the value 1200.76. 
```cpp
distance = 1200.76;
```
Because distance is of type double, I can use it to store a number with a fractional part, which is just what I do.

### Assigning Values to Character Variables

In the following statement I assign playAgain the single-character value ’y’. 
```cpp
playAgain = ’y’;
```
As I did here, you can assign a character to a variable of type char by surrounding the character with single quotes.

Variables of type char can store the 128 ASCII character values (assuming that your system uses the ASCII character set). *ASCII*, short for *American Standard Code for Information Interchange*, is a code for representing characters. To see a complete ASCII listing, check out Appendix D.

### Assigning Values to Boolean Variables

In the following statement I assign shieldsUp the value true.
```cpp
shieldsUp = true;
```
In my program, this means that the player’s shields are up.

shieldsUp is a bool variable, which means it’s a Boolean variable. As such, it can represent either true or false. Although intriguing, you’ll have to wait until Chapter 2, “Truth, Branching, and the Game Loop: Guess My Number,” to learn more about this kind of variable.

## Initializing Variables

You can both declare and assign a value to variables in a single initialization statement. That’s exactly what I do next.
```cpp
double engineTemp = 6572.89;
```
his line creates a variable of type double named engineTemp, which stores the value 6572.89.

Just as you can declare multiple variables in one statement, you can initialize more than one variable in a statement. You can even declare and initialize different variables in a single statement. Mix and match as you choose!

### Hint
> Although you can declare a variable without assigning it a value, it’s best to initialize a new variable with a starting value whenever you can. This makes your code clearer, plus it eliminates the chance of accessing an uninitialized variable, which may contain any value.

## Displaying Variable Values
To display the value of a variable of one of the fundamental types, just send it to cout. That’s what I do next in the program. Note that I don’t try to display shieldsUp because you don’t normally display bool values.

### Hint
> In the first statement of this section I use what’s called an *escape sequence*—a pair of characters that begins with a backslash (\), which represents special printable characters.
```cpp
cout << "\nscore: " << score << endl;
```
> The escape sequence I used is \n, which represents a newline. When sent to cout as part of a string, it’s like pressing the Enter key in the console window. Another useful escape sequence is \t, which acts as a tab.
> There are other escape sequences at your disposal. For a list of escape sequences, see Appendix E.

## Getting User Input

Another way to assign a value to a variable is through user input. So next, I assign the value of a new variable, fuel, based on what the user enters. To do so I use the following line:
```cpp
cin >> fuel;
```
Just like cout, cin is an object defined in iostream, which lives in the std namespace. To store a value in the variable, I use cin followed by >> (the extraction operator), followed by the variable name. You can use cin and the extraction operator to get user input into variables of other fundamental types too. To prove that everything worked, I display fuel to the user.

## Defining New Names for Types

You can define a new name for an existing type. In fact, that’s what I do next in the line:
```cpp
typedef unsigned short int ushort;
```
This code defines the identifier ushort as another name for the type unsigned short int. To define new names for existing types, use typedef followed by the current type, followed by the new name. typedef is often used to create shorter names for types with long names.

You can use your new type name just like the original type. I initialize a ushort variable (which is really just an unsigned short int) named bonus and display its value.

## Understanding Which Types to Use

You have many choices when it comes to the fundamental types. So how do you know which type to use? Well, if you need an integer type, you’re probably best off using int. That’s because int is generally implemented so that it occupies an amount of memory that is most efficiently handled by the computer. If you need to represent integer values greater than the maximum int or values that will never be negative, feel free to use an unsigned int.

If you’re tight on memory, you can use a type that requires less storage. However, on most computers, memory shouldn’t be much of an issue. (Pro- gramming on game consoles or mobile devices is another story.)

Finally, if you need a floating point number, you’re probably best off using float, which again is likely to be implemented so that it occupies an amount of memory that is most efficiently handled by the computer.

# Code 
```cpp
// Game Stats
// Demonstrates declaring and initalizing variable

#include <iostream>
using namespace std;

int main()
{
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives,aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;

	double engineTemp = 6572.89;

	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	//skipping shields up since you don't generally print Boolean values
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;

	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;

	return 0;
}
```

# Output
```txt
score: 0
distance: 1200.76
playAgain: y
lives: 3
aliensKilled: 10
engineTemp: 6572.89

How much fuel? 10
fuel: 10

bonus: 10
```