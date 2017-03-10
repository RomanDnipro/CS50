#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]){

    if (argc != 2 ){
        return 1;
    }
        
    int key = atoi(argv[1]) % 26;
    
    if (key < 1){
        return 1;
    }
    string name = get_string();
    
    for (int i = 0, n = strlen(name); i < n; i++){
            
        if(isalpha(name[i]) && isupper(name[i])){
          
            name[i] = (name[i] + key);
           
            if (name[i] > 'Z'){
                name[i] = name[i] - 26; 
            }
        }
            
            if (isalpha(name[i])  && islower(name[i]) ){
                name[i] = name[i] + key;
            }

                if (name[i] > 'z'){
                    name[i] = name[i] - 26;
                }
             
            printf("%c", name[i]);
            
    }
    printf("\n");
               
}