#!/bin/bash
./A_Animal
echo "Default constructor A_Animal called times"
./A_Animal | grep "Default constructor A_Animal called" | wc -l
echo "Default constructor Dog called times"
./A_Animal | grep "Default constructor Dog called" | wc -l
echo "Default constructor Cat called times"
./A_Animal | grep "Default constructor Cat called" | wc -l
echo "Destructor Cat called times"
./A_Animal | grep "Destructor Cat called" | wc -l
echo "Destructor Dog called times"
./A_Animal | grep "Destructor Dog called" | wc -l
echo "Destructor A_Animal called times"
./A_Animal | grep "Destructor A_Animal called" | wc -l
