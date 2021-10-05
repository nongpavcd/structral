#include <iostream>
using namespace std;
int main(){
    int fish_cal ,tomato_cal,fish_cap,tomato_cap,can;
    can = 0;
    cout << "Enter your canned fish recipe" << endl;
    cout << "fish per can : " << endl;
    cin  >> fish_cal;
    cout << "tomato per can : " << endl;
    cin  >> tomato_cal;
    cout << "Enter your number of fish : " << endl;
    cin  >> fish_cap;
    cout << "Enter your number of tomato : " << endl;
    cin  >> tomato_cap;

    while (fish_cal<=fish_cap && tomato_cal<=tomato_cap)
    {
        fish_cap -= fish_cal;
        tomato_cap -= tomato_cal;
        can ++;
    }
        cout << "num of roza : " << can <<endl;
        cout << "fish balance : " << fish_cap <<endl;
        cout << "tomato balance : " << tomato_cap <<endl;
        return(0);
   
}