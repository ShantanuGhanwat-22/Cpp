#include <iostream>
using namespace std; 
 
int main() { 
    int i, j, count = 0; 
    for (i = 2; count < 20; i++) { 
        int isPrime = 1; 
        for (j = 2; j <= i/2; j++) { 
            if (i % j == 0) { 
                isPrime = 0; 
                break; 
            } 
        } 
        if (isPrime == 1) { 
            cout<<i<<endl; 
            count++; 
        } 
    } 
    return 0; 
}
