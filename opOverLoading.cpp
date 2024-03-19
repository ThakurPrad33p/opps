#include<iostream>
using namespace std;


class complexSum{
    int real,vir;
    public:
    complexSum(int real,int vir){
        this->real=real;
        this->vir= vir;
    }
    complexSum(){

    };
    void display(){
        cout<<real<<" +i"<<vir<<endl;
    }

    complexSum operator+(complexSum&c){
        complexSum ans;
        ans.real = real+c.real;
        ans.vir= vir +c.vir;
        return ans;
    }
};

int main(){
    complexSum c1(2,5);
    complexSum c2(1,3);
    complexSum c3 = c1+c2;
    c1.display();
    c2.display();
    c3.display();
}