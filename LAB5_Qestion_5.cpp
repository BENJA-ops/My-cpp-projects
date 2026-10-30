#include <iostream>
using namespace std;

int main(){

cout <<"please select the area of the figure you want to calculate"<<endl;
cout <<"1 . Square"<<endl;
cout <<"2 . Rectangle"<<endl;
cout <<"3 . tringle"<<endl;
cout <<"4 . Quit question" <<endl;

cout<<"ENTER SELECTION : ";
    int number;

    cin>>number;

    int a;
    int b;
    int c;

double Area ;

switch(number){

            case 1:
                cout<<"Plaese enter one side"<<endl;
                cin>>a;
                cout<<"Please enter the other side"<<endl;
                cin>>b;

                Area=a*b;

                cout<<"THe area of Squere is "<<Area<<endl;
                    break;

                
            case 2: 
                cout<<"please enter the length"<<endl;
                cin>>a;
                cout<<"please enter the width"<<endl;
                cin>>b;

                Area=a*b;
                    cout<<"THe area of Rectangle is "<<Area<<endl;
                    break;
            case 3:
                cout<<"please  enter the base"<<endl;
                cin>>a;
                cout<<"please enter the hight"<<endl;
                cin>>b;

                Area =(a/2)*b;

                cout<<"THe area of Trianlge is "<<Area<<endl;
                        break;
            defalt :
                    cout<<"Try again another time........program terminated";
}




}