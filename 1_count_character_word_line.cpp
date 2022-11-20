#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[500];
    cout << "Enter a string ending with ~ : ";
    scanf("%[^~]", str);

    int i = 0, character = 0, word = 0, newLine = 0;
    while(str[i] != '\0'){
        if(str[i] == '\n'){
            word++;
            newLine++;
        }
        else if(str[i] == ' ' || str[i] == '\t'){
            word++;
        }
        else{
            character++;
        }
        i++;
    }
    word++;
    newLine++;

    cout << endl << "total no. of character = " << character << endl;
    cout << endl << "total no. of word = " << word << endl;
    cout << endl << "total no. of line = " << newLine << endl;
}