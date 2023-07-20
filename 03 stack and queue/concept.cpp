#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100

class Stack {
private:
    int top;             // Index of the top element
    int data[MAX_SIZE];  // Array to store elements

public:
    Stack() {
        top = -1;  // Initialize top to -1 for an empty stack
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int element) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push element." << endl;
            return;
        }

        data[++top] = element;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop element." << endl;
            return;
        }

        --top;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }

        return data[top];
    }

    int size() {
        return top + 1;
    }
};

class Queue {
private:
    int front;             // Index of the front element
    int rear;              // Index of the rear element
    int data[MAX_SIZE];    // Array to store elements

public:
    Queue() {
        front = -1;        // Initialize front and rear to -1 for an empty queue
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue element." << endl;
            return;
        }
        else if (isEmpty()) {
            front = 0;    // If the queue is empty, set front to 0
        }

        data[++rear] = element;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue element." << endl;
            return;
        }
        else if (front == rear) {
            front = rear = -1;    // If the queue has only one element, reset front and rear to -1
        }
        else {
            ++front;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return data[front];
    }

    int size() {
        if (isEmpty()) {
            return 0;
        }

        return (rear - front + 1);
    }
};

int main() {
    //stack ka
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    cout << "Top element: " << stack.peek() << endl;
    cout << "Size of stack: " << stack.size() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;




    //queue ka
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Front element: " << queue.getFront() << endl;
    cout << "Size of queue: " << queue.size() << endl;

    queue.dequeue();
    cout << "Front element after dequeue: " << queue.getFront() << endl;

    return 0;
}
