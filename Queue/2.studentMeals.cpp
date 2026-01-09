// PROBLEM:
// Students are standing in a queue, each with a sandwich preference.
// Sandwiches are in a stack.
// TASKS:
// Serve students in queue order.
// If a student doesn’t want the sandwich, move them to the back.
// Count how many students cannot eat.
#include <iostream>
using namespace std;

class studentLunch {
private:
    int students[10];  
    int sandwiches[10];  

    int front, rear;      
    int top;              
    int studentCount;

public:
    studentLunch() {
        int s[] = {1, 1, 0, 0};
        int sw[] = {0, 1, 0, 1};

        studentCount = 4;

        front = 0;
        rear = studentCount - 1;
        for (int i = 0; i < studentCount; i++) {
            students[i] = s[i];
        }

        top = studentCount - 1;
        for (int i = 0; i < studentCount; i++) {
            sandwiches[i] = sw[i];
        }
    }

    int countStudentsWhoCantEat() {
        int rotations = 0;

        while (studentCount > 0 && top >= 0) {
            if (students[front] == sandwiches[top]) {
                front++;
                studentCount--;
                top--;
                rotations = 0;
            } else {
                int temp = students[front];
                for (int i = front; i < front + studentCount - 1; i++) {
                    students[i] = students[i + 1];
                }
                students[front + studentCount - 1] = temp;
                rotations++;
            }

            if (rotations == studentCount) {
                break;
            }
        }

        return studentCount;
    }

};

int main() {
    studentLunch lunch;
    cout << "Students who can't eat: "
         << lunch.countStudentsWhoCantEat() << endl;

    return 0;
}
