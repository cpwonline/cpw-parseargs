/*
 * result.h
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include <list>

#include "argument.h"


#ifndef RESULT_H
#define RESULT_H

class Result
{
	public:
		Result();
		virtual ~Result();
		
	public:
		std::list<Argument*>* get_arguments_colector() const;
		
	public:
		void set_arguments_colector(std::list<Argument*>* arguments_colector);
	
	private:
		std::list<Argument*>* arguments_colector_;
};

#endif /* RESULT_H */ 
