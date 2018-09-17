#include <string.h>
#include <iostream>
#include <cstdlib>

using namespace std;

#include "User.h"

class Driver: public User {
		string sponsor;
		int points;
	public:
		Driver();
		~Driver(); 
		void registerDriver();
		int getPoints();
		string getSponsor();
};
