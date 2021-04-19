/*
 * cpw_parseargs.cc
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include "cpw_parseargs.h"


CPWParseArgs::CPWParseArgs()
{
	arguments_colector_ = new std::list<Argument*>;
	current_parser_ = new Parser();
}

CPWParseArgs::~CPWParseArgs()
{
	for(it = arguments_colector_->begin(); it != arguments_colector_->end(); ++it)
		delete *it;
	delete arguments_colector_;
	
	delete current_parser_;
}

std::list<Argument*>* CPWParseArgs::get_arguments_colector() const
{
	return arguments_colector_;
}

Parser* CPWParseArgs::get_current_parser() const
{
	return current_parser_;
}