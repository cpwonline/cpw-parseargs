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
		}
		
	
	private:
		std::list<Argument*>* arguments_colector_;
		Parser* current_parser_;
};

#endif /* CPW_PARSEARGS_H */ 
