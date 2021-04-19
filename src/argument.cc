/*
 * argument.cc
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include "argument.h"


Argument::Argument()
{
	
}


Argument::~Argument()
{
	
}

bool Argument::get_have_value() const
{
	return have_value_;
}

bool Argument::get_multiple_values() const
{
	return multiple_values_;
}

Key* Argument::get_current_key() const
{
	return current_key_;
}

std::list<Value*>* Argument::get_values_colector() const
{
	return values_colector_;
}

void Argument::set_have_value(bool have_value)
{
	have_value_ = have_value;
}

void Argument::set_multiple_values(bool multiple_values)
{
	multiple_values_ = multiple_values;
}