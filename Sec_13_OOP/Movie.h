#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

class Movie {
private:
	std::string name;
	std::string rating;
	int watched;
public:
	Movie(std::string name, std::string rating, int watched = 0);
	Movie(const Movie &source);
	~Movie();
	
	void set_name(std::string name);
	std::string get_name() const;
	void set_rating(std::string rating);
	std::string get_rating() const;
	void increase_watched();
	int get_watched() const;
	void display() const;
};

#endif // MOVIE_H
