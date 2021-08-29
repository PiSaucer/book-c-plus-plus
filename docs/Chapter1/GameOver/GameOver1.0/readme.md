[Docs](../../../) / [Chapter1](../../) / [GameOver](../)
# Introducing the Game Over Program

![ScreenShot](../../../web/Beginning_Cpp_Through_Game_Programming/Image_030.gif)

The classic first task a programmer tackles in a new language is the Hello World program, which displays Hello World on the screen. The Game Over program puts a gaming twist on the classic and displays Game Over! instead. Figure 1.2 shows the program in action.

## Writing Your First C++ Program
Okay, enough theory. It’s time to get down to the nitty-gritty and write your first C++ program. Although it is simple, the following program shows you the basic anatomy of a program. It also demonstrates how to display text in a console window.

## Commenting Code
The first two lines of the program are comments.
```cpp
// Game Over
// A first C++ program
```
Comments are completely ignored by the compiler; they’re meant for humans. They can help other programmers understand your intentions. But comments can also help you. They can remind you how you accomplished something that might not be clear at first glance.

You can create a comment using two forward slashes in a row (//). Anything after this on the rest of the physical line is considered part of the comment. This means you can also include a comment after a piece of ++ code, on the same line.

### Hint
> You can also use what are called C-style comments, which can span multiple lines. All you have to do is start the comment with /* and end it with */. Everything in between the two markers is part of the comment.

## Using Whitespace
The next line in the program is a blank line. The compiler ignores blank lines. In fact, compilers ignore just about all *whitespace*—spaces, tabs, and newlines. Like comments, whitespace is just for us humans.

Judicious use of whitespace helps make programs clearer. For example, you can use blank lines to separate sections of code that belong together. I also use whitespace (a tab, to be precise) at the beginning of the two lines between the curly braces to set them off.

## Including Other Files
The next line in the program is a preprocessor directive. You know this because the line begins with the # symbol.
```cpp
#include <iostream>
```
The *preprocessor* runs before the compiler does its thing and substitutes text based on various directives. In this case, the line involves the #include directive, which tells the preprocessor to include the contents of another file.

I include the file `iostream`, which is part of the standard library, because it contains code to help me display output. I surround the filename with less than (<) and greater than (>) characters to tell the compiler to find the file where it keeps all the files that came with the compiler. A file that you include in your programs like this is called a *header file*.

## Defining the main() Function
The next non-blank line is the header of a function called main().
```cpp
int main()
```
A *function* is a group of programming code that can do some work and return a value. In this case, int indicates that the function will return an integer value. All function headers have a pair of parentheses after the function name.

All ++ programs must have a function called main(), which is the starting point of the program. The real action begins here.
The next line marks the beginning of the function.
```txt
{

And the very last line of the program marks the end of the function.

}
```

All functions are delimited by a pair of curly braces, and everything between them is part of the function. Code between two curly braces is called a *block* and is usually indented to show that it forms a unit. The block of code that makes up an entire function is called the *body* of the function.

## Displaying Text through the Standard Output
The first line in the body of main() displays Game Over!, followed by a newline, in the console window.
```cpp
std::cout << "Game Over!" << std::endl;
```
"Game Over!" is a *string*—a series of printable characters. Technically, it’s a *string literal*, meaning it’s literally the characters between the quotes.

`cout` is an object, defined in the file `iostream`, that’s used to send data to the standard output stream. In most programs (including this one), the standard output stream simply means the console window on the computer screen.

I use the *output operator* (<<) to send the string to `cout`. You can think of the output operator like a funnel; it takes whatever’s on the open side and funnels it to the pointy side. So the string is funneled to the standard output—the screen.

I use `std` to prefix `cout` to tell the compiler that I mean `cout` from the standard library. `std` is a *namespace*. You can think of a namespace like an area code of a phone number—it identifies the group to which something belongs. You prefix a namespace using the *scope resolution operator* (::).

Finally, I send `std::endl` to the standard output. `endl` is defined in `iostream` and is also an object in the std namespace. Sending `endl` to the standard output acts like pressing the Enter key in the console window. In fact, if I were to send another string to the console window, it would appear on the next line.

I understand this might be a lot to take in, so check out Figure 1.3 for a visual representation of the relationship between all of the elements I’ve just described.

## Terminating Statements
You’ll notice that the first line of the function ends with a semicolon (;). That’s because the line is a *statement*—the basic unit controlling the execution flow. All of your statements must end with a semicolon—otherwise, your compiler will complain with an error message and your program won’t compile.

## Returning a Value from main()
The last statement in the function returns 0 to the operating system.
```cpp
return 0;
```
Returning 0 from `main()` is a way to indicate that the program ended without a problem. The operating system doesn’t have to do anything with the return value. In general, you can simply return 0 like I did here.

### Trick
> When you run the Game Over program, you might only see a console window appear and disappear just as quickly. That’s because ++ is so fast that it opens a console window, displays `Game Over!`, and closes the window all in a split second. However, in Windows, you can create a batch file that runs your console program and pauses, keeping the console window open so you can see the results of your program. Since the compiled program is named `game_over.exe`, you can simply create a batch file comprised of the two lines
```bat
   game_over.exe
   pause
```
To create a batch file:

1. Open a text editor like Notepad (not Word or WordPad).
2. Type your text.
3. Save the file with a .bat extension, such as game_over.bat.

> Finally, run the batch file by double-clicking its icon. You should see the results of the program since the batch file keeps the console window open.

# Code
```cpp
// Game Over
// A first C++ program

#include <iostream>

int main()
{
    std::cout << "Game Over!" << std::endl;
	return 0;
}
```
# Output
```txt
Game Over!
```