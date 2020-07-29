// Hangman
// The classic game of hangman

/*
Create a group of words
Pick a random word from the group as the secret word
While player hasn’t made too many incorrect guesses and hasn’t guessed the secret
word
    Tell player how many incorrect guesses he or she has left
    Show player the letters he or she has guessed
    Show player how much of the secret word he or she has guessed
    Get player’s next guess
    While player has entered a letter that he or she has already guessed
        Get player’s guess
    Add the new guess to the group of used letters
    If the guess is in the secret word
        Tell the player the guess is correct
        Update the word guessed so far with the new letter
    Otherwise
        Tell the player the guess is incorrect
        Increment the number of incorrect guesses the player has made
If the player has made too many incorrect guesses
    Tell the player that he or she has been hanged
Otherwise
    Congratulate the player on guessing the secret word
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main ()
{
    //setup
    const int MAX_WRONG = 8; //maximum number of incorrent guess allowed

    vector<string> words; //collection of possible words to guess
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];
    int wrong = 0;
    string soFar(THE_WORD.size(), '-');
    string used = "";

    cout << "Welcome to Hangman. Good luck\n";

    //main loop
    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrong);
        cout << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "\n So far, the word is:\n" << soFar << endl;

        char guess;
        cout << "\n\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess); //make uppercase since secrect word in uppercase
        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }

        used += guess;

        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That's right! " << guess << " is in the word.\n";

            //update soFar to include newly guessed letter
            for (int i = 0; i < THE_WORD.length(); i++)
            {
                if (THE_WORD[i] == guess)
                {
                    soFar[i] = guess;
                }
                
            }
            
        }
        
        else 
        {
            cout << "Sorry. " << guess << " isn't in the word.\n";
            wrong++;
        }
    }

    //shut down
    if (wrong == MAX_WRONG)
    {
        cout << "\nYou've been hanged!";
    }
    else
    {
        cout << "\nYou guess it!";
    }
    
    cout << "\nThe word has " << THE_WORD << endl;

    return 0;
}