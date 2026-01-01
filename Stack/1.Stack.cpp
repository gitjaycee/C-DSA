#include <iostream>
#include <string>

using namespace std;

class Stack {
    private:
        int top;
        int arr[5];
    public:
        Stack() {
            top = -1;
            for (int i = 0; i < 5; i++) {
                arr[i] = 0;
            }
        }

        void push(int val) {
            // Check if the array has space
            if (top < 5 - 1) {
                top++;
                arr[top] = val;
            }
            else {
                cout << "Stack Overflow" << endl;
            }
        }

        void pop() {
            // Check if the array has value/s
            if (top > -1) {
                int temp = arr[top];
                arr[top] = 0;
                top--;
                cout << "Popped: " << temp << endl;
            }
            else {
                cout << "Stack Underflow" << endl;
            }
        }

        void peek() {
             if (top > -1) {
               cout << "Peeked at " << arr[top] << endl;
            }
            else {
                cout << "Nothing to peek at" << endl;
            }
        }

        void display() {
            for (int i = 0; i < 5; i++) {
                cout << arr[i] << endl;
            }
        }
};


int main()
{
    Stack a;
    int userIntput;
    do 
    {
        cout << "\nStack Data Structure | Enter 0 to exit" << endl
             << "1.Enter an integer Value" << endl
             << "2.Pop at the last value" << endl
             << "3.Peek at the last value" << endl
             << "4. Display all values" << endl;
        
        cout << "Enter Your Choice: ";
        cin >> userIntput;
        switch (userIntput)
        {
        case 0:
            break;

        case 1:
            int val;
            cout << "Enter a value to append: ";
            cin >> val;
            a.push(val);
            break;

        case 2:
            a.pop();
            break;
            
        case 3:
            a.peek();
            break;

        case 4:
            a.display();
            break;

        default:
            cout << "Enter a valid input" << endl;
            break;
        }
    
    }while(userIntput != 0);
    
    return 0;
}