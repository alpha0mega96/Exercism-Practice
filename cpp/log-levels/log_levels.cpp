#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
	return line.substr( line.find(':') + 2 );        // 2nd character from ':' to account for the space as first character after ':'
    }

    std::string log_level(std::string line) {
        // return the log level
	return line.substr( 1 , line.find(']') - 1 );    // 0th character is '[', the log level has length = find('[') - find(']') - 1
    }                                                    //     which is the same as find(']') - 1

    std::string reformat(std::string line) {
        // return the reformatted message (using the functions above makes it simpler...)
	return log_line::message(line) + " (" + log_line::log_level(line) + ")";
    }
}
