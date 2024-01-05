// enqueue and deque items to linear queue
#include <iostream>
#define maxsize 3
using namespace std;
class Queue
{
private:
    int front = -1, rear = 0, item, queue[maxsize];

public:
    void enqueue()
    {
        if (rear >= maxsize - 1)
        {
            cout << "Queue is full. Overflow condition." << endl;
        }
        else
        {
            cout << "Enter the item to be enqueued" << endl;
            cin >> item;
            cout << endl;
            ++rear;
            queue[rear] = item;
            cout << item << " was just enqueued" << endl;
        }
    }

    void dequeue()
    {
        if (front > rear)
        {
            cout << "Queue is empty. Underflow condition" << endl;
        }
        else
        {
            item = queue[front];
            ++front;
            cout << item << " was just removed from the queue" << endl;
        }
    }
};

int main()
{
    int choice;
    Queue q1;
    while (choice != 5)
    {

        cout << "Insert at the Front   ->1" << endl;
        cout << "Insert at the Rear    ->2" << endl;
        cout << "Delete from the Front ->3 " << endl;
        cout << "Delete from the Rear  ->4 " << endl;
        cout << "Exit                  ->5 " << endl;
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
        else if (choice == 2)
        {
            q1.dequeue();
        }
        else if (choice == 2)
        {
            q1.dequeue();
        }
        else if (choice == 5)
        {
            cout << "Press any key to continue" << endl;
        }

        else
            cout << "Invalid character. Please enter the options from 1-3" << endl;
    }
    return 0;
}