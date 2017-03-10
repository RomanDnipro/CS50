#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

// int main(int argc, string argv[]){
    
//     /**
//      * Создаём английские алфавиты
//      * для строчных и заглавных букв
//      **/
//     int a = 97; //порядковый номер строчной буквы a в ASCII
//     int A = 65; //порядковый номер заглавной буквы A в ASCII
//     int n = 26; //количество букв в английском алфавите
//     char az [n]; //создаём массив для строчных букв
//     char AZ [n]; //создаём массив для заглавных букв
//     for(int i = 0; i < n; i++){
//         az[i] = a + i;
//         AZ[i] = A + i;
//     }

//     /**
//      * Проверка количества аргументов командной строки
//      * (должен быть один обязательный аргумент(имя файла) + 
//      * аргумент-ключ)
//      * и является ли вводимый ключ целым числом !=0
//      **/
//     if(argc != 2){
//         printf("print the key next time \n");
//         return 1;
//     }
//     int k = atoi(argv[1]);
//     if(k==0){
//         printf("print the key next time \n");
//         return 1;
//     }
    
//     string p = get_string();
    
//     for(int i = 0; i < strlen(p); i++){
//         char symbol = p[i];
//         if(isalpha(symbol)){
//             if(islower(symbol)){
//                 printf("%c", az[((symbol - a) + k) % 26]);
//             }else{
//                 printf("%c", AZ[((symbol - A) + k) % 26]);
//             }
//         }else{
//             printf("%c", symbol);
//         }
//     }
//     printf("\n");
//     return 0;
// }

int main(int argc, string argv[]){
    /**
     * Проверка количества аргументов командной строки
     * (должен быть один обязательный аргумент(имя файла) + 
     * аргумент-ключ)
     * и является ли вводимый ключ целым числом !=0
     */
    if(argc != 2){
        printf("print the key next time \n");
        return 1;
    }
    int k = atoi(argv[1]) % 26;
    if(k==0){
        printf("print the key next time \n");
        return 1;
    }
    
    string p = get_string();
    
    for(int i = 0; i < strlen(p); i++){
        
        if(isalpha(p[i])){
            
            if(isupper(p[i])){
                p[i] = ((p[i] - 65 + k) % 26) + 65;
            }else{
                p[i] = ((p[i] - 97 + k) % 26) + 97;
            }
        }

        printf("%c", p[i]);
        
    }
    printf("\n");
    return 0;
    
}


// if(isalpha()){
//     if(isupper()){
//         //самое сложное ;)
//     }eelse{
        
//  }