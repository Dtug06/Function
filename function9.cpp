#include <iostream>
#include <string>

class StringProcessor {
private:
    std::string str;

public:
    // Constructor
    StringProcessor() {
        str = "";
    }

    // Method to input data
    void inputData() {
        std::cout << "Enter the string: ";
        std::getline(std::cin, str);
    }

    // Method to process data (calculate the sum of digits in the string)
    int calculateSumOfDigits() {
        int sum = 0;
        for (size_t i = 0; i < str.length(); ++i) {
            if (str[i] >= '0' && str[i] <= '9') {
                sum += str[i] - '0';
            }
        }
        return sum;
    }

    // Method to output data
    void outputData() {
        std::cout << "Input string: " << str << std::endl;
        std::cout << "Sum of digits in the string: " << calculateSumOfDigits() << std::endl;
    }
};

int main() {
    StringProcessor sp;
    sp.inputData();
    sp.outputData();

    return 0;
}

