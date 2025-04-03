/*
URLify: Write a method to replace all spaces in a string with '%20'. You may assume that the string
has sufficient space at the end to hold the additional characters, and that you are given the "true"
length of the string. (Note: If implementing in Java, please use a character array so that you can
perform this operation in place.)
EXAMPLE
Input: "Mr J ohn Smith ,, 1 3
Output: "Mr%20John%2 05mith"
*/

#include <iostream>
#include <string>
using namespace std;

class Question3 {
    public:
    string URLify(string str, int trueLength) {
        int spaces = 0;
        for (int i = 0; i < trueLength; i++) {
            if (str[i] == ' ') {
                spaces++;
            }
        }
        int newLength = trueLength + spaces * 2; // Each space becomes '%20'
        
        for (int i = trueLength - 1; i >= 0; i--) {
            if (str[i] == ' ') {
                str[newLength - 1] = '0';
                str[newLength - 2] = '2';
                str[newLength - 3] = '%';
                newLength -= 3;
            } else {
                str[newLength - 1] = str[i];
                newLength--;
            }
        }
        return str;
    }
};

int main() {
    Question3 q;
    string str = "Mr John Smith    ";
    string result = q.URLify(str, 13);
    cout << "URLified string: " << result << endl;
    return 0;
}