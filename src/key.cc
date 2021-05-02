/*
 * key.cc
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include "key.h"


Key::Key()
{
	
}

Key::~Key()
{
	
}

std::string Key::get_content() const
{
	return content_;
}

void Key::set_content(std::string content)
{
	content_ = content;
}