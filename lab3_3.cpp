#include <iostream>
using namespace std;
int main(){
    double n = 6,i=0;
    while(n<=19){
        i = i + (1/n);
        n++;
    }
    cout<<i;
    return 0;
}