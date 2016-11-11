//
//  City.cpp
//  Exam-2
//
//  Created by Daniel Portillo on 11/10/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "City.hpp"


//Creates a new city with the given name
//When the city is created you need to restore
//it's population from a file.
//Hint: You will want to make the file name
//be based on the name of the city.
City::City(string name)
{
    cityName = name;
    string fileName = cityName + ".txt";
    fstream file(fileName, ios::in | ios::app);//open or create the city file
    //placeholders for use in citizen transfer from .txt file to the citizens vector for the City object
    int iD;
    string first;
    string last;
    string color;
    if (!file.fail())
    {
        for (int i = 0; i < citizens.size(); i++)
        {
            file >> iD >> first >> last >> color;
            citizens.push_back(new Citizen(iD, first, last, color));
            delete Citizen;
        }
    }
    size = citizens.size();
    file.close();
}

//This is the destructor for the city.  When
//this city is destroyed, save the population of
//the city to a file so that you can restore
//it in the constructor the next time that
//a city with this name is created.
City::~City()
{
    string fileName = cityName + ".txt";
    fstream out(fileName, ios::out);
    
    for (int i = 0; i < citizens->size(); i++) {
        out << citizens[i]->getId;
    }
    
    out.close();

}

//Returns the city name
string City::getCityName()
{
    return cityName;
}

//Returns the number of citizens in this city
int City::populationSize()
{
    return citizens.size();
}

//Returns the citizen at the given index.
Citizen* City::getCitizenAtIndex(int index)
{
    return citizens.at(index);
}

//Adds a citizen to this city. You will need to
//make a copy of this citizen so that you make
//sure to keep it around for the life of the city.
void City::addCitizen(Citizen* citizen)
{
    citizen = new Citizen(id, firstName, lastName, favColor);
    
}

//Returns the citizen with the given id.
Citizen* City::getCitizenWithId(int iD)
{
    return citizens.at(iD);
}

//Returns a vector of citizens that all have
//the given color as their favorite color.
//For example, if color is “Blue” this will return all citizens
//for this city who’s favorite color is Blue.
vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
    vector<Citizen*>colorClub;
    for (int i = 0; i < citizens.size(); i++) {
        if (citizens[i].getFavoriteColor() == color)
        {
            *colorClub.push_back(citizens[i]);
            i++;
        }
        else
        {
            i++;
        }
    }
    return colorClub;
}








