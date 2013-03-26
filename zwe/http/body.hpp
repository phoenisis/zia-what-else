#ifndef ZWE_HTTP_BODY_HPP__
#define ZWE_HTTP_BODY_HPP__ 1

#include <cstddef>

namespace ZWE {
namespace HTTP {

class Body {
  protected:
    char * _buffer;
    size_t _size;

  public:
    Body(void);
    virtual ~Body(void);

    size_t getSize(void) const;
    size_t append(char const &);
};

}}

#endif
