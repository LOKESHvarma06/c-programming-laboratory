
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int N) {
  
 
    if (N <= 1) {
        return false;
    }

   
    for (int i = 2; i < N; i++) {
      
        // If N is divisible by any number in this range, it
        // is not prime
        if (N % i == 0) {
            return false;
        }
    }

  
    return true;
}


