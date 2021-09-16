#ifndef CATALOG_H
#define CATALOG_H

#include <iostream>
#include <vector>
#include <string>
#include "Movie.h"

class Catalog
{
private:
	std::vector<Movie> movies;
	int find_movie_by_name(std::string movie_name);
	bool exists(std::string movie_name);
public:
	Catalog();
	~Catalog();
	
	void add_movie(Movie &&source);
	//void add_movie(Movie movie);
	void remove_by_name(std::string movie_name);
	void increment_watched(std::string movie_name);
	void display_all();
};

#endif // CATALOG_H
