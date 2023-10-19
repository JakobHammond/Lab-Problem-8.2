//
//  main.cpp
//  p8-2
//
//  Created by Jakob Hammond on 10/19/23.
//

#include <iostream>
using namespace std;

int countWords(string str);
int countCharacters(string str);
int main(void){
    
    while(true){
        cout << "Enter a string or Q to quit: ";
        string input;
        getline(cin, input);
        if(input == "Q") break;
        cout << "Word count: " << countWords(input) << endl;
    }
    
}

int countCharacter(string str){
    return str.length();
}

int countWords(string str){
    int words = 1;
    for(int i = 1; i <= countCharacter(str); i++){
        string first;
        first = str.substr(countCharacter(str) - i);
        if(first.front() == ' '){
            first = str.substr(countCharacter(str) - (i + 1));
            if(first.front() != ' '){
                words++;
            }
        }
    }
    return words;
}
