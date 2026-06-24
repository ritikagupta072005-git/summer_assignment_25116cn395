// Write a program to Remove duplicate characters.

#include <iostream>
using namespace std;
int main() {
string str;

cout << "Enter sentence: ";
getline(cin, str);

for (int i = 0; i < str.length(); i++) {
   
    bool duplicate = false;
    if (str[i] == ' ') {
        cout << " ";
        continue;
        }
for (int j = 0; j < i; j++) {

    if (str[j] == ' ')
        continue;

    if (str[i] == str[j]) {
            duplicate = true;
            break;
            }
        }

        if (duplicate == false)
        cout << str[i];
    }

    return 0;
}
