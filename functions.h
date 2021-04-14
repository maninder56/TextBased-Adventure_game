#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include "Windows.h"        //  Library for sleep timer
#include <iomanip>          // Library for setw

using namespace std;




void disp(string get_disp, int slp){
    cout<<"\n----------------------------------------------------------------------"<<endl;   //70
    cout<<get_disp<<endl;
    cout<<"----------------------------------------------------------------------\n"<<endl;
    Sleep(slp);
    }

void traveller(string get_t, int slp){
    cout<<"Traveller: "<<get_t<<"\n"<<endl;
    Sleep(slp);
    }

void plr(string get_p, int slp){
    cout<<name<<": "<<get_p<<"\n"<<endl;
    Sleep(slp);
    }

void guild(string get_g, int slp){
    cout<<"Guild Employee: "<<get_g<<"\n"<<endl;
    Sleep(slp);
    }

void fight_beg(){
    cout<<setw(126);
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<setw(91);
    cout<<"FIGHT BEGINS !!"<<endl;
    cout<<setw(126);
    cout<<"----------------------------------------------------------------------"<<endl;
    Sleep(3000);
}

void victory(){
    cout<<setw(126);
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<setw(91);
    cout<<"YOU WON!!"<<endl;
    cout<<setw(126);
    cout<<"----------------------------------------------------------------------"<<endl;
}

#endif