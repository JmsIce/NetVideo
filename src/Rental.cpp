/*
  Rental.cpp

  Definition file for Rental class.
*/

#include "Rental.hpp"

// constructor
Rental::Rental(const Video& movie, int days_rented)
    : movie(movie), days(days_rented)
{ }

// movie rented
const Video& Rental::getVideo() const {

    return movie;
}

// days rented
int Rental::getDaysRented() const {

    return days;
}