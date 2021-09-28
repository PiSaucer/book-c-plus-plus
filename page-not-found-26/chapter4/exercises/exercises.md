# readme

[Docs](https://github.com/PiSaucer/book-c-plus-plus/tree/569357054614b69475a73eff46aae33d4998bc5a/docs/README.md) / [Chapter4](https://github.com/PiSaucer/book-c-plus-plus/tree/569357054614b69475a73eff46aae33d4998bc5a/docs/Chapter4/README.md)

## Exercises

1. Write a program using vectors and iterators that allows a user to maintain a list of his or her favorite games. The program should allow the user to list all game titles, add a game title, and remove a game title.
2. Assuming that scores is a vector that holds elements of type int, what’s wrong with the following code snippet \(meant to increment each element\)?

   ```cpp
   vector<int>::iterator iter;
   //increment each score
   for (iter = scores.begin(); iter != scores.end(); ++iter)
   {
   iter++;
   }
   ```

3. Write pseudocode for the Word Jumble game from Chapter 3.

