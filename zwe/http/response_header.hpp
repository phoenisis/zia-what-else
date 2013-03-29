#ifndef ZWE_HTTP_RESPONSE_HEADER_HPP__
#define ZWE_HTTP_RESPONSE_HEADER_HPP__ 1

#include <string>
#include <map>

#include "./http.h"

namespace ZWE {
namespace HTTP {

namespace Response {

class Header {

  protected:
    ZWE::HTTP::status_code _statusCode;
    ZWE::HTTP::version _version;
    std::map<std::string, std::string> _headers;

  public:
    ZWE::HTTP::status_code getStatusCode() const;
    void setStatusCode(ZWE::HTTP::status_code);

    ZWE::HTTP::version getVersion() const;
    void setVersion(ZWE::HTTP::version);

    bool hasHeader() const;

    std::string const & getHeader(std::string const &) const;
    void setHeader(std::string const &);

};

}}}

#endif
