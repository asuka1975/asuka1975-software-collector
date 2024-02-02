#ifndef ASC_COMMAND_COMMAND_HPP
#define ASC_COMMAND_COMMAND_HPP

#include <string>
#include <vector>

namespace asuka1975 {
    struct Command {
        virtual void execute(const std::vector<std::string>& args) = 0;
    };
}

#endif