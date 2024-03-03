#include <iostream>

int addNumbers(int first, int second){
    int sum = first + second;
    return sum;
}
int main(){
    std::cout << "sum: " << addNumbers(43, 56) << std::endl;
    return 0;
}