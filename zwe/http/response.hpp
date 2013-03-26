#ifndef ZWE_HTTP_RESPONSE_HPP__
#define ZWE_HTTP_RESPONSE_HPP__ 1

#include "./http.h"
#include "./response_header.hpp"
#include "./body.hpp"

namespace ZWE {
namespace HTTP {

class Response {
  protected:
    ZWE::HTTP::Response::Header _header;
    ZWE::HTTP::Body:: _body;

  public:
    ZWE::HTTP::Body & getBody();
    ZWE::HTTP::Request::Header & getHeader();
    char * serialize() const;
};

}}

#endif
