#include <iostream>
#include <cstdlib>
//#include <ctime>
using namespace std;

int main (){

time_t currenTime = time(nullptr);

    cout << ctime(&currenTime);

    return 0;

}