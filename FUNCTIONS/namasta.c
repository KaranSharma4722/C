#include<stdio.h>
void namasta(){
    printf("Namasta");
}

void bonjour(){
    printf("Bonjour");
}
int main(){
    char ch;
    printf("Enter i if you are Indian and f if you are french:");
    scanf("%c",&ch);
    if (ch== 'i' ||ch== 'I'){
        namasta();
    }
    else{
        bonjour();
    }
    return 0;
}