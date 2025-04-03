/* Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures? */

#include <iostream>
#include <string>
using namespace std;

class Question1 {
public:
    bool checkIfStringHasAllUnique(string str) {
        if (str.length() > 128) {
            return false; // Assuming ASCII
        }
        bool char_set[128] = {false}; // Initialize all characters to false
        for (int i = 0; i < str.length(); i++) {
            int val = str[i];
            if (char_set[val]) {
                return false; // Character already found in string
            }
            char_set[val] = true; // Mark character as found
        }
        return true; // All characters are unique
    }
};

int main() {
    Question1 q;
    string str = "abcdefgg";
    if (q.checkIfStringHasAllUnique(str)) {
        cout << "The string has all unique characters." << endl;
    } else {
        cout << "The string does not have all unique characters." << endl;
    }
    return 0;
}
