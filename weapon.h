/*
 * weapon.h
 *
 *  Created on: Feb 10, 2017
 *      header file for weapon class
 */

#include <string>
#include <iostream>
using namespace std;

class Weapon {
private:
	int weight;		//weight of weapon
	int wName;		//type of weapon (0-sword, 1-bow, 2-spear, etc)
	int damage;		//how much damage each hit of weapon inflicts
public:
	enum type {sword, bow, spear, potion, fireball, empty};
	Weapon(); 				//default constructor
	Weapon(int wName1);		//parameterized constructor
	Weapon(Weapon& old);	//copy constructor
	~Weapon(){}				//destructor

	int getWeight();			//return weight
	int getDamage();			//return damage inflicts
	int getType();				//return type of weapon
	void reset(int type);		//change type of weapon given type
	void reset(Weapon w);		//change type of weapon given weapon
};