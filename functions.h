#ifndef MAIN_CPP_FUNCTIONS_H
#define MAIN_CPP_FUNCTIONS_H

std::string getDate();
int getName();
float setPrices();
int setMeals();
int historySave(int zamowienie[10], float cena);
int historyRead();
int historyForDate();
int historyReadExec();
int showInterface();
int showMenu();
int placeOrder();

extern float prices[19][2];
extern std::string meals[19][2];


#endif //MAIN_CPP_FUNCTIONS_H