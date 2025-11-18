#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int milk = 3;
    int healthPotion = 3;
    string option;
    bool RespawnMenu = true;
    do
    {
        while (milk > 2 || healthPotion > 2)
        {
            cout << "Input a number of milk buckets to cure poison 1-2 and a number of health potions to heal 1-2 or die of wither effect: ";
            cin >> milk;
            cout << endl;
            cin >> healthPotion;
            cout << endl << "milk buckets " << milk << ", health potions " << healthPotion << endl;
            if (milk > 2 || healthPotion > 2) 
            {
                cout << "Not enough ingredients" << endl;
            }
            else if (milk > 0 || healthPotion > 0)
            {
                RespawnMenu = false;
                cout << "You have cured Wither affect and healed yourself" << endl;
            }
        }
        while (RespawnMenu == true)
        {
            if (milk <= 0 && healthPotion <= 0)
            {
                cout << endl;
                cout << setw(2) << "You died of Wither effect " << endl;
                cout << setw(15) << "RESPAWN" << endl;
                cout << setw(17) << "EXIT GAME" << endl;
                cin.ignore();
                getline(cin, option);
            }
            if (option == "RESPAWN" || option == "respawn")
            {
                cout << "You have Respawned ";
                RespawnMenu = false;
            }
            else if (option == "EXIT GAME" || option == "exit game")
            {
                cout << "You have closed Minecraft ";
                RespawnMenu = false;
            }
            else
            {
                cout << setw(15) << "Invalid Option: Choose one of the two";
            }
        }
    } 
    while (RespawnMenu);
    



    return 0;
}