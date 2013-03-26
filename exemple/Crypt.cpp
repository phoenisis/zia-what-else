#include	"Crypt.h"

extern "C"
{
	ModuleInfos *			get_module_infos()
	{
		ModuleInfos		 *m = new ModuleInfos;

		m->associatedDLL = "Crypt";
		m->managedDirectives = CONNECTION_INIT | PREPROCESS_REQUEST | PROCESS_FINISHED_RESPONSE;
		m->managesHeaderOnly = true;
		m->name = "crypting";
		m->nbDirectives = 3;
		return (m);
	}

	Directives *		get_directives()
	{
		return (new Crypt());
	}
}

Crypt::Crypt() : _idx(0)
{
}

Crypt::~Crypt()
{
}

void			Crypt::init()
{
	this->_idx = (rand() % 9) + 1;
}

void			Crypt::callDirective(DirectivesOrder dir, Request & req)
{
	if (dir == PREPROCESS_REQUEST)
		this->uncryptRequest(req);
}

void			Crypt::callDirective(DirectivesOrder dir, Response & res)
{
	if (dir == CONNECTION_INIT)
		this->sendIdx(res);
	else if (dir == PROCESS_FINISHED_RESPONSE)
		this->cryptResponse(res);
}

void			Crypt::cryptResponse(Response & res)
{
	for (int i = 0; i < res.getLength(); ++i)
		res.getBuffer()[i] += this->_idx;
}

void			Crypt::uncryptRequest(Request & req)
{
	for (int i = 0; i < req.getLength(); ++i)
		req.getBuffer()[i] -= this->_idx;
}

void			Crypt::sendIdx(Response & res)
{
	std::string			s;
	std::ostringstream  tmp;

	tmp < this->_idx;
	s = convert.str();
	res.getHeader().setStatusCode("200");
	res.getHeader().setStatusMessage("OK");
	res.getHeader().setVersion("HTTP/1.1");
	res.getHeader().setValue("idx", s);
}
