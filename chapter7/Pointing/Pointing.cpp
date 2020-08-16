// Pointing
// Demonstrates using pointers

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int* pAPointer; //declare a pointer

    int* pScore = 0; //declare and initialize a pointer

    int score = 1000;
    pScore = &score; //assign pointer pScore address of variable score

    cout << "Assigning %score to pScore\n";
    cout << "&score is: " << &score << "\n"; //address of score variable
    cout << "pScore is: " << pScore << "\n"; //address of stored in pointer
    cout << "score is :" << score << "\n"; 
    cout << "*pScore is: " << *pScore << "\n\n"; //value pointed to by pointer
}