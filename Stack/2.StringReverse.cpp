// Write a program that takes a list of numbers from the user and reverses the list using a stack.
#include <iostream>
#include <string>

using namespace std;
class  Reverse {
    private:
        int top;
    public:
        Reverse(string val) {
            top = val.length() - 1;
            for (int i = top; i >= 0; i--) {
                cout << val[i];
            }
        }
};

int main()
{
    string userInput;
    do
    {
        cout << "\nReverse String Program | Enter 0 to exit" << endl;
        cout << "Enter a string to reverse: ";
        cin >> userInput;
        Reverse str(userInput);
        
    } while (userInput != "0");
    
    return 0;
}