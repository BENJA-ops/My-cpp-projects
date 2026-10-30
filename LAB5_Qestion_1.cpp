#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
        srand(time(0));

        int daysUntilExpiration = rand() % 12;

         cout<< daysUntilExpiration <<endl;

       if (daysUntilExpiration<=10&&daysUntilExpiration>5){
               cout<<"Your subscription will expire soon.Renew now!"<<endl;

       } 
       
        
       if(daysUntilExpiration<=5&&daysUntilExpiration>=2){
        cout <<"Your subscription expires in "<<daysUntilExpiration<<" Days "<<" Renew now and save 10%!"<<endl;
       

       
       }else if (daysUntilExpiration==1){

         cout <<"Your subscription expires in "<<daysUntilExpiration<<" day " <<" Renew now and save 20%!";
       
       }
       else if(daysUntilExpiration>10){

           cout<<"You have an active subscription!";
       }
      

       
      else if(daysUntilExpiration==0){
        cout<<"Your subscription has expired!";
    
       }

        return 0;


}