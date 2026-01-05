// PROBLEM:
// You are given a queue of numbers.
// You need to perform a sequence of rotations, where each rotation moves the front element to the back of the queue.
// TASKS:
// Add numbers to the queue (enqueue).
// Rotate the queue n times.
// Display the final order of the queue.
#include <iostream>

using namespace std;

class Rotation
{
    private:
        int queue[5];
        int front;
        int rear;
        int size;
    public:
        Rotation() 
        {
            front = 0;
            rear = 4;
            size = 5;
            for(int i = 0; i < size; i++){
                queue[i] = i + 1;
            }
        }
        void rotate(int times) 
        {
            front = (front + times) % size;
            rear = (rear + times) % size;

            int i = front;
            while (true)
            {
                cout << queue[i] << endl;
                if (i == rear) 
                {
                    break;
                }
                i = (i + 1) % size;
            }
            
        }
    
};



int main()
{
    Rotation a;
    a.rotate(3);
    return 0;
}