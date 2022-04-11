//documentation section 
/* Exercise 2 - Traverse Operations */

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section 
int main(){
    //write here your program
    int LA[] = {1, 4, 5, 7, 10, 12, 13, 17, 18, 20};
    int n = 10;
    int i;

    for(i = 0; i < n; i++){
        if(LA[i]%2 == 0){
            printf("LA[%d] = %d \n", i, LA[i]);
        }
        
        
    }


    return 0;
}


//user-defined section 
