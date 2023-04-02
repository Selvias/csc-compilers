#include <libc/dump_tokens.hpp>

#include <CLI/App.hpp>
#include <CLI/Config.hpp>
#include <CLI/Formatter.hpp>

#include <fstream>
#include <iostream>
#include <string>

const char *const file_path_opt = "file_path";
const char *const dump_tokens_opt = "dump-tokens";

int main() {
  std::ifstream input_stream(file_path_opt);
  if (!input_stream.good()) {
    std::cerr << "Unable to read stream\n";
    return 1;
  }

  libc::dump_tokens(input_stream, std::cout);
  return 0;
}