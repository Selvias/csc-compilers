#pragma once

#include <iosfwd>

namespace libc {

void dump_tokens(std::istream &in, std::ostream &out);

} // namespace libc