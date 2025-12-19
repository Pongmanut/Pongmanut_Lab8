/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int age,height;
    double Bounty;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if(age<=25){
        cout << "Enter your height: ";
        cin >> height;
        if(height<100){
            character = "Chopper";
        }else if(height<180){
                character = "Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> Bounty;
            if(Bounty<=11000e5){
                character = "Sanji";
            }else{
                character = "Zoro";
                }
            }
        
    }
    else if(age<=60){
        cout << "Enter your bounty: ";
        cin >> Bounty;
        if(Bounty<=5000e5){
            character = "Franky";
        } else{
                character = "Jinbe";}
    }
    
    else{
        character ="Brook";
    }
    cout << "Your character = "<<character;
   }
