#include <iostream>

using namespace std;

class CircularQueue {
  private: 
  int front = 0, rear = -0;
  int maxsize, item;
  int *queue;
  
  public: 
  CircularQueue(int size) {
      maxsize = size;
      queue = new int[maxsize];
  }
  void enqueue() {
      if (front==(rear+1)%maxsize) 
      cout<< "Queue is full. Overflow condition"<<endl;
      else {
        cout<<"Enter the number you want to enqueue" << endl;
        cin>> item;
        queue[rear] = item;  
        rear = (rear+1)%maxsize;
        cout<<"The element is enqueued"<<endl;
      }
  }
  void dequeue() {
      if (front == rear) 
      cout<< "Queue is empty. Underflow condition"<<endl;
      else {
        item = queue[front];
        front = (front+1)%maxsize;
        cout<<"The dequeued item is: "<<item<<endl;
      }
  }

  
};

int main() {
    cout<<"Welcome to Circular Queue operation"<< endl;
    int size;
    cout<<"Enter the size of the queue"<<endl;
    cin>> size; 
    CircularQueue cq1(size);
    char n ='y';
    while (n != 'n') {
        int c;
        cout<<"What do you want to do?"<<'\n'<<"1)Enqueue an item"<< '\n'<<"2)Dequeue an item."<<endl;
        cin>> c;
        switch(c) {
            case 1:
            cq1.enqueue();
            break;
            case 2:
            cq1.dequeue();
            break;
            default:
            cout<<"Invalid selection. Please do again."<<endl;
            break;
        }
        cout<<"Do you want to continue (y/n)?"<<endl;
        cin>>n;
    }
    
    
    return 0;
}