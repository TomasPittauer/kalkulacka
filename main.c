#include <stdio.h>

int main(){

    char akce;
    float jedna;
    float dva;

    printf("Napis prvni cislo \n");
    scanf("%f", &jedna);

    printf("Napis akci (+,-,*,/) \n ");
    scanf(" %c", &akce);


    printf("Napis druhe cislo \n");
    scanf("%f", &dva);


    switch (akce) {

        case '+': printf("%.2f", jedna + dva);
        break;
        case '-': printf("%.2f", jedna - dva);
            break;
        case '*': printf("%.2f", jedna * dva);
            break;
        case '/': if (dva == 0){
                fprintf(stderr, "Nesmis delit nulou");
                return -1;
        } else{
            printf("%.2f", jedna / dva);
        }

           break;
        default:
            fprintf(stderr, "chyba");
            return -1;
    }

}