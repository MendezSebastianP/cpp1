#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <cctype>

class Brain {
    public:
	// canonic
	Brain( void );
	virtual ~Brain( void );
	Brain( Brain const &src);
	Brain & operator =( Brain const & rhs);

	std::string getIdea(int index) const;
	void setIdea(int index, const std::string& idea);

	private:
	std::string ideas_[100];
};


#endif