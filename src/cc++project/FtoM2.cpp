#include <iostream>
using namespace std;
int main(){
    double m;
    int counter=0;
    for (int f = 1; f<=100; f++){
        m = f/3.28;
        cout << f << " feet is " << m << " meters\n";
        counter++;
        if (counter ==25){
            cout << "\n";
            counter=0;
        }
    }
}