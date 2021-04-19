/*
 * result.cc
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include "result.h"


Result::Result()
{
	
}

Result::~Result()
{
	
}

std::list<Argument*>* Result::get_arguments_colector() const
{
	return arguments_colector_;
}

void Result::set_arguments_colector(std::list<Argument*>* arguments_colector)
{
	arguments_colector_ = arguments_colector;
}