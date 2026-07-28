// Character-Counting
// Write a program to count input (for-loop)

#include <stdio.h>

int main() {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc) {
        printf("%.0f\n", nc);
    }
}
