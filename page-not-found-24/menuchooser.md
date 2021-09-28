# readme

[Docs](https://github.com/PiSaucer/book-c-plus-plus/tree/569357054614b69475a73eff46aae33d4998bc5a/docs/README.md) / [Chapter2](https://github.com/PiSaucer/book-c-plus-plus/tree/569357054614b69475a73eff46aae33d4998bc5a/docs/Chapter2/README.md)

## Introducing the Menu Chooser Program

![ScreenShot](../.gitbook/assets/Image_089.gif)

The Menu Choose Program presents the user with a menu that lists three difficulty levels and asks him to make a choice. If the user enters a number that corresponds to a listed choice, then he is shown message confirming the choice. If the the user makes some other choice, he is told that choice is invalid.

### Creating Multiple Ways to Branch

The `switch` statement creates four possible branching points. If the user enters 1, then code associated with `case 1` is execured and "You picked Easy" is displayed. If the user enters 2, then code associated with `case 2` is executed and "You picked Normal: is displayed. If the user enters 3, then code associated with `case 3` is executed and "You picked Hard" is displayed. If the user enters any other value, then `default` kicks in and "You made an illegal choice" is displayed.

#### Trap

> You'll almost always want to end each case with a `break` statement. Don't forget them; otherwise, your code might do things you never intended.

### Using While Loops

`while` loops let you repeat sections of code as long as an expression is `true`. Here's a generic form of the `while` loop:

```cpp
while (expression)
    statement;
```

If `expression` is `false`, the program moves on to the statement after the loop. If `expression` is `true`, the program executes `statment` and loops back to test `expression` again. This cycle repeats until `expression` test `false`, at which point the loop ends.

## Code

```cpp
// Menu Chooser
// Demostartes the switch statement

#include <iostream>

using namespace std;

int main() {
    cout << "Difficulty Levels\n\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n\n";

    int choice;
    cout << "Choice: ";
    cin >> choice;

    switch (choice) {
    case 1: 
        cout << "You picked Easy. \n";
        break;

    case 2: 
        cout << "You picked Normal.\n";
        break;

    case 3: 
        cout << "You picked Hard.\n";
        break;

    default:
        cout << "You made an illegal choice.\n";
    }

    return 0;
}
```

## Output

### Easy

```text
Difficulty Levels

1 - Easy
2 - Normal
3 - Hard

Choice: 1
You picked Easy.
```

### Normal

```text
Difficulty Levels

1 - Easy
2 - Normal
3 - Hard

Choice: 2
You picked Normal.
```

### Hard

```text
Difficulty Levels

1 - Easy
2 - Normal
3 - Hard

Choice: 3
You picked Hard.
```

