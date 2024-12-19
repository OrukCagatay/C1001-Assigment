#include <stdio.h>

/* int main() {
    //int num1 = 10, num2 = 2 ;

    int num1 = 10;
    int num2 = 3 ;
    int sum = num1 +num2;
    int modulo = num1 % num2;

    printf("Sumation : %d, and Modulo is :%d\n",sum,modulo);
    printf("Adress int: %d \n", &sum);
    printf("Adress hex: %x \n", &sum); 
    
    
    return 0;
}
*/
int main() {
/*
    int num1 , num2;
    printf("Please give me number 1:");
    scanf("%d",&num1);
    printf("Please give me number 2:");
    scanf("%d",&num2);

    int sum = num1 + num2;
    int modulo = num1 % num2;
    printf("Sum: %d, and modulo: %d",sum,modulo);


    int a = 5;
    printf("a: %d\n",a);
    int b = a++;
    int c = ++a;

    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("c: %d\n",c);
   
    for(int myVar = 0;myVar <=10;myVar++) { 

    
    printf("MyVar is: %d\n",myVar);
    printf("MyVar is : %d\n", myVar);

    }

    int age ;
    printf("Please enter your age: ");
    scanf("%d",&age);

    if (age >= 18)
        printf("You are an adult.\n");
    else if (age < 16)
        printf("You cannot get moto DL.\n");
    else
        printf("You are a minor\n");
        */

    int myVar = 0;
    while (myVar < 13){
        if(myVar % 2 == 1){
        printf("Myvar : %d\n",myVar);

        myVar++;
    }else{
        break;
    }
    myVar++;
}
    printf("MyVar is : %d\n",myVar);
 
    return 0;
}
 

