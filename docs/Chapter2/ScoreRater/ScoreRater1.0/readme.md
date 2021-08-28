[Docs](../../../) / [Chapter2](../../) / [ScoreRater](../)
# Introducing the Score Rater Program

So far, the programs you’ve seen have been linear—each statement executes, in order, from top to bottom. However, to create interesting games, you need to write programs that execute (or skip) sections of code based on some condition. That’s the main topic of this chapter. Specifically, you’ll learn to:

- Understand truth (as C++ defines it)
- Use `if` statements to branch to sections of code
- Use `switch` statements to select a section of code to execute
- Use `while` and `do` loops to repeat sections of code
- Generate random numbers

## Understanding Truth

Truth is black and white, at least as far as C++ is concerned. You can represent true and false with their corresponding keywords, `true` and `false`. You can store such a Boolean value with a `bool` variable, as you saw in Chapter 1. Here’s a quick refresher:

```cpp
bool fact = true, fiction = false;
```

This code creates two bool variables, `fact` and `fiction`. `fact` is `true` and `fiction` is `false`. Although the keywords `true` and `false` are handy, any expression or value can be interpreted as `true` or `false`, too. Any non-zero value can be
interpreted as `true`, while 0 can be interpreted as `false`.

A common kind of expression interpreted as `true` or `false` involves comparing things. Comparisons are often made by using built-in relational operators. Table 2.1 lists the operators and a few sample expressions.

Table 2.1 - Relational Operators

| Operator 	|          Meaning         	| Sample Expression 	|  Evaluates To 	|
|:--------:	|:------------------------:	|:-----------------:	|:-------------:	|
|    ==    	| equal to                 	| 5 == 5<br>5 == 8  	| true<br>false 	|
|    !=    	| not equal to             	| 5 != 8<br>5 != 5  	| true<br>false 	|
|     >    	| greater than             	| 8 > 5<br>5 > 8    	| true<br>false 	|
|     <    	| less than                	| 5 < 8<br>8 < 5    	| true<br>false 	|
|    >=    	| greater than or equal to 	| 8 >= 5<br>5 >= 8  	| true<br>false 	|
|    <=    	| less than or equal to    	| 5 <= 8<br>8 <= 8  	| true<br>false 	|


## Using the if Statement

Okay, it’s time to put the concepts of true and false to work. You can use an `if` statement to test an expression for truth and execute some code based on it. Here’s a simple form of the `if` statement:

```cpp
if (expression) 
    statement;
```

If *expression* is `true`, then *statement* is executed. Otherwise, *statement* is skipped and the program branches to the statement after the `if` suite.

### Hint
> Whenever you see a generic `statement` like in the preceding code example, you can replace it with a single statement or a block of statements because a block is treated as a single unit.

## Testing true and false

In the first `if` statement I test `true`. Because `true` is, well, true, the program displays the message, “This is always displayed.”

```cpp
if (true) {
    cout << "This is always displayed.\n\n"; 
}
```

In the next `if` statement I test `false`. Because `false` isn’t true, the program doesn’t display the message, “This is never displayed.”

```cpp
if (false) {
    cout << "This is always displayed.\n\n"; 
}
```

### Trap
> Notice that you don’t use a semicolon after the closing parenthesis of the expression you test in an `if` statement. If you were to do this, you’d create an empty statement that would be paired with the `if` statement, essentially rendering the `if` statement useless. Here’s an example:
```cpp
if (false); {
    cout << "This is never displayed.\n\n"; 
}
```
> By adding the semicolon after `(false)`, I create an empty statement that’s associated with the `if` statement. The preceding code is equivalent to:
```cpp
if (false); 
// an empty statement, which does nothing
{
    cout << "This is never displayed.\n\n";
}
```
> All I’ve done is play with the whitespace, which doesn’t change the meaning of the code. Now the problem should be clear. The `if` statement sees the `false` value and skips the next statement (the empty statement). Then the program goes on its merry way to the statement after the if statement, which displays the message, “This is never displayed.”
Be on guard for this error. It’s an easy one to make and because it’s not illegal, it won’t produce a compile error.

