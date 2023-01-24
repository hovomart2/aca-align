#include <my_functions/my_functions.h>

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

bool isPrime(int n) {
    if (n == 0 || n == 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPowerOfTwo(int n) {

    if (n <= 0) {
        return false;
    }
    while (n != 1) {
        if (n % 2 != 0) {
            return false;
        }
        n = n / 2;
    }
    return true;
}

int numOfOnes(int n) {
    int res = 0;
    int m = n;
    for (int i = 0; i < 32; i++) {
        m = m >> 1;
        m = m << 1;
        if (n != m) {
            res += 1;
        }
        m = m >> 1;
        n = n >> 1;
    }
    return res;
}