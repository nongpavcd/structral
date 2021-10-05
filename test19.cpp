
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,i,j,c;
    cout << "\nEnter a num : ";
    cin >> n;
    cout << endl;
  
    i = 1;
    while(i<=n)
    {
        c = 0;
        for(j=1;j<=i;j++){
            if(i%j==0)c++;
        }
    if(c==2){
        cout << " " << i <<endl;
         
    }
    i++;
    }
    return(0);
}