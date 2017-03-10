#include <stdio.h>
#include <cs50.h>

int main(){
    printf("minutes: ");
    int m = GetInt();
    int b = m*12;
    printf("bottles: %i\n",b);
    return 0;
}