#include <iostream>
#include <stack>
using namespace std;

int main(){

 stack<int> numbers;
 numbers.push(10);
 numbers.push(20);
 numbers.push(30);

    cout <<numbers.top()<<endl;

    numbers.pop();

    cout <<numbers.top()<<endl;

        return 0;

}

