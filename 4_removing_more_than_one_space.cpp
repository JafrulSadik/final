#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[500];
    cout << "Enter a string ending with ~ : ";
    scanf("%[^~]", str);
    cout << endl << "Before removing spaces : " << str << endl;
    int length, j, i;
    length = sizeof(str) / sizeof(str[0]);

    for(i = 0; i<length; i++){
        if(str[i] == ' '){
            for(j = i; j<length; j++){
                str[j] = str[j+1];
            }
        }
        length--;
    }

    cout << endl << "After removing spaces : " << str << endl;
}