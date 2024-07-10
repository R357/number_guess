#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    //Initialize Random number
    srand(time(0));
    //Generating Random number between 0 and 1 and 2
    int random_number=(rand()%3);
    int choice;

    //0 -->Snake
    //1 -->water
    //2 -->gun

    printf("enter your choice:");
    scanf("%d",&choice);
    printf("Computer Chose:%d",random_number);

    if(choice==0 && random_number==0){
        printf("\nIt's a draw");
    }
    else if(choice==1 && random_number==0){
        printf("\nYou lose");
    }
    else if(choice==2 && random_number==0){
        printf("\nYou Win");
    }
    else if(choice==1 && random_number==1){
        printf("\nIt's a draw");
    }
    else if(choice==0 && random_number==1){
        printf("\nYou Win");
    }
    else if(choice==2 && random_number==1){
        printf("\nYou lose");
    }
    else if(choice==0 && random_number==2){
        printf("\nYou lose");
    }else if(choice==1 && random_number==2){
        printf("\nYou Win");
    }else if(choice==2 && random_number==2){
        printf("\nIt's a draw");
    }else {
        printf("Something went wrong");
    }

    
    return 0;

}