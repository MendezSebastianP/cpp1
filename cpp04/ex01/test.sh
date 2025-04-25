#!/bin/bash
./Animal
echo "Default constructor Animal called times"
./Animal | grep "Default constructor Animal called" | wc -l
echo "Default constructor Dog called times"
./Animal | grep "Default constructor Dog called" | wc -l
echo "Default constructor Cat called times"
./Animal | grep "Default constructor Cat called" | wc -l
echo "Dog ideas"
./Animal | grep -o "Bark at midnight;" | wc -l
echo "Cat ideas"
./Animal | grep -o "Scratch and bite my owner;" | wc -l
echo "Destructor Cat called times"
./Animal | grep "Destructor Cat called" | wc -l
echo "Destructor Dog called times"
./Animal | grep "Destructor Dog called" | wc -l
echo "Destructor Animal called times"
./Animal | grep "Destructor Animal called" | wc -l
