/*
 * parser.h
 * 
 * Copyright 2021 CPW Online <support@cpwonline.org>
 * 
 * This program is free software; see the License file for more details.
 * 
 * You should have received a copy of the License along with this program.
 * 
 */


#include <list>

#ifndef PARSER_H
#define PARSER_H

class Parser
{
	public:
		Parser();
		virtual ~Parser();
		
	public:
		std::list<Argument*>* get_arguments_colector() const;
		std::list<Result*>* get_results_colector() const;
		Separator* get_current_separator() const;
		Comparator* get_current_comparator() const;
	
	private:
		std::list<Argument*>* arguments_colector_;
		std::list<Result*>* results_colector_;
		Separator* current_separator_;
		Comparator* current_comparator_;
};

#endif /* PARSER_H */ 
