// enqueue and deque items to circular queue
#include <iostream>
#define maxsize 3
using namespace std;
class Queue
{
private:
    int front = 0, rear = 0, item, queue[maxsize];

public:
    void display()
    {
        cout << "The data of the list:\n";
        for (int i = front; i < maxsize; i++)
        {
            cout << queue[i] << "\t";
        }
    }
    void enqueue()
    {
        if (front == (rear + 1))
        {
            cout << "Queue is full. Overflow condition." << front << rear << endl;
        }
        else
        {
            cout << "Enter the item to be enqueued" << endl;
            cin >> item;
            cout << endl;
            queue[rear] = item;
            rear = (rear + 1) % maxsize;
            cout << item << " was just enqueued\n"
                 << endl;
        }
    }

    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty. Underflow condition" << rear << endl;
        }
        else
        {
            item = queue[front];
            front = (front + 1) % maxsize;
            cout << item << " was just removed from the queue\n"
                 << endl;
        }
    }
};

int main()
{
    int choice;
    Queue q1;
    while (choice != 4)
    {

        cout << "\nEnqueue ->1" << endl;
        cout << "Dequeue ->2" << endl;
        cout << "list    ->3" << endl;
        cout << "Exit    ->4 " << endl;
        cout << "Enter the no. of the operation you would like to perform" << endl;
        cin >> choice;

        if (choice == 1)
        {
            q1.enqueue();
        }
        else if (choice == 2)
        {
            q1.dequeue();
        }
        else if (choice == 3)
        {
            q1.display();
        }
        else if (choice == 4)
        {
            cout << "Press any key to continue" << endl;
        }

        else
            cout << "Invalid character. Please enter the options from 1-3" << endl;
    }
    return 0;
}