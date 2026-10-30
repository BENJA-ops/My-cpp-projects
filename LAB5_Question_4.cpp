#include <iostream>
using namespace std;

int main() {

    int number;


    cout<<"Please enter a number between 5 and 10"<<endl;
    cin >>number;


        if(number<5||number<0){
                cout<<"sorry , you entered an invalid number,Please try again 1"<<endl;
                int k;

                 cin>>k;

                switch(k){
                case 1:
                    cout<<"Please enter a number between 5 and 10"<<endl;
                     cin >>number;

                    cout<<"Your input value ("<<number <<") has been accecpted"<<endl;
                    break;

                    default:
                        cout<<"program terminated.......invalid input";

                        exit(0);

                        break;
                
                
                }
                 } else { 

        

                     cout<<"Your input value ("<<number <<") has been accecpted";

    }


        }
        