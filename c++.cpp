#include<bits\stdc++.h>
using namespace std;

void f(int n){
    if(n>0){
    f(n-1);
    cout << n << endl;
    }
}
 
int main(){
    int n = 3;
    f(n);
    return 0;
}

