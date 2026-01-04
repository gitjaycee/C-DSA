#include <iostream>
using namespace std;

class Queue
{
private:
    int arr[5];
    int front;
    int rear;
    int size;

public:
    Queue() {
        front = -1;
        rear = -1;
        size = 5;
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = val;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << "Dequeued: " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Peeked at: " << arr[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements:" << endl;
        int i = front;
        while (true) {
            cout << arr[i] << endl;
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
    }
};

int main()
{
    Queue q;
    int choice;

    do {
        cout << "\nCircular Queue | Enter 0 to exit\n"
             << "1. Enqueue\n"
             << "2. Dequeue\n"
             << "3. Peek\n"
             << "4. Display\n"
             << "Enter your choice: ";

        cin >> choice;

        switch (choice) {
        case 1: {
            int val;
            cout << "Enter value: ";
            cin >> val;
            q.enqueue(val);
            break;
        }
        case 2:
            q.dequeue();
            break;
        case 3:
            q.peek();
            break;
        case 4:
            q.display();
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 0);

    return 0;
}
