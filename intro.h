#ifndef INTRO_H
#define INTRO_H

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

namespace std {


void intro(int argc, char *argv[]) {
d
    int choose_player;
    cout << "\t\tWelcome"<< endl;
    cout << "\n\t\tWould you like to create a new person," << "\n\t\tor choose an exsisting player? ";

    cout << "\n\n\\t1: New Person";
    cout << "\n\t\t2: Existing Player";

        cout << "\n\n\t\tI would like: ";
        cin >> choose_player;

        for(int a=0;a>0;)
    {
        if (choose_player >0  && choose_player <3)
        {
            switch(choose_player)
            {
            case 1:
               // create_person();
            break;

            default:
                //existing_player();
            break;
            }

        }

        else
        {
         cout <<"Error : Try again"<<endl;
        cout <<"press a key to continue"<<endl;
       int getch();

        }
   }



    return;
}}

#endif // INTRO_H
