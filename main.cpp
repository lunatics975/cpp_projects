//Example for C++ Encapsulation
#include <iostream>
#include <string>
/*creates class bank*/
class bank{
    private:
    int value = 3000;
    public:
    double lost = 3.76;
    char Letter = 'A';
    bool Boolean = true;
    float Float = 3.14e10;
    int getnumber();
    void setnumber(int wert);
    void getboolean(){
        std::cout<<"china: "<<Boolean<<"\n";
    }
};

int main(){
    const bool china = true;
    int lol;
    int a, b=10, c;
    a = b = 10;
    std::string accountname;
    std::cout<<"Hello, type in your number \n";
    std::cin>>lol;
    std::cout<<"Also type in your name"<<std::endl;
    std::cout<<"Hi\\lollol\"lostx3\"haha\tlost"<<std::endl;
    getline(std::cin, accountname);
    //new object myaccount
    bank mya;
    mya.setnumber(lol);
    std::cout<<"Your number is: "<<mya.getnumber()<<std::endl;
    mya.getboolean();
    return 0;
}

int bank::getnumber(){
    int s = value;
    return s;
}

void bank::setnumber(int wert){
    value = wert;
}