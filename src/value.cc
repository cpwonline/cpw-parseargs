/*
 * value.cc
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include "value.h"


Value::Value()
{
	
}

Value::~Value()
{
	
}

std::string Value::get_content() const
{
	return content_;
}

void Value::set_content(std::string content)
{
	content_ = content;
}