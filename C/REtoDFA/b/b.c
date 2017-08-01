#include<stdio.h>
int main()
{
    char ch;
    int state=0;
    printf("Enter you string : ");

    while(1)
    {
        ch=getchar();
        if(ch == '$')
        {
            break;
        }
        switch(state)
        {
            case 0:if(isdigit(ch)) state = 1; else break;
            case 1:if(isdigit(ch)) state = 1; else if (ch == '.') state=2; break;
            case 2:if(isdigit(ch)) state = 1; else break;

        }
        printf("ch: %c, next state: %i",ch, state);
        if (state == 1)
        printf(" Terminal");
        printf("\n");
    }
    if (state == 1) printf("Accept\n");
    else printf("Reject\n");
    return 0;
}
