#include <string.h>
#include <iostream>
#include <cstdlib>
#include <time.h>

#include "User.h"

User::User()
{
}

User::~User()
{
}

void User::registerUser()
{
	cout << "Enter username: ";
	cin >> username;

	cout << "Enter password: ";
	cin >> password;

	cout << "Enter E-Mail: ";
	cin >> email;

	cout << "Enter Phone Number: ";
	cin >> phone;

	srand(time(NULL));

	int randID = rand()%10000;

	cout << "User ID randomly set to ";
	cout << randID << endl;
	ID = randID;
}

string User::getUsername()
{
	return username;
}

string User::getPassword()
{
	return password;
}

string User::getEmail()
{
	return email;
}

int User::getPhone()
{
	return phone;
}

int User::getID()
{
	return ID;
}

