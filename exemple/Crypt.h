#ifndef __CRYPT_H__
# define __CRYPT_H__
# include	"Directives.h"

class Crypt : public Directives
{
public:
	Crypt();
	~Crypt();
	virtual void		callDirective(DirectivesOrder, );
	virtual void		callDirective(DirectivesOrder, Request &, Response &);
	virtual void		init();
private:
	void				cryptResponse(Response &);
	void				uncryptRequest(Request &);
	void				sendIdx(Response &);
	int					_idx;		
};


#endif
