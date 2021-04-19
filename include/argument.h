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
		
	public:
		bool get_have_value() const;
		bool get_multiple_values() const;
		Key* get_current_key() const;
		std::list<Value*>* get_values_colector() const;
		
	public:
		void set_have_value(bool have_value);
		void set_multiple_values(bool multiple_values);
	
	private:
		bool have_value_;
		bool multiple_values_;
		Key* current_key_;
		std::list<Value*>* values_colector_;
};

#endif /* ARGUMENT_H */ 
