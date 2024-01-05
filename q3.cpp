#include <iostream>

using namespace std;

class Deque {
  private: 
  int front = -1, rear = -0;
  int maxsize, item;
  int *queue;
  
  public: 
  Deque(int size) {
      maxsize = size;
      queue = new int[maxsize];
  }
  bool isFull() {
  if (front == 0 && rear == maxsize - 1) return true;
  else return false;
      
}
  bool isEmpty() {
       return (front == -1);
  }
  void push_front() {
     if(isFull()) {
         cout<<"Queue is Full. Overflow Condition" <<endl;
     }
     else{
          if (front == -1) {
            front = 0, rear = 0;
            }
        else if (front == 0)
            front = maxsize - 1;
        else front--;
        cout<<"Enter the number you want to insert at front" << endl;
        cin>> item;
        queue[front] = item; 
     }
  }
    void push_back() {
     if(isFull()) {
         cout<<"Queue is Full. Overflow Condition" <<endl;
     }
     else{
          if (front == -1) {
            front = 0, rear = 0;
            }
        else if (rear == maxsize-1)
           rear=0;
        else rear++;
        cout<<"Enter the number you want to insert at rear" << endl;
        cin>> item;
        queue[rear] = item; 
     }
  }
  
  void pop_back() {
        if (isEmpty()) {
            cout << " Queue is Empty. Underflow Condition" << endl;
        }
    else {
        item = queue[rear];
        cout<<"The dequeued item is: "<<item<<endl;
        if (front == rear)  front = -1, rear = -1;
        else if(rear ==0) rear = maxsize -1;
        else rear--;
      }
  }
  
    void pop_front() {
        if (isEmpty()) {
            cout << " Queue is Empty. Underflow Condition" << endl;
        }
    else {
        item = queue[front];
        cout<<"The dequeued item is: "<<item<<endl;
        if (front == rear)  front = -1, rear = -1;
        else if(front == maxsize-1 ) front= 0;
        else front++;
      }
  }
};

int main() {
    cout<<"Welcome to Circular Queue operation"<< endl;
    int size;
    cout<<"Enter the size of the queue"<<endl;
    cin>> size; 
    Deque dq1(size);
    char n ='y';
    while (n != 'n') {
        int c;
        cout<<"What do you want to do?"<<'\n'<<"1)Insert item at front"<< '\n'<<"2)Insert item at back."<<'\n'<<"3)Pop item from front."<<'\n'<<"4)Pop item from back."<<endl;
        cin>> c;
        switch(c) {
            case 1:
            dq1.push_front();
            break;
            case 2:
            dq1.push_back();
            break;
              case 3:
            dq1.pop_front();
            break;
              case 4:
            dq1.pop_back();
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