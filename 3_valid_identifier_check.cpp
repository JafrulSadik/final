#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter an identifier : ";
    getline(cin, str);

    int flag = 0, i = 1;
    if(isalpha(str[0]) || str[0] == '_'){
        flag = 1;
    }
    while(str[i] != '\0'){
        if(!isalpha(str[i]) && !isdigit(str[i]) && str[i] != '_'){
            flag = 0;
            break;
        }
        i++;
    }
    if(flag == 1){
        cout << endl << "The identifier is valid";
    }
    else{
        cout << endl << "The identifier is not valid";
    }
}