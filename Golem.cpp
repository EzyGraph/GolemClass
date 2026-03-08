#include<iostream>
#include "Golem.h"

using namespace std;

//Constructor
Golem::Golem(string t, double h, double he, double we, int a) : type(t), hp(h), height(he), weight(we), age(a) { }

//Actions
void Golem::print() const {
				cout << "You found " << type << " Golem!" << endl;
				cout << "Vitality: " << hp << " HP." << endl;
				cout << "Height: " << height << " meters." << endl;
				cout << "Weight: " << weight << " Kg." << endl;
}

int Golem::getAge() const {
				return age;
}

void Golem::dealDamage(double attack) {
				if (attack >= 100) {
								cout << "Damage: " << attack << " - GAME OVER" << endl;
								cout << endl;
				} else {
								cout << "Damage: " << attack << " - Run!!!" << endl;
								cout << endl;
				}
					
}

void Golem::setAttack(double atk) {
				attack = atk;
				cout << type << " Golem attacked => attack power: " << attack << endl;
}
