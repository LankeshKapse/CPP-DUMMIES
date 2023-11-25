#include <iostream>

/**
 * This is addtion function
 * input two int values 
 * and return type is also an int
*/
int add(int num1, int num2){
    return num1+num2;
}

/*
  Main funtion which will called 
  the addtion function 
*/
int main(){
    int num1=10;
    int num2=20;
    int sum = add(num1,num2);
    std::cout << "Addition of two number 10 + 20 >> "<< sum << std::endl;

    // You can define variable in this format as well
    int first_number {3};
    int second_number {7};

    std::cout << "Addition of " << first_number << " + " << second_number << " =  " << add(first_number,second_number);

    return 0;
}