/*
 * separator.h
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#ifndef SEPARATOR_H
#define SEPARATOR_H

class Separator
{
	public:
		Separator();
		virtual ~Separator();
	
	public:
		std::string get_string_to_compare() const;
	
	public:
		void set_string_to_compare(std::string string_to_compare);
		
	private:
		std::string string_to_compare_;
};

#endif /* SEPARATOR_H */ 
