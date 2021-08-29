[Docs](../../../) / [Chapter1](../../) / [GameOver](../)
# Introducing the Game Over 2.0 Program
The Game Over 2.0 program produces the exact results of the original Game Over program, illustrated in Figure 1.2. But there’s a difference in the way elements from the `std` namespace are accessed.

## Working with the std Namespace
Because it’s so common to use elements from the `std` namespace, I’ll show you two different methods for directly accessing these elements. This will save you the effort of using the `std::` prefix all the time.

## Employing a using Directive
The program starts in the same way. I use two opening comments and then include `iostream` for output. But next, I have a new type of statement.

```cpp
using namespace std;
```
This `using` directive gives me direct access to elements of the `std` namespace. Again, if a namespace is like an area code, then this line says that all of the elements in the std namespace should be like local phone numbers to me now. That is, I don’t have to use their area code (the std:: prefix) to access them.

I can use `cout` and `endl`, without any kind of prefix. This might not seem like a big deal to you now, but when you have dozens or even hundreds of references to these objects, you’ll thank me.

# Code
```cpp
// Game Over 2.0
// Demostrates a using directive

#include <iostream>
using namespace std;

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