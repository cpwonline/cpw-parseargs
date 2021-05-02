/*
 * value.h
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include <string>


#ifndef VALUE_H
#define VALUE_H

class Value
{
	public:
		Value();
		virtual ~Value();
	
	private:
		std::string content_;
};

#endif /* VALUE_H */ 
