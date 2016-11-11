//
//  Citizen.hpp
//  Exam-2
//
//  Created by Daniel Portillo on 11/10/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Citizen_hpp
#define Citizen_hpp

#include <stdio.h>
#include <string>
using namespace std;


class City;

class Citizen
{
private:
    int id;
    string firstName;
    string lastName;
    string favColor;
    
public:
    //default citizen
    Citizen();
    //Creates a new Citizen object with the passed in
    //id, name, and favorite color
    //Once a citizen is created, you can't change their id or name
    //but you can change their favorite color
    Citizen(int iD, string first, string last, string color);
    //Creates a new Citizen object by copying data from the
    //passed in citizen
    Citizen(Citizen* citizen);
    //Returns the first name of this citizen
    string getFirstName();
    //Returns the last name of this citizen
    string getLastName();
    //Returns the id for this citizen
    int getId();
    //Returns the favorite color for this citizen
    string getFavoriteColor();
    //Sets the favorite color for this citizen
    void setFavoriteColor(string color);
};


#endif /* Citizen_hpp */
