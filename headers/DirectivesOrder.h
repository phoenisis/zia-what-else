#ifndef __DIRECTIVESORDER_H__
# define __DIRECTIVESORDER_H__

enum DirectivesOrder
{
	CONNECTION_INIT,
	PREPROCESS_REQUEST,
	PROCESS_REQUEST,
	CREATE_RESPONSE,
	PROCESS_FINISHED_RESPONSE,
	PRESENDING_PROCESSING,
	CONNECTION_CLOSED
};


#endif // !__DIRECTIVESORDER_H__
