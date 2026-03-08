#include<iostream>
#include "Golem.h"

using namespace std;

int main() {
				Golem g1("Volcano", 1022, 3.85, 213.4, 426); // Todos os valores customizados
				g1.print();
				g1.setAttack(25.9);
				g1.dealDamage(30.9);

				Golem g2("Mountain"); // Define apenas o tipo do Golem. Os outros valores são default.
				g2.print();
				g2.setAttack(15.87);
				g2.dealDamage(150.1);

				return 0;
}
