#include <iostream>
#include <cstdlib>

using namespace std;

void goblinBattle();
int showEnemyHp(int enemyhp, int attack);
int showHp(int hp, int enemyattack);

int main()
{
    int battle;
    cout << "\nYou see a goblin in the distance. Attack goblin?\n Yes = 1\n No = 2\n";
    cin >> battle;
    if(battle==1)
    {
        goblinBattle();
    }
    else if(battle==2)
    {
        cout << "You chose to not attack the goblin.\n";
    }
    else
    {
        cout << "That is not a valid choice.\n\n";
        return main();
    }

system("pause");
}

void goblinBattle()
{
  int hp = 25, enemyhp = 15, attack = 5, enemyattack = 5;
  int hitGoblin;

   do
   {
    cout << "\nHit goblin?\n Yes = 1\n No = 2\n";
    cin >> hitGoblin;
    if (hitGoblin == 1)
    {
    enemyhp = showEnemyHp(enemyhp, attack);
    hp = showHp(hp, enemyattack);
    cout << "\nYou hit the goblin.\n";
    cout << "The goblin now has " << enemyhp << "HP left.\n\n";
     if(enemyhp <= 0)
     {
        cout << "You won!\n";
     }
     else if(enemyhp > 0)
     {
       cout << "The goblin hit you back.\n";
       cout << "You now have " << hp << "HP left.\n\n";
     }
    }
    else if(hitGoblin == 2)
    {
        cout << "You chose not to hit the goblin so he hit you instead\n";
        cout << "You now have " << showHp(hp, enemyattack) << "HP left.\n\n";
    }
    else
    {
        cout << "That is not a valid choice.\n\n";
        return goblinBattle();
    }

   }while(hp > 0 && enemyhp > 0);
}

int showEnemyHp(int enemyhp, int attack)
{
    enemyhp = enemyhp - attack;
    return enemyhp;
}
int showHp(int hp, int enemyattack)
{
    hp = hp - enemyattack;
    return hp;
}
