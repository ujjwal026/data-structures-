#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1)
           return 1;
    else{
        return (fibo(n-2)+fibo(n-1));
    }
}

int main() {
    // Write C++ code here
    int n=6;
    cout<<fibo(n)<<" ";

    return 0;
}