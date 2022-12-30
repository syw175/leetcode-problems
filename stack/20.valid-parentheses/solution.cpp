#include <string>
#include <unordered_set>
#include <stack>

using namespace std;

class Solution {
public:
    // bool isMatch(char a, char b)
    // {
    //     if (a == '{' && b == '}') return true;
    //     if (a == '[' && b == ']') return true;
    //     if (a == '(' && b == ')') return true;
    //     return false;
    // }

    bool isValid(string s) {
        stack<char> stk;
        // Iterate through our string and push/pop elements from our stack
        for (auto c : s)
        {
            // If we have an open parentheses, push it onto our stack
            if (c == '{' || c == '[' || c == '(')
                stk.push(c);
            // Otherwise, check if we have a matching closing parentheses
            else
            {
                // If stack is empty, invalid
                if (stk.empty()) return false;
                if (c == '}' && stk.top() != '{') return false;
                if (c == ']' && stk.top() != '[') return false;
                if (c == ')' && stk.top() != '(') return false;
                // if (!isMatch(stk.top(), c)) return false;
                stk.pop();
            }
        }
        // At this point check if the stack is empty
        return stk.empty();
    }
};
