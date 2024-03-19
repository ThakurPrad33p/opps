#include<iostream>
using namespace std;

class customer{
    public:
    int acc_no;
    string name;
    int balance;
    customer(){
        cout<<"Constructor is called.\n";
    }
    customer(string name,int balance,int acc_no){
        this->name =name;
        this->acc_no =acc_no;
        this->balance=balance;
    }

    customer(customer&B){
        name =B.name;
        acc_no=B.acc_no;
        balance=B.balance;
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<" "<<endl;
    }

};
int main(){
    customer c1("Pradeep",10000,382);
    c1.display();
    customer c2(c1);
    c2.display();
}