# Introducing the Score Rater 2.0 Program

![ScreenShot](../../../web/Beginning_Cpp_Through_Game_Programming/Image_080.gif)

The Score Rater 2.0 program also rates a score, which the user enters. But this time, the program uses an if statement with an else clause. Figures 2.2 and 2.3 show the two different messages that the program can display based on the score the user enters.

## Creating Two Ways to Branch

You’ve seen the first part of the if statement already, and it works just as it did before. If `score` is greater than 1000, the message, “You scored 1000 or more. Impressive!” is displayed.

```cpp
if (score >= 1000)
{
    cout << "You scored 1000 or more. Impressive!\n"; 
}
```

Here’s the twist. The `else` clause provides a statement for the program to branch to if the expression is `false`. So if (score >= 1000) is `false`, then the program skips the first message and instead displays the message, “You scored less than 1000.”

```cpp
else
{
cout << "You scored less than 1000.\n"; 
}
```

## Using a Sequence of if Statements with else Clauses

You can chain `if` statements with `else` clauses together to create a sequence of expressions that get tested in order. The statement associated with the first expression to test true is executed; otherwise, the statement associated with the final (and optional) `else` clause is run. Here’s the form such a series would take:

```cpp
if (expression1)
    statement1;
else if (expression2)
    statement2;
...
else if (expressionN)
    statementN;
else
    statementN+1;
```

If `expression1` is `true`, `statement1` is executed and the rest of the code in the sequence is skipped. Otherwise, `expression2` is tested and if `true`, `statement2` is executed and the rest of the code in the sequence is skipped. The computer continues to check each expression in order (through `expressionN`) and will execute the statement associated with the first expression that is true. If no expression is true, then the statement associated with the final `else` clause, `statementN+1`, is executed.

# Code
```cpp
// Score Rater 2.0
// Demonstrates the else statement

#include <iostream>
using namespace std;

int main() {

	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (score >= 1000) {
		cout << "You scored 1000 or more. Impressive!\n";
	}
	else {
		cout << "You scored less than 1000.\n";
	}

	return 0;
}
```

# Output

## Score < 1000
```txt
Enter your score: 100
You scored less than 1000.
```

## Score > 1000
```txt
Enter your score: 1001
You scored 1000 or more. Impressive!
```