[Docs](../../../) / [Chapter1](../../) / [GameOver](../)
# Introducing the Game Over 3.0 Program
Okay, there’s another way to accomplish what I did in Game Over 2.0: set up the file so that I don’t have to explicitly use the `std::` prefix to access `cout` and `endl`. And that’s exactly what I’m going to show you in the Game Over 3.0 program, which displays the same text as its predecessors.

## Employing using Declarations
In this version, I write two `using` declarations. 
```cpp
using std::cout;
using std::endl;
```

By declaring exactly which elements from the `std` namespace I want local to my program, I’m able to access them directly, just as in Game Over 2.0. Although it requires more typing than a `using` directive, the advantage of this technique is that it clearly spells out those elements I plan to use. Plus, it doesn’t make local a bunch of other elements that I have no intention of using.

## Understanding When to Employ using
Okay, you’ve seen two ways to make elements from a namespace local to your program. But which is the best technique?

A language purist would say you shouldn’t employ either version of `using` and that you should always prefix each and every element from a namespace with its identifier. In my opinion, that’s like calling your best friend by his first and last name all the time. It just seems a little too formal.

If you hate typing, you can employ the `using` directive. A decent compromise is to employ using declarations. In this book, I’ll employ the using directive most of the time for brevity’s sake.

### Real World
> I’ve laid out a few different options for working with namespaces. I’ve also tried to explain the advantages of each so you can decide which way to go in your own programs. Ultimately, though, the decision may be out of your hands. When you’re working on a project, whether it’s in the classroom or in the professional world, you’ll probably receive coding standards created by the person in charge. Regardless of your personal tastes, it’s always best to listen to those who hand out grades or paychecks.

# Code
```cpp
// Game Over 3.0
// Demostrates a using declarations

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "Game Over!" << endl;
	return 0;
}
```
# Output
```txt
Game Over!
```