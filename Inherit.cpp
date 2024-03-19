#include<iostream>
using namespace std;

class human{
    protected:
    string name,gender;

    public:
    void study(){
        cout<<"Study is continue\n";
    }
};

class student:public human{
    public:
    int roll_number,fee;
    student(string name,string gender,int roll_number,int fee){
        this->name=name;
        this->gender=gender;
        this->roll_number=roll_number;
        this->fee=fee;
    }
};

int main(){
    student A1("Pradeep","male",52,80);
    A1.study();
}