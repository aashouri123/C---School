//Abdullah Ashouri
//Project 1
//02/27/2024

#include <stdio.h>

int main(){
    printf("\nAbdullah Ashouri - Project 1 \n");
    int numOf100s;
    int numOf20s;
    int numOf10s;
    int numOf5s;
    int numOf1s;

    int numOfQuarters;
    int numOfDimes;
    int numOfNickles;
    int numOfPennies;

    int dollars;
    int coins;

    float EnteredAmount;
    
    printf("\nEnter an Amount: ");
    scanf("%f",&EnteredAmount);

    printf("\nEntered Amount: %.2f \n", EnteredAmount);

    coins = (int)(EnteredAmount * 100) % 100;
    dollars = (int)EnteredAmount;

    numOf100s = dollars / 100;
    dollars %= 100;
    numOf20s = dollars / 20;
    dollars %= 20;
    numOf10s = dollars / 10;
    dollars %= 10;
    numOf5s = dollars / 5;
    dollars %= 5;
    numOf1s = dollars / 1;
    dollars %= 1;

    printf("Number of 100s: %d \n", numOf100s);
    printf("Number of 20s: %d \n", numOf20s);
    printf("Number of 10s: %d \n", numOf10s);
    printf("Number of 5s: %d \n", numOf5s);
    printf("Number of 1s: %d \n", numOf1s);


    printf("\nCoins: %d \n", coins);


    numOfQuarters = coins /25;
    coins %= 25;
    numOfDimes = coins /10;
    coins %= 10;
    numOfNickles = coins /05;
    coins %= 5;
    numOfPennies = coins /01;
    coins %= 1;

    printf("\nNumber of Quarters: %d \n", numOfQuarters);
    printf("Number of Dimes: %d \n", numOfDimes);
    printf("Number of Nickles: %d \n", numOfNickles);
    printf("Number of Pennies: %d \n", numOfPennies);
    
    printf("\nAbdullah Ashouri - Project 1 \n");



}