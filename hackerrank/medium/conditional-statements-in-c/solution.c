#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // Write Your Code Here
    if (n >= 1 && n <= 9) {
        char *words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        printf("%s\n", words[n - 1]);
    } else {
        printf("Greater than 9\n");
    }

    return 0;
}
