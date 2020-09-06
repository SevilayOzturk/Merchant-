#include "antique.h"
#include "merchant.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

float budget = 0;

int main() {
    Antique objects[10];
    int quantity[10];
    int i =0;
    
    string filename;
    cin>> filename;
    
    ifstream ifs(filename);
    if (ifs.is_open()){
        while(!ifs.eof()){
            string name;
            char comma;
            float price;
            int amount;
            string line;
            getline(ifs, name, ',');
            ifs>> price >> comma >> amount ;
            getline(ifs, line);
            quantity[i]=amount;
                objects[i].setName(name);
                objects[i].setPrice(price);
            
            i++;
        
        }
    }
    else{
       cout << "Error! File not found." << endl;
        
    }
    Merchant m(objects , quantity);
    cout<<fixed;
    cout<<setprecision(2);
    float budget;
    cout<< "Enter in budget: $";
    cin >> budget;
    bool counter = false;
    ofstream outputfile("log2.txt", ios::out | ios::trunc);
    outputfile.close();
    int choice;
    
    do{
    
        cout<<"Make a selection: " <<endl;
        cout << "1 - Haggle" <<endl;
        cout << "2 - View menu" << endl;
        cout<< "3 - Select an antique" <<endl;
        cout<< "4 - Leave" << endl<<endl;
        cin>> choice;
        switch (choice) {
            case 1:
                if(counter== true){
                    cout<<"Sorry, you have already haggled."<<endl;
                }
                else{
                    m.haggle();
                    counter = true;
                }
                break;
            case 2:
                m.printMenu();
                break;
            case 3:
                m.selectAntique(budget);
                break;
            case 4:
                m.leave(budget);
                break;
            default:
                cout<<"Invalid selection."<<endl;
        }
        cout<< endl;
    }
    while(choice != 4);
    
    
    
    return 0;
}
//Make a selection:
//1 - Haggle
//2 - View menu
//3 - Select an antique
//4 - Leave
