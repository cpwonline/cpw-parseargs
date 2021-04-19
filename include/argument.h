/*
 * argument.h
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include <list>

#ifndef ARGUMENT_H
#define ARGUMENT_H

class Argument
{
	public:
		Argument();
		virtual ~Argument();
	
	private:
		bool have_value_;
		bool multiple_values_;
		Key* current_key_;
		std::list<Value*>* values_colector_;
};

#endif /* ARGUMENT_H */ 
