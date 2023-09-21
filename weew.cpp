#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class BaseClass{
    public:
    int *ptr; // pointer
    BaseClass(int i){
        ptr = new int(i);
    }
    void display(){
        cout << "The number is : " << *ptr;
    }
    ~BaseClass(){
        delete ptr;
    }
};

void function(BaseClass x){
    cout << "This is OOP. " << endl;
}

void main(){
    BaseClass x = 212;
    // function(x);
    x.display();
    // return 0;
}