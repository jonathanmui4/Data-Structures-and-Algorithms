#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> openBrackets;
        for (char currentChar : s) {
            if (currentChar == '(' || currentChar == '{' || currentChar == '[') {
                openBrackets.push(currentChar);
            } 
            else 
            {
                switch(currentChar) {
                    case ')':
                        if (!openBrackets.empty() && openBrackets.top() == '(') {
                            openBrackets.pop();
                        }
                        else {
                            return false;
                        }
                        break;
                    case '}':
                        if (!openBrackets.empty() && openBrackets.top() == '{') {
                            openBrackets.pop();
                        }
                        else {
                            return false;
                        }
                        break;
                    case ']':
                        if (!openBrackets.empty() && openBrackets.top() == '[') {
                            openBrackets.pop();
                        }
                        else {
                            return false;
                        }
                        break;
                }
            }
        }
        if (!openBrackets.empty()) {
            return false;
        }
        return true;
    }
};