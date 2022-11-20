#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    char keyword[32][10] = {"int", "float", "double", "char", "auto",
                            "break", "switch", "case", "register", "return",
                            "goto", "if", "else", "const", "break", 
                            "const", "default", "for", "while", "do", "enum", 
                            "extern", "short", "signed", "sizeof", "static",
                            "struct", "typedef", "union", "unsigned", "void",
                            "volatile"};

    char str[100];
    cout << "Enter a keyword : ";
    cin >> str;

    int i = 0;
    while(i<=32){
        if(strcmp(str, keyword[i]) == 0){
            cout << endl << "valid keyword" << endl;
            break;
        }
        i++;
    }
    if(i>32){
        cout << endl<< "invalid keyword" << endl;
    }
}