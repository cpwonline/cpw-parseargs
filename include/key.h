/*
 * key.h
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#ifndef KEY_H
#define KEY_H


#include <string>


class Key
{
	public:
		Key();
		virtual ~Key();
		
		std::string get_content() const;
		
		void set_content(std::string content);
	
	private:
		std::string content_;
};

#endif /* KEY_H */ 
