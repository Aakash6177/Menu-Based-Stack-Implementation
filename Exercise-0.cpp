#include<iostream>
using namespace std;

class MyStack{
public:
  int top;
  double *s;   // name of the array
  int capacity; // number of elements stack can contian
  int size;  // number of elements in stack
public:
  MyStack(){
    top = -1;
    s = nullptr;
    int capacity = 0;
    int size = 0;
  }
  MyStack(int capacity1){
    top = -1;
    capacity = capacity1;
    s = new double[capacity];

  }
  bool isFull(int capacity){
    if(top==capacity){
      return true;
    }
    else{
      return false;
    }
  }
  bool isEmpty(int capacity){
    if(top == -1){
      return true;
    }
    else{
      return false;
    }
  }
  void Push(double x){
      if(isFull(capacity)){
        cout<<"Stack Overflow"<<endl;
      }
      else{
        top++;
        s[top] = x;
      }
  }
  double Pop(){
    if(isEmpty(capacity)){
      cout<<"Stack is Underflow"<<endl;
      return 0;
    }
    else{
      double popval  = s[top];
      s[top] = 0;
      top--;
      return popval;
    }
  }
  double Top(){
    return s[capacity];
  }
  void display(){
    cout<<"All values in the stack are: "<<endl;
    for(int i=capacity;i>=0;i--){
      cout<<s[i]<<endl;
    }
  }
};


int main(){

MyStack s1(5);
int option;
double val;

do{

  cout<<"What operation you want to perform? Select the Option Number. Press 0 to exit"<<endl;
  cout<<"1. Push()"<<endl;
  cout<<"2. Pop()"<<endl;
  cout<<"3. isEmpty()"<<endl;
  cout<<"4. isFull()"<<endl;
  cout<<"5. Display()"<<endl;
  cout<<"6. Top()"<<endl;
  cout<<"7. Clear Screen"<<endl;
  cin>>option;

  switch(option){
    case 0:
      break;
    case 1:
      cout<<"Enter the value you want to push"<<endl;
      cin>>val;
      s1.Push(val);
      break;
    case 2:
      cout<<"Pop function called"<<endl;
      s1.Pop();
      break;
    case 3:
      if(s1.isEmpty(5)){
        cout<<"Stack is empty"<<endl;
      }
      else{
        cout<<"Stack is not empty"<<endl;
      }
      break;
    case 4:
      if(s1.isFull(5)){
        cout<<"Stack is Full"<<endl;
      }
      else{
        cout<<"Stack is not Full"<<endl;
      }
      break;
    case 5:
      s1.display();
      break;
    case 6:
      cout<<"Top element in the stack is "<<s1.Top()<<endl;
      break;
    case 7:
      system("clear");
      break;
    default:
      cout<<"Invalid Input"<<endl;
  }

}
while(option!=0);
  return 0;
}
