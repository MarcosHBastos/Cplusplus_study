#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
	: name(name), rating(rating), watched(watched) {
	std::cout << "Constructor called for \"" << name << std::endl;
}
Movie::Movie(const Movie &source)
	: Movie {source.get_name(), source.get_rating(), source.get_watched()} {
	  std::cout << "Constructor called for \"" << name << std::endl;
}
Movie::~Movie() {
	std::cout << "Destructor called for \"" << name << std::endl;
}
		
void Movie::set_name(std::string name){ this->name = name; };
std::string Movie::get_name() const { return this->name; };

void Movie::set_rating(std::string rating) { this->rating = rating; }
std::string Movie::get_rating() const { return this->rating; };

void Movie::increase_watched() { this->watched++; };
int Movie::get_watched() const { return this->watched; };

void Movie::display() const { 
	std::cout << name << ", " << rating << ", " << watched;
}
