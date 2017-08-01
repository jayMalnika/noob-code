#include<stdio.h>

//converting a RE to DFA
/*
    a) a(a|b)*ab
    b) digit = x;
       x(x)*(.x(x)*|e)
*/

int main(){
    char ch;       //character to be processes
    int state = 0;      //all the possible states, initial state = 0

    printf("Enter string: ");
    while(1){
        ch = getchar();
        if(ch == '$')
            break;

        switch(state){
        case 0:
            if(ch == 'b'){
                printf("Invalid start! String should start with a!\n");
            }
            if(ch=='a'){
                state = 1;
                break;
            }
        case 1:
            if(ch == 'b'){
                state = 1;
            }else if(ch == 'a'){
                state = 2;
                break;
            }
        case 2:
            if(ch == 'a'){
                state = 2;
            }else if(ch == 'b'){
                state = 3;
                break;
            }
        case 3:
            if(ch == 'a'){
                state = 2;
            }else if(ch =='b'){
                state = 1;
                break;
            }

        }

        printf("ch: %c, next state: %i", ch, state);
        if(state == 3){
            printf("Terminal");
        }
        printf("\n");
    }
    if(state == 3)
        printf("Accept\n");
    else{
        printf("Reject\n");
    }

}
