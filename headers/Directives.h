#ifndef __DIRECTIVES_H__
# define	__DIRECTIVES_H__

#include "Request.h"
#include "Response.h"
#include "DirectivesOrder.h"

# ifdef _WIN32
# include	<WinSock2.h>
typedef SOCKET t_socket;
# else
# include <netinet/in.h>
typedef	int		t_socket;
# endif

class Directives
{
public:
	virtual ~Directives() {};
	virtual	void	callDirective(DirectivesOrder directiveorder, Request & request, SOCKET socket, sockaddr_in connexionInfos) = 0;
	virtual	void	callDirective(DirectivesOrder directiveorder, Response & response, SOCKET socket, sockaddr_in connexionInfos) = 0;
	virtual	void	init() = 0;
};


#endif // !_DIRECTIVES_H_