## Interpreting a Value as true or false

You can interpret any value as `true` or `false`. Any non-zero value can be interpreted as `true`, while 0 can be interpreted as `false`. I put this to the test in the next `if` statement:

```cpp
if (score) 
{
    cout << "At least you didn’t score zero.\n\n"; 
}
```

`score` is 1000, so it’s non-zero and interpreted as `true`. As a result, the message, “Okay, at least you didn’t score zero,” is displayed.

## Using Relational Operators

Probably the most common expression you’ll use with `if` statements involves comparing values using the relational operators. That’s just what I’ll demon- strate next. I test to see whether the score is greater than or equal to 250.

```cpp
if (score >= 250)
{
    cout << "You scored 250 or more. Decent.\n\n"; 
}
```

Because `score` is 1000, the block is executed, displaying the message that the player earned a decent score. If `score` had been less than 1000, the block would have been skipped and the program would have continued with the statement following the block.

### Trap
> The equal to relational operator is == (two equal signs in a row). Don’t confuse it with = (one equal sign), which is the assignment operator.
While it’s not illegal to use the assignment operator instead of the equal to relational operator, the results might not be what you expect. Take a look at this code:
```cpp
int score = 500;
if (score = 1000)
{
    cout << " You scored 1000 or more. Impressive!\n"; 
}
```
> As a result of this code, `score` is set to 1000 and the message, “You scored 1000 or more. Impressive!” is displayed. Here’s what happens: Although `score` is 500 before the `if` statement, that changes. When the expression of the `if` statement, `(score = 1000)`, is evaluated, `score` is assigned 1000. The assignment statement evaluates to 1000, and because that’s a non-zero value, the expression is interpreted as `true`. As a result, the string is displayed.
Be on guard for this type of mistake. It’s easy to make and in some cases (like this one), it won’t cause a compile error.

## Nesting if Statements

An `if` statement can cause a program to execute a statement or block of statements, including other `if` statements. When you write one `if` statement inside another, it’s called ***nesting***. In the following code, the if statement that begins `if (score >= 1000)` is nested inside the if statement that begins `if (score > 500)`.

```cpp
if (score >= 500)
{
    cout << "You scored 500 or more. Nice.\n\n";

    if (score >= 1000) 
    {
        cout << "You scored 1000 or more. Impressive!\n";
    }
}
```

Because `score` is greater than 500, the program enters the statement block and displays the message, “You scored 500 or more. Nice.” Then, in the inner if statement, the program compares `score` to 1000. Because `score` is greater than or equal to 1000, the program displays the message, “You scored 1000 or more. Impressive!”

### Hint 
> You can nest as many levels as you want. However, if you nest code too deeply, it gets hard to read. In general, you should try to limit your nesting to a few levels at most.

## Using the else Clause

You can add an `else` clause to an `if` statement to provide code that will only be executed if the tested expression is `false`. Here’s the form of an `if` statement that includes an `else` clause:

```cpp
if (expression) 
    statement1;
else 
    statement2;
```

If `expression` is `true`, `statement1` is executed. Then the program skips `statement2` and executes the statement following the `if` suite. If `expression` is `false`, `statement1` is skipped and `statement2` is executed. After `statement2` completes, the program executes the statement following the `if` suite.

# Code
```cpp
// Score Rater
// Demonstrates the if statement

#include <iostream>
using namespace std;

int main() {

	int score = 1000;

	if (true) {
		cout << "This is always displayed.\n\n";
	}

	if (false) {
		cout << "This is never displayed.\n\n";
	}

	if (score) {
		cout << "At least you didn't score zero.\n\n";
	}

	if (score >= 250) {
		cout << "You score 250 or more. Decent. \n\n";
	}

	if (score >= 500) {
		cout << "You scored 500 or more. Nice. \n\n";

		if (score >= 1000) {
			cout << "You scored 1000 or more. Impressive!\n";
		}
	} 

	return 0;
}
```

# Output
```txt
This is always displayed.

At least you didn't score zero.

You score 250 or more. Decent.

You scored 500 or more. Nice.

You scored 1000 or more. Impressive!
```