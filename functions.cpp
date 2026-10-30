#include <iostream>
using namespace std;

int add (int number1,int number2){
    cout << "Enter number1";
    cin >> number1;
    cout <<"Enter number2";
    cin >> number2;
    int sum = number1 + number2;

    return sum;

}

int main(){
    int number1;
    int number2;
    int total =add(number1, number2);

    cout <<"The sum for the two numbers is "<< total << endl;


}
