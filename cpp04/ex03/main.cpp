# include <iostream>
# include <cctype>
# include "I_Character.hpp"
# include "Character.hpp"
# include "I_MateriaSource.hpp"
# include "MateriaSource.hpp"
# include "Materias/A_Materia.hpp"
# include "Materias/Cure.hpp"
# include "Materias/Ice.hpp"

int main()
{
	I_MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	I_Character* me = new Character("me");
	A_Materia* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("imaginary");
	me->equip(tmp);
	(me->equip(tmp), me->equip(tmp), me->equip(tmp), me->equip(tmp)); // fullfil the slots
	I_Character* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob); // imaginary not showm
	(me->use(4, *bob), me->use(-1, *bob), me->use(234234, *bob)); // overflow 
	delete bob;
	delete me;
	delete src;
}