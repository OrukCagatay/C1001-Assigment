/*
#include <stdio.h> 

 int main(){

int i;
for(i=0;i<101;i++){
printf("%d\n",i);

}



return 0;

}

#include <stdio.h> 

int main(){

    int i;
    for(i=0;i<100;i++){
        if(i%2!=0){
            printf("%d\n",i);

    }  
}


return 0;

}


#include <stdio.h>

int main(){
    int i;
    for(i=0; i<101; i++){ 
        if(i % 2 != 0){
            continue;

        }
        printf("%d\n",i);
    }


    return 0;
}


#include <stdio.h>

int main(){

    int i;
    for(i = 0;i < 101; i++){
        if (i % 2 != 0)
        {
            printf("%d\n",i);
        }
        
    }

    return 0;
}


#include <stdio.h>

int main(){

    int num;
    num = 0;
    while (num <= 100)
    {
        printf("%d\n",num);
        num +=2;
    }
    


    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main(){
    int num = 0;
    bool statement = true;
    while (statement){
        if (num % 2 == 0){
            printf("%d\n",num);
           
        }
        num +=1; 
        if (num == 101)
        {
            break;
        }
    }

    return 0;
}

#include <stdio.h>

int main(){
    int num = 0;
    printf("Number: %d\n", num);
    while (num <= 101)
    {
        if (num % 2 == 0)
        {
        printf("Number: %d\n", num);
        }
        num +=1;
    }


    return 0;
}

#include <stdio.h>

int main(){

    char students[5][16]={"Ahmet","Onur","Mehmet","Enes","Oguz"};
    int i;
    for(i = 0;i < 5;i++)
    {
        if (students[i] == "Mehmet")
        {
            printf("%s : 100\n",students[i]);
        }
        else
        {
            printf("%s : 50\n",students[i]);
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
   
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int z = 1; z <= 3; z++) {
                
                printf("(%d, %d, %d) ", i, j, z);

            }
        }

        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(){
    int i,j;
    int mult;
    for(i = 1;i < 6;i++){
        for(j = 1;j < 6;j++){
            mult = i * j;
            printf("%d x %d = %d\t",i,j,mult);

        }
        printf("\n");

    }


    return 0;
}
*/
#include <stdio.h>

int main(){
    
    int hp_input;

    printf("Enter the car's Hp: ");
    scanf("%d", &hp_input);

    if (hp_input < 60) {
        printf("%d Hp car is not exist in gallery.\n", hp_input);
    } 
    else if (hp_input <= 60) {
        printf("The value of the car is 200.000\n");
    } 
    else if (hp_input <= 75) {
        printf("The value of the car is 350.000\n");
    } 
    else if (hp_input <= 90) {
        printf("The value of the car is 500.000\n");
    } 
    else if (hp_input <= 110) {
        printf("The value of the car is 700.000\n");
    } 
    else if (hp_input <= 150) {
        printf("The value of the car is 1.200.000\n");
    } 
    else {
        printf("The value of the car is 2.000.000\n");
    }

    return 0;
}
