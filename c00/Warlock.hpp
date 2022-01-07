#pragma once

#include <iostream>
using std::cout;
using std::string;

class Warlock
{
	Warlock();
	Warlock(Warlock const &src);
	Warlock &operator=(Warlock const &rhs);

	string _name;
	string _title;

public:
	Warlock(string const &n, string const &t)
		: _name(n), _title(t)
	{
		cout << this->_name
			 << ": This looks like another boring day.\n";
	}

	~Warlock()
	{
		cout << this->_name
			 << ": My job here is done!\n";
	}

	string const &getName() const
	{
		return (this->_name);
	}

	string const &getTitle() const
	{
		return (this->_title);
	}

	void setTitle(string const &t)
	{
		this->_title = t;
	}

	void introduce() const
	{
		cout << this->_name
			 << ": I am " << this->_name
			 << ", " << this->_title << "!\n";
	}
};