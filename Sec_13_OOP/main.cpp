#include <iostream>
#include "Movie.h"
#include "Catalog.h"

int main() {
	
	Catalog catalog;
	catalog.display_all();
	catalog.increment_watched("Nem vi");
	catalog.add_movie(Movie("Shrek", "Max", 12323));
	catalog.add_movie(Movie("Mia pica", "ble", 1));
	catalog.display_all();
	catalog.remove_by_name("Mia pica");
	catalog.increment_watched("Shrek");
	catalog.display_all();
	return 0;
}
