#include <iostream>
int main(){
    int num1, num2, num3;
    std::cout<<"Enter the first number:"<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter the second number:"<<std::endl;
    std::cin>>num2;
    std::cout<<"Enter the third number:"<<std::endl;
    std::cin>>num3;
    if ((num1>num2) && (num1>num3)){
        std::cout<<"The largest number is: "<<num1<<std::endl;
    }
    else if ((num2>num1) && (num2>num3)){
        std::cout<<"The largest number is: "<<num2<<std::endl;
    }
    else{
        std::cout<<"The largest number is: "<<num3<<std::endl;
    }
    return 0;
}