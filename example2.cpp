#include<iostream>
using namespace std;

int main()
{
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an Alphabet" << endl;
    cin >> c ;
    
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
    printf("Error! Non-Aplhabetic Character");
    else if (isLowercaseVowel||isUppercaseVowel)
    cout <<c<<" is a vowel";
    else
    cout << c << " is a consonant";
}