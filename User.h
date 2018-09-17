#include <string.h>
#include <iostream>
#include <cstdlib>

using namespace std;

class User {
		string username, password, email;
		int phone, ID;
	public:
		User();
		~User(); 
		void registerUser();
		string getUsername();
		string getPassword();
		string getEmail();
		int getPhone();
		int getID();
};
