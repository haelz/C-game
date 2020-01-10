#include <iostream>
#include <string.h>
#include "game.h"
#include "conio.h"
using namespace std;


int main()
{
    Game start;


    //begin:
    std::cout <<"============================================VIRTUAL FIGHTER============================================================"<<std::endl;
    std::cout <<"\nWelcome to the Iron fist tournament. If you can win from all the legandary fighters you will be the next iron fist king.";
    cout <<"Do you think you are experienced enough to fight?/n"<< endl;

    cout <<"Y/N"<<endl;
    cout <<"\n=======================================Press a button to continue ======================================================"<< endl;

   // getchar();
    //cout<<"argv=%c"<<*argv[1]<<&argv[2]<<endl;
    //for(int i;i<argc)
    //if((strcpy(argv[1],"Y"))||strcpy(argv[1],"y"))
    //{
      //  start.playgame();
    //}

    //else if((strcpy(argv[1],"N"))||strcpy(argv[1],"n"))
    //{
    //cout <<"TRAIN and come back later"<<endl;
    //cout <<"\n=======================================Press a button to end the game ======================================================"<< endl;
    //}

    //else
    //{
     //   cout <<"Error : you must press the right keys";
     //   cout <<"\n=======================================Press a button to continue ======================================================"<< endl;
       getch();
       system("cls");
     //   goto begin;
    //}


    start.playgame();
    return 0;
}

