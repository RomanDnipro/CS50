#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[]){
    /**
     * Проверка количества аргументов командной строки
     * (должен быть один обязательный аргумент(имя файла) + 
     * аргумент-ключ),
     * и является ли каждый символ аргумента(ключа) буквой
     **/
    if(argc != 2){
        printf("print the key next time \n");
        return 1;
    }
    for(int i = 0; i < strlen(argv[1]); i++){
        if(! isalpha(argv[1][i])){
            printf("print the key next time \n");
            return 1;
        }
    }
    
    /**
     * заносим ключ в переменную k,
     * принимаем строку для шифровки в p
     **/
    string k = argv[1];
    string p = get_string();
    
    /**
     * Создаём английские алфавиты
     * для строчных и заглавных букв
     **/
    int a = 97; //порядковый номер строчной буквы a в ASCII
    int A = 65; //порядковый номер заглавной буквы A в ASCII
    int n = 26; //количество букв в английском алфавите
    char az [n]; //создаём массив для строчных букв
    char AZ [n]; //создаём массив для заглавных букв
    for(int i = 0; i < n; i++){
        az[i] = a + i;
        AZ[i] = A + i;
    }
    
    /**
     * Приводим полученный ключ
     * к одному регистру(например, к нижнему)
     **/
    for(int i=0; i<strlen(k); i++){
        if(isupper(k[i])){
            k[i]=k[i]+32;
        }
    }
    
    /**
     * КОДИРУЕМ И ВЫВОДИМ ЗАШИФРОВАННУЮ СТРОКУ:
     * Проверяем, является ли текущей символ буквой
     *      если да, выводим её, учитывая регистр;
     *      накручмваем счётчик(j), которым ходим по ключу;
     * Если буквой не является- просто выводим символ;
     **/
    for(int i = 0, j = 0; i < strlen(p); i++){
        if(isalpha(p[i])){
                if(islower(p[i])){
                    printf("%c", az[ (p[i]-a + k[j%strlen(k)]-a) % 26]);
                }else{
                    printf("%c", AZ[ (p[i]-A + k[j%strlen(k)]-a) % 26]);
                }
        j++;
        }else{
            printf("%c", p[i]);
        }
    }
    
        printf("\n");
        return 0;
}


    // char k_arr[strlen(p)];
    // for(int i = 0, j = 0; i < strlen(p); i++){
    //     if(isalpha(p[i])){
    //         if(islower(p[i])){
    //             k_arr[i] = k[j % (strlen(k))];
    //         }else{
    //             k_arr[i] = k[j % (strlen(k))] + 32;
    //         }
    //         j++;
    //     }else{
    //         k_arr[i] = 32;
    //     }
    // }
    
    // for(int i = 0; i < strlen(p); i++){
    //     if(isalpha(p[i])){
    //         if(islower(p[i])){
    //             printf("%c", az[((p[i] + k_arr[i]) - (2*a)) % 26]);
    //         }else{
    //             printf("%c", AZ[((p[i] + k_arr[i]) - (a+A)) % 26]);
    //         }
    //     }else{
    //         printf("%c", p[i]);
    //     }
    // }
    
    // printf("\n");
    // for(int i = 0; i < strlen(p); i++){
    //     printf("%c", k_arr[i]);
    // }
    
    
    // for(int i = 0, j = 0, counter = 0; i < strlen(p); i++, counter++){
    //     if(isalpha(p[i])){
    //         j = counter % strlen(k);
    //         if(islower(p[i])){
    //             printf("%c", az[((p[i] + k[j]) - a) % 26]);
    //         }else{
    //             printf("%c", AZ[((p[i] + k[j]) - A) % 26]);
    //         }
    //     }else{
    //         printf("%c", p[i]);
    //         counter--;
    //     }
    // }
    
    
