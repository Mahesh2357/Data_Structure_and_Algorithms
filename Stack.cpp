#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
class Stack{
    int top;
    public :
    int a[MAX];
    Stack(){ top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack :: push(int x){
    if(top >= (MAX - 1)){
        cout << " Stack overflow. " << endl;
        return false;
    }
    else{
        a[++top] = x;
        cout << x << " push into Stack" << endl;
        return true;
    }
} 
int Stack :: pop(){
    if(top < 0){
        cout << " Stack underflow" << endl;
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}
int Stack :: peek(){
    if (top< 0){
        cout <<" Stack is empty" << endl;
        return 0;
    }
    else{
        int x = a[top];
        return x;
    }
}

bool Stack :: isEmpty(){
    return (top < 0);
}

int main()
{
    class Stack s1;
    s1.push(21);
    s1.push(30);
    s1.push(33);
    cout << s1.pop() << "popped from Stack " << endl;
    cout << "Element present in Stack : ";
    while (!s1.isEmpty())
    {
        cout<< s1.peek() << " ";
        s1.pop();
    }
    return 0;
}