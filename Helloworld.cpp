#include <iostream>
#include <string>
using namespace std;
// I am a comment.
const float myNum = 3.14;
int main() {
    string word1 = "";
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName+ " " + lastName;
    int firstNumber = 1;
    int x = 2, y = 3, z = 4;
    /* This is one way to break a line \n is the most common way
    to break the line.*/
    cout << "Hello World! \n";
    //This is another way to break the line.
    cout << "this is a sample sentence!" << endl;
    cout << "I am a new line!\n"; // comments can be here too
    cout << "I am the first sentence with " << firstNumber << " variable.\n";
    cout << x + y + z << "\n";
    cout << "This is my constant: " << myNum << ".\n";
    cout << "Type a word: ";
    cin >> word1;
    cout << "Your word is: " << word1;
    cout << "\n" << fullName;
    return 0;
}