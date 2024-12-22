//Lets code it--Shahid
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swapCharacters(char *str, char mostFreq, char leastFreq) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == tolower(mostFreq)) {
            str[i] = isupper(str[i]) ? toupper(leastFreq) : tolower(leastFreq);
        } else if (tolower(str[i]) == tolower(leastFreq)) {
            str[i] = isupper(str[i]) ? toupper(mostFreq) : tolower(mostFreq);
        }
    }
}

int main() {
    char str[100];
    int freq[256] = {0};
    
    
    scanf("%s", str);
    
    
    for (int i = 0; str[i] != '\0'; i++) {
        freq[tolower(str[i])]++;
    }

    
    char mostFreq = str[0], leastFreq = str[0];
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[tolower(str[i])] > freq[tolower(mostFreq)]) {
            mostFreq = str[i];
        }
        if (freq[tolower(str[i])] < freq[tolower(leastFreq)]) {
            leastFreq = str[i];
        }
    }

    
    swapCharacters(str, mostFreq, leastFreq);
    
    
    printf("%s\n", str);
    
    return 0;
}
