#include <stdio.h>
#include <string.h>

int main(){
    char str[200], remove[50];
    int i, j, k;
    int count[50] = {0};

    printf("Enter string: ");
    gets(str);

    printf("Enter characters to remove: ");
    gets(remove);

    for(i = 0; i < strlen(remove); i++){
        for(j = 0; j < strlen(str); j++){
            if(str[j] == remove[i]){
                for(k = j; k < strlen(str); k++){
                    str[k] = str[k+1];
                }
                j--;
                count[i]++;
            }
        }
    }

    printf("Result string: %s\n", str);

    for(i = 0; i < strlen(remove); i++){
        if(count[i] > 0)
            printf("Character '%c' removed %d time(s)\n", remove[i], count[i]);
        else
            printf("Character '%c' not found\n", remove[i]);
    }

    return 0;
}
