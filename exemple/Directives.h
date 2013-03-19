#ifndef __DIRECTIVES_H__
# define __DIRECTIVES_H__

enum DirectivesOrder
{
	CONNECTION_INIT,
	PREPROCESS_REQUEST,
	PROCESS_REQUEST,
	CREATE_RESPONSE,
	PROCESS_FINISHED_RESPONSE,
	PRESENDING_PROCESSING
};

class Directives
{
public:
	virtual ~Directives() {};
	virtual void		callDirective(DirectivesOrder, Request &) = 0;
	virtual void		callDirective(DirectivesOrder, Response &) = 0;
	virtual void		init() = 0;
};

#endif // !__DIRECTIVES_H__
