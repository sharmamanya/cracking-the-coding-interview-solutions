/* Check Permutation: Given two strings, write a method to decide if one is a permutation of the
other. */

#include <iostream>
#include <string>
using namespace std;

class Question2 {
public:
    bool checkPermutation(string str1, string str2) {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        if (str1.length() != str2.length()) {
            return false; // Different lengths, cannot be permutations
        }
        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] != str2[i]) {
                return false; // Characters do not match
            }
        }
        return true; // All characters match, they are permutations
    }
};

int main() {
    Question2 q;
    string str1 = "abbbcd";
    string str2 = "cbdabb";
    if (q.checkPermutation(str1, str2)) {
        cout << "Both strings are same" << endl;
    } else {
        cout << "Both strings are different" << endl;
    }
    return 0;
}
