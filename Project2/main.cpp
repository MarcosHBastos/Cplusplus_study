#include <iostream>
#include <string>

using namespace std;

int main() {
	
	const double small_rooms_price {25};
	const double large_rooms_price {35};
	const double service_tax {0.06};
	const int valid_days {30};
	
	cout << "Hello, Welcome to Frank's Carpet Cleaning Service" << endl;
	
	cout << "\nHow many small rooms would you like cleaned? ";
	int small_rooms {0};
	cin >> small_rooms;
	
	cout << "How many large rooms would you like cleaned? ";
	int large_rooms {0};
	cin >> large_rooms;
	
	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << small_rooms << endl;
	cout << "Number of large rooms: " << large_rooms << endl;
	
	double small_total {small_rooms_price * small_rooms};
	cout << "Price per small room: $" << small_rooms_price << endl;
	double large_total {large_rooms_price * large_rooms};
	cout << "Price per large room: $" << large_rooms_price << endl;
	double subtotal {small_total + large_total};
	cout << "Cost: $" << subtotal << endl;
	double tax_value {service_tax * subtotal};
	cout << "Tax: $" << tax_value << endl;
	
	cout << "============================" << endl;
	double total {tax_value + subtotal};
	cout << "Total estimate: $" << total << endl;
	cout << "This estimate is valid for " << valid_days << " days" << endl;
	return 0;
}
