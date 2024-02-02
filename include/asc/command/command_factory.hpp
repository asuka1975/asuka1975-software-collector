#ifndef ASC_COMMAND_COMMAND_FACTORY_HPP
#define ASC_COMMAND_COMMAND_FACTORY_HPP

#include <memory>

#include "command.hpp"

namespace asuka1975 {
    class CommandFactory {
    public:
        std::unique_ptr<Command> create(const std::string& commandName);
    };
}

#endif