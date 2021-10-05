
#include <iostream>
#include <string>
using namespace std;
int main(){
    int galon,mile;
    float litre,kilo,sum_l,sum_f;
    cout << "\n Input petroleum : ";
    cin >> galon;
    cout << "\n Input mileage  : ";
    cin >> mile;
    litre = 4.5461 * galon;
    kilo = 1.6093 * mile;
    cout << "\n Fuel economy ="<< mile/galon <<" Miles per gallon(MPG)";
    sum_l = litre / kilo;
    cout << "\n The car will use "<< sum_l << " Litre per kilometre";
    sum_f =  kilo / litre;
    cout << "\n Fuel economy = "<< sum_f <<" kilometres per litre";
  //1 galon = 4.5461 litre
  //1 mile  = 1.6093 kilometre 
    return(0);
}