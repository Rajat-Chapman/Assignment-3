#include <iostream>
using namespace std;

#define SIZE 10
int A[SIZE];
int top = -1;

class GenStack {
  int top = -1;
public :
      GenStack() { top = -1; }
      int A[SIZE];
      bool isEmpty();
      void push();
      void pop();
      void peek();
      void displayStack();
      ~GenStack();
};

bool GenStack::isempty() {
  if(top==-1)
  return true;
  else
  return false;
}

void GenStack::push(int value) {
  if(top==SIZE-1) {
    SIZE = SIZE * 2;
        int temp [SIZE];
        for (int i=0; i<SIZE; i++) {
            temp[i] = A[i];
        }
        delete [] A;
        A = temp;
        top++;
        A[top] = value;
  } else  {
    top++;
    A[top] = value;
  }
}

void GenStack::pop() {
 if(isempty())
  cout<<"The stack is empty\n";
 else
  top--;
}

void GenStack::peek() {
 if(isempty())
  cout<<"The stack is empty\n";
 else
  cout<<"The top element is: "<<A[top]<<"\n";
}

void GenStack::displayStack() {
  if(isempty()) {
    cout<<"The stack is empty\n";
 } else {
  for(int i=0 ; i<=top; i++)
    cout<<A[i]<<" ";
   cout<<"\n";
  }
}
