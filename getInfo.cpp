#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "functions.h"


using namespace std;

string getDate(){
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    string date, day, month, year;
    char dash='-';
    int temp;

    year = to_string(aTime->tm_year + 1900);
    temp=aTime->tm_mon + 1;
    if(temp<10)
        month+='0';
    month+=to_string(temp);

    temp = aTime->tm_mday;
    if(temp<10)
        day+='0';
    day+=to_string(temp);

    date=year+dash+month+dash+day;

    return date;
}

int getName(){
    fstream getSetup;
    string name;

    getSetup.open("../data/setup.txt", ios::in);
    if(getSetup.good()==true){
        getSetup>>name;
        getSetup>>name;
        cout<<"Witaj w restauracji "<<name<<"!"<<endl;
    }else{
        cout<<"Wystapil problem z jednym z plikow konfiguracyjnych. \nSkontaktuj sie prosze z obsluga restauracji. \nPrzepraszamy za utrudnienia!";
    }
    getSetup.close();

    return 0;
}

float setPrices(){
    fstream getPrices;
    float price=0;

    getPrices.open("../data/menu/prices.txt", ios::in);
    if(getPrices.good()==true){
        for(int i=0; i<19; i++){
            for(int j=0; j<2; j++){
                getPrices>>price;
                prices[i][j]=price;
            }
        }
    }else{
        cout<<"UWAGA! \nWystąpił błąd w bazie danych programu! \nZamowienie moze nie zostac poprawnie przetworzone.\n Prosimy skontaktowac się z obsluga restauracji.\n Przepraszamy za utrudnienia!";
    }
    getPrices.close();

    return 0;
}

int setMeals(){
    fstream getMeals;
    string meal;
    int mealId=0;

    getMeals.open("../data/menu/meals.txt", ios::in);
    if(getMeals.good()==true){
        while(getline(getMeals, meal, '\n')){
            meals[mealId][1]=meal;
            mealId++;
        }
    }else{
        cout<<"UWAGA! \nWystąpił błąd w bazie danych programu! \nZamowienie moze nie zostac poprawnie przetworzone.\n Prosimy skontaktowac się z obsluga restauracji.\n Przepraszamy za utrudnienia!";
    }
    getMeals.close();

    return 0;
}