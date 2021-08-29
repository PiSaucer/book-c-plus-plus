[Docs](../../../) / [Chapter2](../../) / [PlayAgain](../)
# Introducing the Play Again 2.0 Program

The Play Again 2.0 program looks exactly the same to the user as the original Play Again program. Play Again 2.0, likes its predecessor, simulates the play of an excited game by displaying the message "**Played an exciting game**" and asking the user whether he wants to play again. The user continues to play long as he enter `y`. This time, though, the program accomplishes the repetition using a `do` loop.

## Looping with a do loop

Before the `do` loop begins, I declare the character `again`. However, I don't need to inititalize it because it's not tested until after the first iteration of the loop. I get a new value for `again` from the user in the loop body. Then I tested `again` in the loop expression. If `again` is equal to '`y`', the loop repeats; otherwise, the loop ends.

### IRW
> Even though you can `while` and `do` loops pretty interchangeably, most programmers use the `while` loop. Although a `do` loop might seem more natural in some cases, the advantage of `while` loop is that its expression appears right at the top of the loop; you don't have to go hunting to the bottom of the loop to find it.

### Trap 
> If you've ever had a game get stuck in the same endless cycle, you might have experienced an *infinite loop*-a loop without end. Here's a simple example of an infinite loop:
```cpp
int test = 10;
while (test == 10)
{
    cout << tes;
}
```
> In this case, the loop is entered because `test` is 10. But because `test` never changes, the loop will never stop. As a result, the user will have to kill the running program to end it. The moreal of this story? Make sure that the expression of a loop can eventually become `false` or that there's another way for the loop to end, such as described in the following section, "[Using break and continue Statement.](#using-breaks-and-continue-statements)"

## Using breaks and continue Statements

It's possible to alter the behavior you've seen in loops. You can immediately exit a loop with the `break` statement, and you can jump directly to the top of a loop with a `continue` statement. Although you should use these powers sparinghly, they do come in handy sometimes.

# Code
```cpp
// Play Again 2.0
// Demonstrates do loops

#include <iostream>
using namespace std;

int main() {
	char again;
	do {
		cout << "\n**Played an exciting game**";
		cout << "\nDo you want to play again? (y/n): ";
		cin >> again;
	} while (again == 'y');

	cout << "\nOkay, bye.";
	return 0;
}
```

# Ouput
```txt
**Played an exciting game**
Do you want to play again? (y/n): y

**Played an exciting game**
Do you want to play again? (y/n): n

Okay, bye.
```