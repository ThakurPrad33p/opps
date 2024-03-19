#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void animal(){
        cout<<"Animals are here.";
    }
};

class Child:public Animal{
    public:
    void animal(){
        cout<<"Children are here";
    }
};

int main(){
    Animal *A;
    A=new Child();
    A->animal();
}

