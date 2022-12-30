# Questions and Answers

Q: Different programmers put the reference operator (&) in different places when declaring a reference. Where should I put it?
> A: Three basic styles exist with regard to using the referencing operator. Some programmers opt for 'int& ref = var;', while others opt for 'int & ref = var;'. Still others opt for 'int &ref = var;'. The computer is fine with all three. There are cases to be made for each style; however, the most important thing is to be consistent.

Q: Why can’t I initialize a non-constant reference with a constant value?
> A: Because a non-constant reference allows you to change the value to which it refers.

Q: If I initialize a constant reference with a non-constant variable, can I change the value of the variable?
> A: Not through the constant reference because when you declare a constant reference, you’re saying that the reference can’t be used to change the value to which it refers (even if that value can be changed by other means).

Q: How does passing a constant reference save overhead?
> A: When you pass a large object to a function by value, your program makes a copy of the object. This can be an expensive operation depending on the size of the object. Passing a reference is like only passing access to the large object; it is an inexpensive operation.

Q: Can I make a reference to a reference?
> A: Not exactly. You can assign one reference to another reference, but the new reference will simply refer to the value to which the original reference refers.

Q: What happens if I declare a reference without initializing it?
> A: Your compiler should complain because it’s illegal.

Q: Why should I avoid changing the value of a variable that I pass through a reference?
> A: Because it could lead to confusion. It’s impossible to tell from only a function call whether a variable is being passed to change its value.

Q: Does that mean I should always pass a constant reference?
> A: No. You can pass a non-constant reference to a function, but to most game programmers, this signals that you intend to change the argument variable’s value.

Q: If I don’t change the argument variables passed to functions, how should I get new information back to the calling code?
> A: Use return values.

Q: Can I pass a literal through a non-constant reference?
> A: No. If you try to pass a literal as a non-constant reference, you’ll generate a compile error.

Q: Is it impossible to pass a literal to a parameter that accepts a reference?
> A: No, you can pass a literal as a constant reference.

Q: What happens when I return an object from a function?
> A: Normally, your program creates a copy of the object and returns that. This can be an expensive operation, depending on the size of the object.

Q: Why return a reference?
> A: It can be more efficient because returning a reference doesn’t involve copying an object.

Q: How can I lose the efficiency of returning a reference?
> A: By assigning the returned reference to a variable. When you assign a reference to a variable, the computer must make a copy of the object to which the reference refers.

Q: What’s wrong with returning a reference to a local variable?
> A: The local variable doesn’t exist once the function ends, which means that you’re returning a reference to a non-existent object, which is illegal.

---

# Discussion Questions

1. What are the advantages and disadvantages of passing an argument by value?
2. What are the advantages and disadvantages of passing a reference?
3. What are the advantages and disadvantages of passing a constant reference?
4. What are the advantages and disadvantages of returning a reference?
5. Should game AI cheat in order to create a more worthy opponent?