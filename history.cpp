#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "functions.h"

using namespace std;

int historySave(int zamowienie[10], float cena){
    fstream saveHistory;

    saveHistory.open("../data/orders/history.txt", ios::out | ios::app);
    saveHistory<<endl;
    saveHistory<<getDate()<<"\t";
    for(int i=0; i<10; i++){
        saveHistory<<zamowienie[i]<<" ";
    }
    saveHistory<<"\t"<<cena;
    saveHistory.close();

    return 0;
}

int historyRead(){
    fstream readHistory;
    string date;
    int historyId=0, orderCount=0;
    float price;

    readHistory.open("../data/orders/history.txt", ios::in);
    if(readHistory.good()==true){
        while (!readHistory.eof()){
            cout<<"Zamowienie #"<<++orderCount<<endl;
            for(int i=0; i<12; i++){
                switch(i){
                    case 0:
                        readHistory>>date;
                        cout<<date<<endl;
                        break;

                    case 1 ... 10:
                        readHistory>>historyId;
                        if(historyId==0){
                            //do nothing
                        }else{
                            cout<<prices[historyId-1][1]<<"zl"<<"\t\t"<< meals[historyId-1][1]<<endl;
                        }
                        break;

                    case 11:
                        readHistory>>price;
                        cout<<"Zaplacono: "<<price<<"zl";
                        break;
                }
            }
            cout<<endl<<endl;
        }
    }else{
        cout<<"Wystapil problem z wyswietleniem historii! Prosimy skontaktowac sie z obsluga restauracji. Przepraszamy za utrudnienia!"<<endl;
    }
    readHistory.close();

    return 0;
}

int historyForDate(string targetDate){
    fstream historyForDate;
    string date;
    int historyId=0, orderCount=0;
    float price;
    historyForDate.open("../data/orders/history.txt", ios::in);
    if(historyForDate.good()==true){
        while (!historyForDate.eof()) {
            historyForDate >> date;
            if (date == targetDate) {
                cout << "Zamowienie #" << ++orderCount << endl;
                cout << date << endl;
                for (int i = 1; i < 12; i++) {
                    switch (i) {
                        case 1 ... 10:
                            historyForDate >> historyId;
                            if (historyId == 0) {

                            } else {
                                cout << prices[historyId - 1][1] << "zl" << "\t\t" << meals[historyId - 1][1]
                                     << endl;
                            }
                            break;
                        case 11:
                            historyForDate >> price;
                            cout << "Zaplacono: " << price << "zl";
                            break;
                    }
                }
                cout << endl << endl;
            }else{
                //do nothing
            }
        }
        if(orderCount==0)
            cout<<"Nie znaleziono zamowien dla danej daty."<<endl;
    }else{
        cout<<"Wystapil problem z wyswietleniem historii! Prosimy skontaktowac sie z obsluga restauracji. Przepraszamy za utrudnienia!"<<endl;
    }
    historyForDate.close();

    return 0;
}

int historyReadExec(){
    int opcja;
    string targetDate;

    cout<<"Czego dokladnie szukasz?"<<endl
        <<"[0] Anuluj zapytanie"<<endl
        <<"[1] Moja historia zamowien"<<endl
        <<"[2] Historia zamowien dla danej daty"<<endl;
    cin>>opcja;

    switch(opcja){
        case 0:
            return 0;
            break;

        case 1:
            historyRead();
            break;

        case 2:
            cout<<"Podaj pozadana date w formacie YYYY-MM-DD: ";
            cin>>targetDate;
            cout<<endl;
            historyForDate(targetDate);
            break;

        default:
            cout<<"Wprowadzono nieprawidlowa opcje. Wracam do menu glownego.";
            break;
    }

    return 0;
}