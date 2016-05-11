/*
  Rental.hpp

  Include file for Rental class
*/

#ifndef RENTAL_H
#define RENTAL_H

#include "Video.hpp"

class Rental {
public:

    // constructor
    Rental(const Video& movie, int days_rented);

    // movie rented
    const Video& getVideo() const;

    // days rented
    int getDaysRented() const;

private:
    Video movie;
    int days;
};

#endif
