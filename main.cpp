#include "Driver.h"

using namespace std;

Driver d;

int main()
{

	d.registerDriver();

	cout << endl;

	cout << "User registered." << endl;

	cout << endl;

	string t, input;
	int i;
	int x = 0;

	while(x == 0)
	{
		cout << "View?" << endl;

		cin >> input;

		if(input == "Username")
		{		
			t = d.getUsername();
			cout <<	"Username: " << t << endl;
		}
		else if(input == "Password")
		{
			t = d.getPassword();
			cout <<	"Password: " << t << endl;
		}
		else if(input == "E-Mail")
		{
			t = d.getEmail();
			cout <<	"E-Mail: " << t << endl;
		}
		else if(input == "Phone")
		{
			i = d.getPhone();
			cout <<	"Phone: " << i << endl;
		}
		else if(input == "ID")
		{
			i = d.getID();
			cout <<	"ID: " << i << endl;
		}
		else if(input == "Sponsor")
		{
			t = d.getSponsor();
			cout <<	"Sponsor: " << t << endl;
		}
		else if(input == "Points")
		{
			i = d.getPoints();
			cout <<	"Points: " << i << endl;
		}
		else
		{
			cout << "Invalid input..." << endl;
		}
	}
}
