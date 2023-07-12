#include <stdbool.h>

char repeatedCharacter(char *s) {
    bool visited[128] = {false};  // Initialize a "hash table" for ASCII characters

    int i = 0;
    while (s[i] != '\0') {
        if (visited[(int)s[i]]) {  // If the character was already visited
            return s[i];  // Return the repeated character
        }
        visited[(int)s[i]] = true;  // Mark this character as visited
        i++;
    }

    return '\0';  // Return null character if no repeated character is found
}
