#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "functions.h"

using namespace std;

//zmienne globalne
float prices[19][2];
string meals[19][2];



int main(){
    int opcja;

    setPrices();
    setMeals();
    getDate();
    getName();

    while(true){
        showInterface();
        cin>>opcja;
        cout<<endl;
        switch(opcja){
            case 0:
                return 0;
                break;

            case 1:
                showMenu();
                break;

            case 2:
                placeOrder();
                break;

            case 3:
                historyReadExec();
                break;

            default:
                cout<<"Nieprawidlowa opcja!";
                break;
        }
    }
}