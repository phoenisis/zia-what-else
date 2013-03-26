#ifndef ZWE_HTTP_REQUEST_HPP__
#define ZWE_HTPP_REQUEST_HPP__ 1

#include "./request_header.hpp"
#include "./body.hpp"

namespace ZWE {
namespace HTTP {

class Request {
  protected:
    ZWE::HTTP::Request::Header _header;
    ZWE::HTTP::Body:: _body;

  public:
    ZWE::HTTP::Body const & getBody() const;
    ZWE::HTTP::Request::Header const & getHeader() const;
};

}}

#endif
