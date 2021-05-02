/*
 * comparator.h
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include <string>

#ifndef COMPARATOR_H
#define COMPARATOR_H

class Comparator
{
	public:
		Comparator();
		virtual ~Comparator();
		
	public:
		std::string get_string_to_compare() const;
	
	public:
		void set_string_to_compare(std::string string_to_compare);
		
	private:
		std::string string_to_compare_;
};

#endif /* COMPARATOR_H */ 
