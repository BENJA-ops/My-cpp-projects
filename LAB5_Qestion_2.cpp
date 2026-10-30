#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
     srand(time(0));

        int daysUntilExpiration = rand() % 12;

         cout<< daysUntilExpiration <<endl;

    switch(daysUntilExpiration) {

            case 10:
            case  9:
            case  8:
            case  7:
            case  6:
                cout<<"Your subscription will expire soon.Renew now!"<<endl;
                    break;
            case  5:
            case  4:
            case  3:
            case  2:
                cout <<"Your subscription expires in "<<daysUntilExpiration<<" Days "<<" Renew now and save 10%!"<<endl;
                    break;
            case  1:
                 cout <<"Your subscription expires in "<<daysUntilExpiration<<" day " <<" Renew now and save 20%!";
                    break;
            case  0:
                cout<<"Your subscription has expired!";
                     break;
            default:
                 cout<<"You have an active subscription!";
                    break;





    }  
    
            return 0;



}