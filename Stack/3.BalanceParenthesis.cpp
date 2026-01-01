// Ask the user to input an expression with parentheses, e.g., (a+b)*(c-d).
// Check if all the parentheses are balanced using a stack.
// EXAMPLE
// Input: (a+b)*(c-d)
// Output: Balanced
// Input: ((a+b)
// Output: Not Balanced

#include <iostream>
#include <string>

using namespace std;

class BalanceParenthesis {
    private:
        string stack;
    public:
        BalanceParenthesis(string val) {
            for (int i = 0; i < val.length(); i++) {
                if (isOpenBracket(val[i])) {
                    stack.push_back(val[i]);
                }
                else if (isCloseBracket(val[i])) {
                    if (isEmpty()) {
                        cout << val << " is not Balance!\n";
                        break;
                    }
                    else if (val[i] == ']' && stack[stack.length() - 1] == '[') {
                        stack.pop_back();
                    }
                    else if (val[i] == '}' && stack[stack.length() - 1] == '{') {
                        stack.pop_back();
                    }
                    else if (val[i] == ')' && stack[stack.length() - 1] == '(') {
                        stack.pop_back();
                    }
                }
            }
            if (!isEmpty()) {
                cout << val << " is not Balance!\n";
            }
            else {
                cout << val << " is Balance!\n";
            }
            
        }

        bool isOpenBracket(char val) {
           return (val == '(' || val == '[' || val == '{');
        }
        bool isCloseBracket(char val) {
            return (val == ')' || val == ']' || val == '}');
        }
        bool isEmpty() {
            if (stack.length() == 0) {
                return true;
            }
            else {
                return false;
            }
        }
};

int main()
{
    string str;
    do
    {

        cout << "Balance parenthesis Program | Enter 0 to exit\n"
            << "Enter a string: ";
        cin >> str;
        BalanceParenthesis balance(str);
    } while (str != "0");
    
  return 0;
}