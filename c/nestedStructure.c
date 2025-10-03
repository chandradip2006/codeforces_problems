#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int speed;
        float attack;
        char type[100];
    }pokemon;
    typedef struct legendaryPokemon{   // nested structure
        pokemon p1;
        char ability[100];
    }legendaryPokemon;
    pokemon pikachu = {100 , 80 , "electric"};
    pokemon charizard = {80 , 120 , "fire"};
    legendaryPokemon mewTwo;
    mewTwo.p1.attack = 130;
    mewTwo.p1.speed = 150;
    strcpy(mewTwo.p1.type , "psychic");
    strcpy(mewTwo.ability , "pressure");
    printf("%f\n" , mewTwo.p1.attack);
    printf("%d\n" , mewTwo.p1.speed);
    printf("%s\n" , mewTwo.ability);

    return 0;
}