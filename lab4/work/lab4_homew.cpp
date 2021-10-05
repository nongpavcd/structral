#include <iostream>
using namespace std;
int main(){
    int num,n,score;
    float sum;
    sum = 0;
    cout << "Enter the number of student : ";
    cin >> num;
    bool check;
    for(n = 1; n<= num; n++){
        do{
            cout << "Enter score : " << n <<" : ";
            cin >> score;

            if(score < 0 || score > 5){
                check = true;
            }else{
                check = false;
                sum = sum + score;
            }
        }while(check == true);
    }
        sum = sum/num;
cout << "\n sum of student : "<< num ;
cout << "\n average is : "<< sum << endl;
    return(0);
}