//
//  main.cpp
//  prog2
//
//  Created by Mohamed Daffaallah on 2/20/20.
//  Copyright © 2020 Mohamed Daffaallah. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int choice, walls, length,height, price;
float area,totalarea, cans, totalcans, preprice, totalprice,finalcans,precans;

void main_menu(){
    cout << "Welcome to paint shop" << endl;
    cout << "We have a couple options that you can choose from:" << endl;
    cout << "1- Paint the interior of a house" << endl;
    cout << "2- Paint the exterior of a house" << endl;
    cout << "3- Paint both interior and exterior of a house" << endl;
    cout << "What option fits you more ?" << endl;
    cin >> choice;
    
}
void interior(){
    cout << "Now, how many walls do you want to paint" << endl;
    cin >> walls;
   for (int i=1; i<=walls; i++){
       cout << "what is the length and height for wall" << i << ":" <<endl;
       cout <<"Length = ";
       cin >> length;
       cout << "Height = ";
       cin >> height;
       area = length*height;
       totalarea+=area;
    }
    cans = totalarea/400;
    totalcans = ceil(cans);
    price = totalcans*100;
    cout << "As each can cover 400 feet" << endl;
    cout << "with area = " << totalarea << " square feet, you will need to  get " << cans <<" cans \nSo in total we need " << totalcans << " can(s)"<< endl;
    cout << "Now lets calculate the cost to paint the interior of the house\nThe price of the can is $100" << endl;
    cout << "The total cost is $" << price << endl;
}
void exterior(){
    cout << "Now, how many walls do you want to paint" << endl;
     cin >> walls;
    for (int i=1; i<=walls; i++){
        cout << "what is the length and height for wall" << i << ":" <<endl;
        cout <<"Length = ";
        cin >> length;
        cout << "Height = ";
        cin >> height;
        area = length*height;
        totalarea+=area;
    }
       cans = totalarea/400;
       totalcans = ceil(cans);
       price = totalcans*150;
       cout << "As each can cover 400 feet" << endl;
       cout << "with area = " << totalarea << " square feet, you will need to  get " << cans <<"cans \nSo in total we need " << totalcans << " can(s)"<< endl;
       cout << "Now lets calculate the cost to paint the interior of the house\nThe price of the can is $150" << endl;
    cout << "The total cost is $" << price << endl;
}
void both(){
    cout << "Lets start with the interior\n";
    interior();
    preprice = price;
    precans = totalcans;
    cout << "Now, lets continue to the Exterior\n";
    exterior();
    totalprice = price + preprice;
    finalcans = totalcans+precans;
    cout << "The FINAL Amount of CANS for both the Interior and Exterior is " << finalcans << " cans! \n";
    cout << "The FINAL PRICE for both the Interior and Exterior is $" << totalprice << endl;
    cout << "Enjoy your newly painted house and rest of your day!\n";
}





    int main(){
    main_menu();
        while (true){
    if (choice == 1){
        interior();
        return(0);
    }
    if (choice ==2){
        exterior();
        return(0);
    }
    if (choice ==3){
        both();
        return(0);
    }
    else{
        cout << "Please input a valid number\n";
        cin >> choice;
        }
        }
    }
