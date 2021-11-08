[Docs](../../docs/) / [Chapter3](../)
# Exercises

1. Improve the Word Jumble game by adding a scoring system. Make the point value for a word based on its length. Deduct points if the player asks for a hint.

2. What's wrong with the following code?

```cpp
for (int i = 0; i <= phrase.size(); ++i)
{
    cout << "Character at position " << i << " is: " << phrase[i] <<endl;
}
```

3. What's wrong with the following code?

```cpp
const int ROWs = 2;
const int COLUMNS = 3;
char board[COLUMNS][ROWs] = { {'0', 'X', '0'},
                              {' ', 'X', 'X'};
```