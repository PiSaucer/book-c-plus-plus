# readme

[Docs](https://github.com/PiSaucer/book-c-plus-plus/tree/569357054614b69475a73eff46aae33d4998bc5a/docs/README.md) / [Chapter6](https://github.com/PiSaucer/book-c-plus-plus/tree/569357054614b69475a73eff46aae33d4998bc5a/docs/Chapter6/README.md)

## Summary

In this chapter, you should have learned the following concepts:

* A reference is an alias; it’s another name for a variable.
* You create a reference using &—the referencing operator.
* A reference must be initialized when it’s defined.
* A reference can’t be changed to refer to a different variable.
* Whatever you do to a reference is done to the variable to which the reference refers.
* When you assign a reference to a variable, you create a new copy of the referenced value.
* When you pass a variable to a function by value, you pass a copy of the variable to the function.
* When you pass a variable to a function by reference, you pass access to the variable.
* Passing by reference can be more efficient than passing by value, especially when you are passing large objects.
* Passing a reference provides direct access to the argument variable passed to a function. As a result, the function can make changes to the argument variable.
* A constant reference can’t be used to change the value to which it refers. You declare a constant reference by using the keyword const.
* You can’t assign a constant reference or a constant value to a non-constant reference.
* Passing a constant reference to a function protects the argument variable from being changed by that function.
* Changing the value of an argument variable passed to a function can lead to confusion, so game programmers consider passing a constant reference before passing a non-constant reference.
* Returning a reference can be more efficient than returning a copy of a value, especially when you are returning large objects.
* You can return a constant reference to an object so the object can’t be changed through the returned reference.
* A basic technique of game AI is to have the computer consider all of its legal moves and all of its opponent’s legal replies before deciding which move to take next.

