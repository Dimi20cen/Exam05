#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(Warlock &rhs);
		Warlock	operator=(Warlock const &rhs);
	
	public:
		Warlock(std::string, std::string);
		~Warlock(void);
		
		std::string const&	getName(void) const;
		std::string const&	getTitle(void) const;
		void				setTitle(std::string const&);
		void				introduce(void) const;
};

#endif