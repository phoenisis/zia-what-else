#ifndef __DIRECTIVES_H__
# define __DIRECTIVES_H__

enum DirectivesOrder
{
	CONNECTION_INIT = 1,
	PREPROCESS_REQUEST = 2,
	PROCESS_REQUEST = 4,
	CREATE_RESPONSE = 8,
	PROCESS_FINISHED_RESPONSE = 16,
	PRESENDING_PROCESSING = 32,
	CONNECTION_CLOSED = 64
};

class Directives
{
public:
	virtual ~Directives() {};
	virtual void		callDirective(DirectivesOrder, Request &, Response &) = 0;
	virtual void		init() = 0;
};

#endif // !__DIRECTIVES_H__
