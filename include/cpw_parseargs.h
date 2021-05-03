/*
 * cpw_parseargs.h
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include <list>
#include <string>

#include "parser.h"
#include "argument.h"


#ifndef CPW_PARSEARGS_H
#define CPW_PARSEARGS_H

class CPWParseArgs
{
	public:
		CPWParseArgs();
		virtual ~CPWParseArgs();
		
	public:
		enum OperationType
		{
			kSeparate,
			kSearchByKey,
			kSearchByValue
		};
		
	public:
		std::list<Argument*>* get_arguments_colector() const;
		Parser* get_current_parser() const;
		
	public:
		Parser_(std::string string_to_parser, OperationType type);
	
	private:
		std::list<Argument*>* arguments_colector_;
		Parser* current_parser_;
};

#endif /* CPW_PARSEARGS_H */ 
