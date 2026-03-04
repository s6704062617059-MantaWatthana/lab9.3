#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i;
    int a=0,e=0,i_v=0,o=0,u=0;

    printf("Enter string: ");
    gets(str);

    for(i = 0; i < strlen(str); i++){
        if(str[i]=='a' || str[i]=='A') a++;
        if(str[i]=='e' || str[i]=='E') e++;
        if(str[i]=='i' || str[i]=='I') i_v++;
        if(str[i]=='o' || str[i]=='O') o++;
        if(str[i]=='u' || str[i]=='U') u++;
    }

    printf("a: %d\n",a);
    printf("e: %d\n",e);
    printf("i: %d\n",i_v);
    printf("o: %d\n",o);
    printf("u: %d\n",u);

    return 0;
}
