#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main(){
    std::ifstream in_file{"romeoandjuliet.txt"};
    std::ofstream out_file{"poem_copy.txt"};
    std::string line {};
    int n {};
    
    if (!in_file) {
        std::cerr << "Error can't open file";
        return 1;
    }
    if (!out_file) {
        std::cerr << "Error can't create file";
        return 1;
    }
    while (std::getline(in_file, line)) {
        if (line == "")
            out_file << line << std::endl;
        else
            out_file << std::setw(10) << std::left << n++ << line << std::endl;
    }
    std::cout << "Success!" << std::endl;
    in_file.close();
    out_file.close();
    
    return 0;
}
