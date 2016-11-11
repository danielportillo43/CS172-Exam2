//
//  Citizen.cpp
//  Exam-2
//
//  Created by Daniel Portillo on 11/10/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "Citizen.hpp"

//default citizen
Citizen::Citizen()
{
    id = 007;
    firstName = "James";
    lastName = "Bond";
    favColor = "Black";
}

//Creates a new Citizen object with the passed in
//id, name, and favorite color
//Once a citizen is created, you can't change their id or name
//but you can change their favorite color
Citizen::Citizen(int iD, string first, string last, string color)
{
    id = iD;
    firstName = first;
    lastName = last;
    favColor = color;
}

//Creates a new Citizen object by copying data from the
//passed in citizen
Citizen::Citizen(Citizen* citizen)
{
    citizen = new Citizen(id, firstName, lastName, favColor);
    //This must be deleted after the call
}

//Returns the first name of this citizen
string Citizen::getFirstName()
{
    return firstName;
}

//Returns the last name of this citizen
string Citizen::getLastName()
{
    return lastName;
}

//Returns the id for this citizen
int Citizen::getId()
{
    return id;
}

//Returns the favorite color for this citizen
string Citizen::getFavoriteColor()
{
    return favColor;
}

//Sets the favorite color for this citizen
void Citizen::setFavoriteColor(string color)
{
    favColor = color;
}

















