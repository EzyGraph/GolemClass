#ifndef GOLEM_H
#define GOLEM_H

using namespace std;

class Golem {
				private:
				string type;
				double hp;
				double height;
				double weight;
				int age;
				double attack;	

				public:
				// Constructor
				Golem(string type = "Normal", double hp = 1000.0, double height = 9.45, double weight = 125.9, int age = 300);
																																																				   // Métodos
				void print() const;
			 	int getAge() const;
				void dealDamage(double attack);
				void setAttack(double attack);
};

#endif
