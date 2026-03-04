#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    int i, sum = 0;

    printf("Enter input: ");
    gets(str);

    for(i = 0; i < strlen(str); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            sum += str[i] - '0';
        }
    }

    printf("Sum of digit char: %d\n",sum);

    return 0;
}
