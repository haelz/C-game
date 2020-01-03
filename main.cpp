#include <iostream>
#include "karakters.h"
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string name;

   if(argv[1] != nullptr){name = argv[1];}
//    else{ name = argv[1];}

    cout << "---------------------------------Virtual fighter 1-----------------------------------" << endl;
    cout << "\nIn escape from Red Vault 51, You control the storyline by choosing what actions you take. " << endl;
    cout << "The game displays the story and gives you options to wether fight, loot, gamble, hide, run.." << endl;
    cout << "It is up to you if you want to be a warrior or to be stealthy to surive. Your actions depend" << endl;
    cout <<  "on saving humankind" << endl;
    cout << "\n----------------------I acknowledge---------------------" << endl;
     int getch();
    if(argv[1] == nullptr){
    cout << "\nWhat is your name?" << endl;
    getline(cin, name);
    }
    else{ name = argv[1];}
    system("cls");
    cout << "In the year 4928 civilazation had to hide from disatrous nature events. Bunkers were prepared" << endl;
    cout << "for this and so they have high-tech infrastructres to survive for a long time."<< endl;
             cout <<"When the nuclear reactors exploded, a dark age begun.. "<< endl;
             cout <<"Years passed by and you, " << name << ", were born. You being an inquisitive child, " <<endl;
             cout <<"you know these bunker levels inside out. When you and your friend 'Garnov' were " <<endl;
             cout << "training to be a guard, you both hear rumors that the bunkers arent safe anymore.."<< endl;
   cout << "\n----------------------Press any key to start the story---------------------" << endl;
    int getch();

    return(0);
}
