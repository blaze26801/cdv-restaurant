#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "functions.h"
using namespace std;

int showInterface(){
    cout<<endl<<endl<<"----------------------------------"<<endl
        <<"Oto dostepne funkcje:"<<endl
        <<"[0] Zamknij program"<<endl
        <<"[1] Wyswietl menu"<<endl
        <<"[2] Zloz zamowienie"<<endl
        <<"[3] Sprawdz swoja historie zamowien"<<endl;
    return 0;
}

int showMenu(){
    char frame[] = "|";
    string linia;

    cout << "----------------------MENU---------------------" << endl;

    ifstream menuVisual("../data/menu/menuVisual.txt", ios::in);
    if(menuVisual.good()==true){
        while (getline(menuVisual, linia)) {
            cout << frame << linia << "  " << frame << endl;
        }
    }else{
        cout<<"Wystapil problem z wyswietleniem menu! Prosimy skontaktowac sie z obsluga restauracji. Przepraszamy za utrudnienia!"<<endl;
    }
    menuVisual.close();

    cout << "-----------------------------------------------" << endl;

    return 0;
}