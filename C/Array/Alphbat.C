#include  <stdio.h>

int main() {
    // Array me alphabets store karte hain
    char alphabets[26];
    
    // Loop se 'A' se 'Z' tak fill karte hain
    for(int i = 0; i < 26; i++) {
        alphabets[i] = 'A' + i;
    }

    // Ab array ke elements print karte hain
    printf("Alphabets:\n");
    for(int i = 0; i < 26; i++) {
        printf("%c ", alphabets[i]);
    }

    return 0;
}
