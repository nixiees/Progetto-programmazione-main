#include "header/Protagonist.hpp"

// constructor
Protagonist::Protagonist(char name[], int current_life, int max_life, int atk_damage, int y, int x, chtype tag) : Character(name, current_life, max_life, atk_damage, y, x, tag)
{
    this->max_life = HP;
    this->tag = '@';
    name = "Veschetti";
    this->atk_damage = 10; // in attacco di base toglie un cuore al nemico
}

// aumenta la vita in base agli artefatti
void Protagonist::increaseLife(int healing)
{
    int curr_life = getLife();
    if (curr_life + healing <= this->max_life)
    {
        this->current_life = (curr_life + healing);
    }
    else
    {
        this->current_life = this->max_life;
    }
}

// aggiorna il tipo di danno in attacco in base al potere ricevuto
void Protagonist::adjurn_atk_damage(int p) // p sta per punti in piu in attacco dati dal potere ricevuto
{
    this->atk_damage += p;
}

