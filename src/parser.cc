/*
 * parser.cc
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include "parser.h"


Parser::Parser()
{
	
}

Parser::~Parser()
{
	
}

std::list<Argument*>* Parser::get_arguments_colector() const
{
	return arguments_colector_;
}

std::list<Result*>* Parser::get_results_colector() const
{
	return results_colector_;
}

Separator* Parser::get_current_separator() const
{
	return current_separator_;
}

Comparator* Parser::get_current_comparator() const
{
	return current_comparator_;
}