// Simulate a basic “undo” for a text editor:
//     - User enters a few actions (like typing letters: a, b, c).
//     - Push each action onto the stack.
//     - When the user types “undo”, pop the last action and show the current text.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class TextEditor {
private:
    vector<char> stack;   

public:
    void type(char c) {
        stack.push_back(c);
    }
    void undo() {
        if (!stack.empty()) {
            stack.pop_back();
        }
    }

    void display() {
        for (char c : stack) {
            cout << c;
        }
        cout << endl;
    }
};

int main() {
    TextEditor editor;
    string input;

    while (true) {
        cout << "Type a letter or 'undo' or 'exit': ";
        cin >> input;

        if (input == "exit") {
            break;
        }
        else if (input == "undo") {
            editor.undo();
        }
        else {
            editor.type(input[0]);   
        }

        editor.display();
    }

    return 0;
}
