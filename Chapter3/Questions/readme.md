# Questions and Answers

Q: Which is better, a 'while' loop or a 'for' loop?
> A: Neither is inherently better than the other. Use the loop that best fits your needs.

O: When might it be better to use a 'for' loop than a 'while' loop?
> A: You can create a 'while' loop to do the job of any 'for' loop; however, there are some cases that cry out for a 'for' loop. Those include counting and iterating through a sequence.

Q: Can I use 'break' and 'continue' statements with 'for' loops?
> A: Sure. And they behave just like they do in 'while' loops: 'break' ends the loop and 'continue' jumps control back to the top of the loop.

Q: Why do programmers tend to use variable names such as 'i', 'j', and 'k' counters in 'for' loops?
> A: Believe it or not, programmers use 'i', 'j', and 'k' and mainly out of tradition. The practice started in early versions of the FORTRAN grin whi variables had to start with certain letters including 'i', 'j', and 'k'.

Q: I don't have to include file to use int or thar types, to why do I have to include the string file to use strings
> A: 'int' and 'char' are built-in types They're always accessible in any C++ program. The 'string' type, on the other, hand, is not a built in type. ts defined as part of the standard library in the file 'string'.

Q: How did C-style strings get their name?
> A: In the C programming language, programmers represent strings with arrays of characters terminated by a null character. This practice carried over to After the new 'string' type was introduced in C++, programmers needed a way to differentiate between the two. Therefore, the old method was dubbed C-style strings.

Q: Why should I use 'string' objects instead of C-style strings
> A: 'string' objects have advantages over C-style strings. The most obvious is that they are dynamically sizeable. You don't have to specify a length limit when you create one.

Q: Should I ever use C-style strings?
> A: You should opt for 'string' objects whenever possible. If you're working on an existing project that uses C-style strings, then you might have to work with C-style strings. 

Q: What is operator overloading?
> A: It's a process that allows you to define the use of familiar operators in different contexts with different but predictable results. For example, the + operator that is used to add numbers is overloaded by the 'string' type to join strings. 

Q: Can't operator overloading be confusing?
> A: It's true that by overloading an operator you give it another meaning. But the new meaning applies only in a specific new context. For example, it's clear in the expression 4 + 6 that the + operator adds numbers, while in the expression 'myString1 - myString 2', the + operator joins strings. 

Q: Can I use the +=operator to concatenate strings?
> A: Yes, the operator is overloaded so it works with strings

Q: To get the number of characters in a 'string' object, should use the 'length()' member function or the 'size()' member function?
> A: Both 'length()' and 'size()' return the same value, so you can use either. 

Q: What's a predicate function:
> A: A function that returns either 'true' or 'false'. The 'string' object member function 'empty()' is an example of a predicate function.

Q: What happens if I try to assign a value to an element beyond the bounds of an array?
> A: C++ will allow you to make the assignment However, the results are unpredictable and might cause your program to crash. That's because you're altering some unknown part of your computer's memory. 

Q: Why should I use multidimensional arrays?
> A: To make working with a group of elements more intuitive. For example, you could represent a chessboard with a one-dimensional array, as in 'chess Board[64]', or you could represent it with a more intuitive, two-dimensional array, as in 'chess Board[8][8]'.

---

# Discussion Questions

1. What are some of the things from your favorite game that you could represent as objects? What might their data members and member functions be?
2. What are the advantage of using an array over a group of individual variables?
3. What are some limitations imposed by a fixed array size?
4. What are the advantages and disadvantages of operator overloading?
5. What kinds of games could you create using string objects, arrays, and 'for' loops as your main tools?