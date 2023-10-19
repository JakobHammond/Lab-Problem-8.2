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
            words++;
        }
    }
    return words;
}
