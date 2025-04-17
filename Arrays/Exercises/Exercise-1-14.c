//
//  Exercise-1.c
//  
//
//  Created by Dillon Teakell on 4/16/25.
//

#include <stdio.h>

int main() {
    int c;
    int char_frequency[256] = {0}; // 256 size for ASCII compatibility
    
    // Get input and count characters
    while((c = getchar()) != EOF) {
        if (c >= 0 && c < 256) {
            ++char_frequency[c];
        }
    }
    
    // Print histogram
    for (int i = 0; i < 256; ++i) {
        if (char_frequency[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < char_frequency[i]; ++j) {
                putchar('*');
            }
            putchar('\n');
        }
    }
}
