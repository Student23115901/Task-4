
#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>

class Parser {
private:
    std::string input;
    size_t pos = 0;

    char peek() {
        return pos < input.size() ? input[pos] : '\0';
    }

    char get() {
        return pos < input.size() ? input[pos++] : '\0';
    }

    void skipWhitespace() {
        while (isspace(peek())) get();
    }

    int parseNumber() {
        skipWhitespace();
        int num = 0;
        while (isdigit(peek())) {
            num = num * 10 + (get() - '0');
        }
        return num;
    }

    int parseFactor() {
        skipWhitespace();
        if (peek() == '(') {
            get(); // consume '('
            int val = parseExpression();
            if (get() != ')')
                throw std::runtime_error("Expected ')'");
            return val;
        }
        return parseNumber();
    }

    int parseTerm() {
        int val = parseFactor();
        while (true) {
            skipWhitespace();
            if (peek() == '*') {
                get();
                val *= parseFactor();
            } else if (peek() == '/') {
                get();
                int divisor = parseFactor();
                if (divisor == 0) throw std::runtime_error("Division by zero");
                val /= divisor;
            } else {
                break;
            }
        }
        return val;
    }

    int parseExpression() {
        int val = parseTerm();
        while (true) {
            skipWhitespace();
            if (peek() == '+') {
                get();
                val += parseTerm();
            } else if (peek() == '-') {
                get();
                val -= parseTerm();
            } else {
                break;
            }
        }
        return val;
    }

public:
    Parser(const std::string& str) : input(str) {}

    int evaluate() {
        int result = parseExpression();
        skipWhitespace();
        if (pos != input.size())
            throw std::runtime_error("Unexpected characters at end");
        return result;
    }
};

int main() {
    std::string expression;
    std::cout << "Enter arithmetic expression: ";
    std::getline(std::cin, expression);

    try {
        Parser parser(expression);
        int result = parser.evaluate();
        std::cout << "Result = " << result << std::endl;
    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return 0;
}
