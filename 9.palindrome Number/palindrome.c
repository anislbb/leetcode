#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
    long long original = x;
    long long reverse = 0;
    while(x>0){
        reverse = reverse*10 + (x%10);
        x/= 10;
    }
    return original==reverse;
}