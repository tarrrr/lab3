#include <iostream>
using namespace std;
int main(){
    double n = 2,i=0;
    while(n<=69){
        i = i + (1/n);
        n++;
    }
    cout<<i;
    return 0;
}