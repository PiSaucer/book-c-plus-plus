# Questions and Answers

Q: Why is the STL important?

A: Because it saves game programmers time and effort. The STL provides commonly used container types and algorithms.

Q: Is the STL fast?

A: Definitely. The STL has been honed by hundreds of programmers to eke out as much performance as possible on each supported platform.

Q: When should I use a vector instead of an array?

A: Almost always. Vectors are efficient and flexible. They do require a little more memory than arrays, but this tradeoff is almost always worth the benefits.

Q: Is a vector as fast as an array?

A: Accessing a vector element can be just as fast as accessing an array element. Also, iterating though a vector can be just as fast as iterating through an array.

Q: If I can use the subscripting operator with vectors, why would I ever need iterators?

A: There are several reasons. First, many of the 'vector' member functions require iterators. ('insert()' and 'erase()' are two examples.) Second, STL algorithms require iterators. And third, you can’t use the subscripting operator with most of the STL containers, so you’re going to have to learn to use iterators sooner or later.

Q: Which is the best way to access elements of a vector—through iterators or through the subscripting operator?

A: It depends. If you need random-element access, then the subscripting operator is a natural fit. If you need to use STL algorithms, then you must use iterators.

Q: What about iterating through the elements of a vector? Should I use the subscripting operator or an iterator?

A: You can use either method. However, an advantage of using an iterator is that it gives you the flexibility to substitute a different STL container in place of a vector (such as a list) without much code changing.

Q: Why does the STL define more than one sequential container type?

A: Different sequential container types have different performance properties. They’re like tools in a toolbox; each tool is best suited for a different job.

Q: What are container adaptors?

A: Container adaptors are based on one of the STL sequence containers; they represent standard computer data structures. Although they are not official containers, they look and feel just like them.

Q: What’s a stack?

A: A data structure in which elements are removed in the reverse order from how they were added. This means that the last element added is the first one removed. This is just like a real-life stack, from which you remove the last item you placed on the top of the stack.

Q: What’s a queue?

A: A data structure in which elements are removed in the same order they were added. This is just like a real-life queue, such as a line of people in which the first person in line gets served first.

Q: What’s a double-ended queue?

A: A queue in which elements can be added or removed from either end.

Q: What’s a priority queue?

A: A data structure that supports finding and removing the element with the
highest priority.

Q: When would I use pseudocode?

A: Any time you want to plan a program or section of code.

Q: When would I use stepwise refinement?

A: When you want to get even more detailed with your pseudocode.

---

# Discussion Questions

1. Why should a game programmer use the STL?

2. What are the advantages of a vector over an array?

3. What types of game objects might you store with a vector?

4. How do performance characteristics of a container type affect the decision to use it?

5. Why is program planning important?
