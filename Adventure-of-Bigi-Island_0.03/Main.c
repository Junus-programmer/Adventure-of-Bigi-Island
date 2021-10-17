// by Junus Safsouf 9/17/21 ©️
#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main() {
    int score = 0;
    int health = 50;
    int level = 1;
    printf("WELCOME TO THE ADVENTURE OF BIGI ISLAND PLAYER");
    printf("\nchoose a thing to take a long");
    printf("\na:sword b:axe\n");

    char weapon1 = getchar();

    if(weapon1 == 'a'){
        printf("\nyou choosed sword");
    }
    else if(weapon1 == 'b'){
        printf("\nyou choosed axe");
    }
    score += 1;

    printf("\nNOW ARE YOU READY FOR THE ADVENTURE");
    printf("\n###################################");
    sleep(3);
    printf("\n-VILLIGER-");
    printf("\nYou must help us.\nThe bad king suppress us.");
    printf("\nHe steeled our meal and our animals and our childrens.");
    printf("\nHe's in the big castle on top of the mountain.");
    sleep(3);
    printf("\nCHAPTER ONE THE ANIMAL THIEF");
    sleep(3);

    printf("\n-YOU-");
    printf("\nFirst I search for the animals");
    printf("\n                               ");
    sleep(8);
    printf("\nA guard saw you fight him!");
    printf("\n-FIGHT-\nGuard Level 1, health:20");
    sleep(3);
    if(weapon1 == 'a'){
        printf("\nYou hitted him with the sword.");
        printf("\nYou maked 10 damage +5 score");
        score += 5;
    }
    else if(weapon1 == 'b'){
        printf("\nYou hitted him with the axe.");
        printf("\nYou maked 10 damage +5 score");
        score += 5;
    }
    sleep(3);
    printf("\nThe guard hitted you -10 health");
    health -= 10;
    
    if(weapon1 == 'a'){
        printf("\nYou killed him with the sword.");
        printf("\nYou killed him +10 score");
        score += 10;
    }
    else if(weapon1 == 'b'){
        printf("\nYou killed him with the axe.");
        printf("\nYou killed him +10 score");
        score += 10;
    }
    sleep(3);
    printf("\n##################################################");
    printf("\nWow you killed him good work +1 level");
    printf("\nYou got more health and more power to make damage");
    level += 1;
    health += 60;
    printf("\nLets Go and search forther!\n");
    sleep(3);

    printf("you see and an animal house.");
    printf("\nyou went in you see all the animals");
    
    printf("\nWOW YOU FOUND THE ANIMALS YOU PASSED CHAPTER ONE");
    sleep(5);

    printf("\nCHAPTER TWO THE STELLED MEAL");
    sleep(5);

    printf("\n-YOU-");
    printf("\nNow i search the meal");
    sleep(3);
    printf("\n####################################################");
    printf("\nYou see a guard");
    printf("\na: kidnepp him and ask him b:fight him");
    sleep(3);
    char kidnepp = getchar();
    if(kidnepp == 'a'){
        printf("\nYou kidneppt him and he tellt you where the meal is");
    }
    else if(kidnepp == 'b'){
        printf("\nYou choosed fight the guard he surrendered");
        printf("\nhe tellt you where the meal is");
    }//100 lines Celebration!!!! 😀🤩🎸
    sleep(3);

    printf("\nYou went to the place and Found the meal");
    printf("\nYOU PASSED CHAPTER TWO");
    sleep(3);
    printf("\n#######################################################");


    return 0;
}