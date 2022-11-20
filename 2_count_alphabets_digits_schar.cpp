#include<bits/stdc++.h>
#include<string>
#include<ctype.h>
using namespace std;

int main(){
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int i = 0, alphabets = 0, digits = 0, schar = 0;
    while(str[i] != '\0'){
        if(isalpha(str[i])){
            alphabets++;
        }
        else if(isdigit(str[i])){
            digits++;
        }
        else{
            schar++;
        }
        i++;
    }
    cout << endl << "total no. of alphabets = " << alphabets << endl;
    cout << endl << "total no. of digits = " << digits << endl;
    cout << endl << "total no. of special character = " << schar << endl;
}