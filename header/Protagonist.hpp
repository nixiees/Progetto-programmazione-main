#include "Character.hpp"

#define HP 100
class Protagonist : public Character
{
public:
    // constructor
    Protagonist();

    // constructor
    Protagonist(char name[], int current_life, int max_life, int atk_damage, int x, int y, chtype tag);

    // aumenta la vita in base agli artefatti
    void increaseLife(int);

    // aumenta il tipo di danno in attacco in base al potere ricevuto
    void adjurn_atk_damage(int);

}; 