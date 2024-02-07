//Example for C++ Encapsulation
#include <iostream>
#include <string>

class bank{
    private:
    int value = 3000;
    public:
    int getnumber();
    void setnumber(int wert);
};

int main(){
    int lol;
    std::string accountname;
    std::cout<<"Hello, type in your number \n";
    std::cin>>lol;
    std::cout<<"Also type in your name"<<std::endl;
    getline(std::cin, accountname);
    bank mya;
    mya.setnumber(lol);
    std::cout<<"Your number is: "<<mya.getnumber()<<std::endl;
    return 0;
}

int bank::getnumber(){
    int s = value;
    return s;
}

void bank::setnumber(int wert){
    value = wert;
}