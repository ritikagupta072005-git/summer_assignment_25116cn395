//Write a program to Find maximum occurring character.

#include <iostream>
#include <string>
using namespace std;
int main() {

string str;

cout << "Enter string: ";
cin >> str;

int freq[256] = {0};

for (int i = 0; i < str.length(); i++) {
    freq[str[i]]++;
}

int max = 0;
char ch;

for (int i = 0; i < str.length(); i++) {

    if (freq[str[i]] > max) {
        max = freq[str[i]];
        ch = str[i];
    }
}

cout << "Maximum occurring character: "
    << ch;

return 0;
}
