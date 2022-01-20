#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const&	Warlock::getName(void) const 
{
	return (_name);
}

std::string const&	Warlock::getTitle(void) const 
{
	return (_title);
}

void	Warlock::setTitle(std::string const &title)
{
	_title = title;
}

void	Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << " !" << std::endl;
}