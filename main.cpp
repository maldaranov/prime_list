#include <cstdio>

int main () {
    bool prime_flag;
    int n;
    printf("Please enter the upper limit value to check for primality: ");
    scanf("%d", &n);
    int primes[n], a = 0;

    
    for (int i = 2; i < n; i++) {
        prime_flag = true;
        for (int j = 2; j < i; j++) {
            if ((i % j) == 0) {
                prime_flag = false;
                break;
            }
        }
        if (prime_flag) printf("%d ", i);
        primes[a++] = i;
    }
    printf("\n");
    return 0;
}