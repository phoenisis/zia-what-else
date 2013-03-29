#ifndef ZWE_HTTP_HTTP_H__
#define ZWE_HTTP_HTTP_H__ 1

#include <inttypes.h>

namespace ZWE {
namespace HTTP {

typedef enum {
  v_0_9,
  v_1_0,
  v_1_1
} version;

typedef uint16_t status_code;

typedef enum {
  get, head, post, put, delete_,
  trace, options, connect, patch
} method;

}}

#endif
