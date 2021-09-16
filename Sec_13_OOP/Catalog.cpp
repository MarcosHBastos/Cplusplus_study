#include "Catalog.h"

Catalog::Catalog() {}

void Catalog::add_movie(Movie &&source) {
	if(!exists(source.get_name())) {
		Movie m (source.get_name(), source.get_rating(), source.get_watched());
		movies.push_back(m);
		std::cout << "Movie \"" << m.get_name() << "\" added to the catalog!" << std::endl;
	} else {
		std::cout << "A movie named \"" << source.get_name() << "\" already exists in the catalog!" << std::endl;
	}
}

/*void Catalog::add_movie(Movie source) {
	if(!exists(source.get_name())) {
		movies.push_back(source);
		std::cout << "Movie \"" << source.get_name() << "\" added to the catalog!" << std::endl;
	} else {
		std::cout << "A movie named \"" << source.get_name() << "\" already exists in the catalog!" << std::endl;
	}
}*/

Catalog::~Catalog() {}

void Catalog::remove_by_name(std::string movie_name) {
	int index {find_movie_by_name(movie_name)};
	if(index != -1) {
		movies.erase(movies.begin() + index);
		std::cout << "Movie \"" << movie_name << "\" removed from catalog!" << std::endl;
	}
}
void Catalog::increment_watched(std::string movie_name) {
	int index {find_movie_by_name(movie_name)};
	if(index != -1) {
		movies.at(index).increase_watched();
		std::cout << "Increased watched count for movie \"" << movie_name << "\"" << std::endl;
	}
}
void Catalog::display_all() {
	if(!movies.empty()) {
		std::cout << "\n=================================" << std::endl;
		std::cout << "*        My movie catalog       *" << std::endl;
		std::cout << "=================================" << std::endl;
		for(const auto &m: movies) {
			std::cout << "  ";
			m.display();
			std::cout << std::endl;
		}
		std::cout << "=================================\n" << std::endl;
	} else {
		std::cout << "Movie catalog is empty!" << std::endl;
	}
}

int Catalog::find_movie_by_name(std::string movie_name) {
	if(!movies.empty()) {
		for(size_t i{0} ; i < movies.size() ; ++i) {
			if(movies.at(i).get_name() == movie_name)
				return i;
		}
		std::cout << "Couldn't find \"" << movie_name << "\" in the catalog!" << std::endl;
	} else {
		std::cout << "Movie catalog is empty!" << std::endl;
	}
	return -1;
}

bool Catalog::exists(std::string movie_name) {
	if(!movies.empty()) {
		for(size_t i{0} ; i < movies.size() ; ++i) {
			if(movies.at(i).get_name() == movie_name)
				return true;
		}
	}
	return false;
}

