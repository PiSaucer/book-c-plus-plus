# readme

[Docs](https://github.com/PiSaucer/book-c-plus-plus/tree/569357054614b69475a73eff46aae33d4998bc5a/docs/README.md) / [Chapter6](https://github.com/PiSaucer/book-c-plus-plus/tree/569357054614b69475a73eff46aae33d4998bc5a/docs/Chapter6/README.md)

## Exercises

1. Improve the Mad Lib game from Chapter 5 by using references to make the program more efficient.
2. What’s wrong with the following program?

   ```text
   int main()
   {
   int score;
   score = 1000;
   float& rScore = score;
   return 0;
   }
   ```

3. What’s wrong with the following function?

   ```text
   int& plusThree(int number)
   {
   int threeMore = number + 3;
   return threeMore;
   }
   ```

