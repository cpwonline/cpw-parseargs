/*
 * separator.cc
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include "separator.h"


Separator::Separator()
{
	
}

Separator::~Separator()
{
	
}

std::string Separator::get_string_to_compare() const
{
	return string_to_compare_;
}

void Separator::set_string_to_compare(std::string string_to_compare)
{
	string_to_compare_ = string_to_compare;
}

