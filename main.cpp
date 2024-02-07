//Example for C++ Encapsulation
#include <iostream>

class bank{
    private:
    int value = 3000;
    public:
    int getnumber();
    void setnumber(int wert);
};

int main(){
    int lol;
    std::cout<<"Hello, type in your things";
    std::cin>>lol;
    bank mya;
    mya.setnumber(lol);
    std::cout<<"Your number is:"<<mya.getnumber()<<std::endl;
    return 0;
}

int bank::getnumber(){
    int s = value;
    return s;
}

void bank::setnumber(int wert){
    value = wert;
}