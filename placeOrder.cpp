#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "functions.h"

using namespace std;

int placeOrder(){
    float cena;
    int danie=1, count=0, temp=0, cancelId=0;
    int zamowienie[10];
    for(int i=0; i<10; i++)
        zamowienie[i]=0;

    cout<<"Tutaj mozesz zlozyc zamowienie."<<endl
        <<"[0] \tAnuluj zamowienie"<<endl
        <<"[1-19]\tDodaj potrawe o danym numerze"<<endl
        <<"[20] \tWyswietl menu"<<endl
        <<"[21] \tSprawdz zawartosc koszyka"<<endl
        <<"[22] \tUsun czesc zamowienia"<<endl
        <<"[23] \tZloz zamowienie"<<endl;

    while(count<10&&danie!=0){
        cin>>danie;
        switch(danie){
            case 0:
                cout<<"Anulowano zamowienie.";
                return 0;
                break;

            case 1 ... 19:
                cout<<"Dodano danie numer "<<danie<<"."<<endl;
                zamowienie[count]=danie;
                count++;
                break;

            case 20:
                showMenu();
                break;

            case 21:
                if(count==0){
                    cout<<"Twoje zamowienie jest puste!"<<endl;
                }else{
                    cout<<"Twoje obecne zamowienie zawiera: "<<endl;
                    for(int i=0; i<count; i++){
                        cout<<"Pozycja #"<<i+1<<"\t"<<prices[zamowienie[i]-1][1]<<"zl"<<"\t\t"<< meals[zamowienie[i]-1][1]<<endl;
                    }
                }
                break;

            case 22:
                cout<<"Twoje obecne zamowienie zawiera: "<<endl;

                for(int i=0; i<count; i++){
                    cout<<"Pozycja #"<<i+1<<"\t"<<prices[zamowienie[i]-1][1]<<"zl"<<"\t\t"<< meals[zamowienie[i]-1][1]<<endl;
                }

                cout<<"Wpisz numer pozycji, ktora chcesz usunac z zamowienia: ";
                cin>>cancelId;

                for(int i=0; i<count; i++){
                    if(zamowienie[i]==cancelId-1){
                        for(int j=i; j<(count); j++){
                            zamowienie[j]=zamowienie[j+1];
                        }
                    }
                }
                cout<<"Wybrana pozycja zostala usunieta z zamowienia."<<endl;
                count--;
                break;

            case 23:
                if(count==0){
                    cout<<"Twoj koszyk jest pusty!"<<endl;
                }else{
                    count=10;
                }
                break;

            default:
                cout<<"Podano nieprawidlowa wartosc!"<<endl;
                break;
        }
    }

    if(count==10){
        cout<<"Dodano wszystkie potrawy do koszyka. Twoje zamowienie zawiera:"<<endl;

        while(temp<10&&zamowienie[temp]!=0){
            cout<<prices[zamowienie[temp]-1][1]<<"zl"<<"\t\t"<< meals[zamowienie[temp]-1][1]<<endl;
            cena+=prices[zamowienie[temp]-1][1];
            temp++;
        }

        cout<<"Za cale zamowienie zaplacisz: "<<cena<<"zl. "<<endl
            <<"Nacisnij [1] aby potwierdzic zamowienie."<<endl
            <<"Nacisnij [0] aby anulowac zamowienie."<<endl;
        do{
            cin>>temp;
            if(temp==0){
                cout<<"Zamowienie zostanie anulowane. Jesli natrafiles na problem, popros o pomoc obsluge restauracji."<<endl;
                return 0;
            }else if(temp==1){
                cout<<"Dziekujemy za zlozenie zamowienia! Zostanie ono podane tak szybko, jak to mozliwe. Smacznego! :)"<<endl;
                historySave(zamowienie, cena);
            }else{
                cout<<"Wybrano nieprawidlowa opcje. Nacisnij [1] lub [0]."<<endl;
            }
        }while(temp!=0&&temp!=1);
    }

    return 0;
}