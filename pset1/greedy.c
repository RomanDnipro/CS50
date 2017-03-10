#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(){
  float m;    //требуемая сдача в $
    do{         //запрос пользователя суммы сдачи
        
        printf("O hai! How much change is owed?\n");
        m = GetFloat();
    }while(m<0.009999);
    
    int n = roundf(m*100); //приведение сдачи к intовому значению($ к ¢)
    int c25 = n/25;
    int c10 = (n - c25 * 25)/10;
    int c5 = (n - c25*25 - c10*10)/5;
    int c1 = (n - c25*25 - c10*10 - c5*5);
    int c = c25 + c10 + c5 + c1;      //минимальное количество монет для выдачи сдачи
    
    printf("%i\n",c);  
}


// #include <stdio.h>
// #include <cs50.h>
// int main(){
//     char c = \0;
//     int i = (int) c;
//     printf("%i\n",i);
// }