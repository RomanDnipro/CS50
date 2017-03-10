#include <stdio.h>
#include <cs50.h>

/*int n;
    void printStages(n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                printf(" ");
            }
            for(int j=0; j<i+2; j++){
                printf("#");
            }
            printf("\n");   
        }
    }
    
    void askHeight(){
        do{
            printf("Height: ");
            n = GetInt();
        }while(n<0 || n>23)
    }
*/
int main(){
    int n; //количество этажей
        do{ //запрос пользователя натурального числа до 23 включительно
            printf("Height: ");
            n = GetInt();
        }while(n<0 || n>23); 
            
        for(int i=0; i<n; i++){  //рисуем ступени
            for(int j=0; j<n-i-1; j++){
                printf(" ");
            }
            for(int j=0; j<i+2; j++){
                printf("#");
            }
            printf("\n");   
        } 
        
    return 0;
}
