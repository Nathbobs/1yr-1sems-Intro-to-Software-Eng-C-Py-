#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[20];
    int numWords = 0;
    char wordSearch[20];
    int duplicated = 0;
    int exist =0;

    while (1){
        scanf("Enter a word(Enter 'end' to quit): %s", word[numWords]);
        char* ptr = (char*) malloc(numWords*sizeof(char));
        if (!strcmp(word[numWords],"end")) { break; }
        for (int j = 0; j < numWords; j++) {
            if (!strcmp(word[numWords], word[j])){
                printf("This word already exists. Please enter another word.\n");
                duplicated = 1; break; }
            
        }
        if (duplicated) { duplicated = 0; continue; } 
        else numWords++;
    }
    printf("%d words in the list:\n", numWords);
    for (int k = 0; k < numWords; k++)printf("%s ", word[k]);
    printf("\n");


    while (1){
        printf("Enter a word to search(Enter 'end' to quit): ");
        scanf("%s", wordSearch);
        if (!strcmp(wordSearch,"end")) break; 
        for (int j = 0; j < numWords; j++) {
            if (!strcmp(wordSearch, word[j])){
                printf("This word is in the list."); exist = 1;
                break; }
            if (!exist)
            printf("This word is not in the list\n");
            exist = 0;    
        }

    }

    return 0;
}
