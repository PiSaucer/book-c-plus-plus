// Pointing
// Demonstrates using pointers

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int* pAPointer;    //declare a pointer
    
    int* pScore = 0;   //declare and initialize a pointer
        
    int score = 1000;
    pScore = &score;   //assign pointer pScore address of a variable score

    cout << "Assigning &score to pScore\n";
    cout << "&score is: " << &score << "\n";     //address of score variable
    cout << "pScore is: " << pScore << "\n";     //address stored in pointer
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n"; //value pointed to by pointer 
   
    cout << "Adding 500 to score\n";
    score += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Adding 500 to *pScore\n";
    *pScore += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Assigning &newScore to pScore\n";    
    int newScore = 5000;
    pScore = &newScore;
    cout << "&newScore is: " << &newScore << "\n";
    cout << "pScore is: " << pScore << "\n";     
    cout << "newScore is: " << newScore << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";  
    
    cout << "Assigning &str to pStr\n";
    string str = "score";
    string* pStr = &str;   //pointer to string object
    cout << "str is: " << str << "\n";
    cout << "*pStr is: " << *pStr << "\n";
    cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
    cout << "pStr->size() is: " << pStr->size() << "\n";  
  
    return 0;
}
