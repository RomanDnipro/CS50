#include<stdio.h>
#include<cs50.h>
#include<string.h>

void check_register_and_print(); 

int main(){
    string s = get_string();
    /**
     * первый символ строки, по условию,
     * является первой буквой имени
     */
    check_register_and_print(s, 0);
    for(int i = 1; i < strlen(s); i++){
        if(s[i] == 32){ //является ли символ пробелом
            check_register_and_print(s, i+1); //если да,
        }//то следующий символ- первая буква имени(фамилии)
    }
    printf("\n");
}

/**
 * функция проверки буквы на регистр(верхний/нижний)
 * и печать варианта в верхнем регистре
 * принимает строку, и порядковый номер буквы в ней
 **/
void check_register_and_print(string s, int i){
    if(s[i]>91){
        printf("%c", (s[i]) - 32);
    }else{
        printf("%c", s[i]);
    }
}





// int main(int argc, string argv[]){
//     for(int i=1; i<argc; i++){
//         if((int)argv[i][0]>91){
//             printf("%c", ((int)argv[i][0]) - 32);
//         }else{
//             printf("%c", argv[i][0]);
//         }
//     }
//     printf("\n");
// }




//     string s = GetString();
//     string s0 = argv[0];
//     string s1 = argv[1];
//     string s2 = argv[argc];
//     string s3 = argv[3];
    
//     printf("%s\n",s);
//     printf("%s\n",s0);
//     printf("%s\n",s1);
//     printf("%s\n",s2);
//     printf("%s\n",s3);

// }