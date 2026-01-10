#include <iostream>

using namespace std;

class Node {
    private:
        int key;
        int value;
        Node* next;
    public: 
    Node() {
        key =  0;
        value = 0;
        next = NULL;
    }
    Node(int k, int val) {
        key = k;
        value = val;
        next - NULL;
    }
};

class SinglyLinkedList {
    
};


int main()
{

    Node n1(1,10);
    Node n2(2,20);
  
    return 0;
}