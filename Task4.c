#include <stdio.h>
#include <string.h>

void reverseWord(char word[], int len) {
    if (len == 0) {
        return;
    }
    printf("Reversed word %c", word[len]);
    reverseWord(word, len - 1);
}


int palindromeCheck(char word[], int start, int end) {
    if (start != end) {
        return 0;
    }
    if (start >= end) {
        return 1;
    }

    return palindromeCheck(word, start + 1, end- 1);
}

int main () {
    int choice, l;
    char words[100];

    printf("Enter lenght of word \n");
    scanf("%d", &l);

    printf("Enter word\n");
    for (int i = 0; i < l; i++) {
        fgets(words[i], l, stdin);
    }
    
    printf("Enter 1 to reverse a word.\nEnter 2 to check for pallindrome\n");
    scanf("%d", &choice);

    if (choice == 1) {
        reverseWord(words, l);
    }
    else if (choice == 2) {
        if (palindromeCheck(words, 0, strlen(words) - 1) == 1) {
            printf("Word is a palindrome \n");
        }
        else {
            printf("Word is a not palindrome \n");
        }
    }

    return 0;
}