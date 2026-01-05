// PROBLEM:
// Given a stream of integers, calculate the moving average of the last k values.
// TASKS:
// Use a queue to store the last k elements.
// Remove the oldest value when size exceeds k.
#include <iostream>

using namespace std;

class StreamSum {
    private:
        int last;
        int arr[3];
        int size;
    public:
        StreamSum() {
            last = 0;
            size = 3;
            for (int i = 0; i < size; i++) {
                arr[i] = 0;
            }
        }
        bool isFull() {
            return (last == size);
        }
        
        void enqueue(int val) {
            if(isFull()) {
                last = 0;
                arr[last] = val;
                last++;
                sum();
            }
            else {
                arr[last] = val;
                last++;
                sum();
            }
        }
        void sum() {
            int temp;
            for (int i = 0; i < size; i++) {
                temp = temp + arr[i];
            }
            cout << "The Sum is " << temp << endl;
        }
};

int main()
{
    int userInput;
    StreamSum a;
    do {
        cout << "Sum the Last 3 number entered | Enter 0 to exit \n";
        cin >> userInput;
        if (userInput == 0)
        {
            break;
        }
        else {
            a.enqueue(userInput);
        }    
    }while (userInput != 0);
    
    return 0;
}