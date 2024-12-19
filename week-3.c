/*
#include <stdio.h>

int main(){
    int x = 2;
    if(x = 2){

        printf("True");
    }else{

        printf("False");
    }

}


#include <stdio.h>

int factorial(int number);


int main(){

    int factorial_5 = factorial(0); 
    printf("Factorial %d",factorial_5);   



    return 0;
} 


int factorial(int number){
    if(number < 0){
        return 0;
    }
    if (number ==0){
        return 1;
    }
    int result = 1;
    for(int i = 1;i <=number;i++){
        result = result * i;

    }
    return result;
}
*/
#include <stdio.h>

int factorial(int number);
int recurs(int number);
int fibo(int number);
int while_fibo(int number);

int main(){ 

    int fact_while = factorial(5);
    int recurs_fact = recurs(6);
    int fibo_wh = while_fibo(7);
    printf("Fibonacci = %d",fibo_wh);


    return 0;
}

int factorial(int number){
    if (number < 0){
        return 0;
    }
    if (number == 0){
        return 1;
    }
    int result = 1;
    while (number > 0 ){
        result = result * number;
        number--;
    }
    return result;
}   


/*
int fact(int num){
if(number ==1){
return 1;
}
return num* fact(num-1);
}                          5*4*3*2*1 burda  çarpımları biriktirip en sonda base case e ulaşınca base case ile çarptı

 */

int recurs(int number){
    //base case
    if (number == 1 || number ==0){
        return 1;
    } 
    return number * recurs(number-1);

}

int fibo(int number){
    int first = 1;
    int second =1;
    int result = 0;
    if(number ==1 || number ==2){
        return 1;
    }
    for(int i = 1; i <= number;i++ ){
        
        result = first + second ;
        first = second ;
        second  = first ;

    }
    return result; 
}

int while_fibo(int number){
    if(number ==1 || number ==2){
        return 1;
    }
    int result = 0;
    int first = 1;
    int second = 1;
    while (number >= 3){

        result = first + second ;
        first = second;
        second = first;
        number--;
    }
    return result;
}

int fibonacci_recursive(int num){
    if (num == 1 || num ==2 ){
        return 1;
    }
    return fibonacci_recursive(num-1) + fibonacci_recursive(num-2);

}