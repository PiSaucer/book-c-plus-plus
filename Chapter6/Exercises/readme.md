[Docs](../../docs/) / [Chapter6](../)
# Exercises

1. Improve the Mad Lib game from Chapter 5 by using references to make
the program more efficient.

2. What’s wrong with the following program?
```
int main()
{
int score;
score = 1000;
float& rScore = score;
return 0;
}
```

3. What’s wrong with the following function?
```
int& plusThree(int number)
{
int threeMore = number + 3;
return threeMore;
}
```