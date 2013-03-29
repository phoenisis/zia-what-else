#ifndef __REQUESTHEADER_H__
# define	__REQUESTHEADER_H__

#include <string>
#include <map>

class RequestHeader {
	std::string	_arg;
	std::string	_command;
	std::map<std::string, std::string>	_options;
	std::string	_version;
public:
	RequestHeader();
	RequestHeader (std::map<std::string, std::string> const & options, std::string const & arg, std::string const & command, std::string const & version);
	~RequestHeader ();
	std::string const &		getArg() const;
	std::string const &		getCommand() const;
	std::string const &		getHeaderValue(std::string const & headerAttribut) const;
	std::string const &		getValueForKey(std::string const & key) const;
	std::string const &		getVersion() const;
	bool					hasKey(std::string const & value);
	void					setStatusCode(std::string const & statusCode);
	void					setStatusMessage(std::string const & statusMessage);
	void					setVersion(std::string const & version);
};

#endif // !_REQUESTHEADER_H_
