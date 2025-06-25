#include <iostream>
#include <string>
#include <cstdlib>

std::string getFileExtension(const std::string& filename) {

    size_t pos = filename.rfind('.');

    if (pos != std::string::npos) {

        return filename.substr(pos + 1);

    }

    return "";

}

int main(int argc, char* argv[]) {

    if (argc < 2) {

        std::cout << "\n\nUsage: compile <filename>\n\n";
        std::cout << "\nSupported file types:\n-------------------------------------------------------------\nC:       | .c \nC++:     | .cpp \nFORTRAN: | .f, .for, .ftn, .f77, .f90, .f95, .f03, .f08, .f18 \nRust:    | .rs \n-------------------------------------------------------------\n\nNeed help? https://github.com/HudsonGageTaylor/compile\n\n";

        return 1;

    }

    // VARIABLES //
    char yn;
    std::string outputName, gppCommand, gccCommand, rustcCommand, gfortranCommand;
    std::string filename = argv[1];
    std::string extension = getFileExtension(filename);
    ///////////////

    if (extension == "cpp") {

        std::cout << "Compile with g++? (y/n): ";
        std::cin >> yn;

        if (yn == 'y') {

            std::cout << "\nEnter name for output file (without extension. File will be saved to current dir): ";
            std::cin >> outputName;

            gppCommand = "g++ " + filename + " -o " + outputName + ".exe";

            system(gppCommand.c_str());

        }

        else {

            return 0;

        }

    }

    else if (extension == "c") {

        std::cout << "Compile with gcc? (y/n):";
        std::cin >> yn;

        if (yn == 'y') {

            std::cout << "\nEnter name for output file (without extension. File will be saved to current dir): ";
            std::cin >> outputName;

            gccCommand = "gcc " + filename + " -o " + outputName + ".exe";

            system(gccCommand.c_str());

        }

        else {

            return 0;

        }

    }

    else if (extension == "rs") {

        std::cout << "Compile with rustc? (y/n): ";
        std::cin >> yn;

        if (yn == 'y') {

            std::cout << "\nEnter name for output file (without extension. File will be saved to current dir): ";
            std::cin >> outputName;

            rustcCommand = "rustc " + filename + " -o " + outputName + ".exe";

            system(rustcCommand.c_str());

        }

        else {

            return 0;

        }

    }
 
    else if (extension == "f" || extension == "for" || extension == "ftn" || extension == "f77" || extension == "f90" || extension == "f95" || extension == "f03" || extension == "f08" || extension == "f18") {
 
        std::cout << "Compile with gfortran? (y/n): ";
        std::cin >> yn;

        if (yn == 'y') {

            std::cout << "\nEnter name for output file (without extension. File will be saved to current dir): ";
            std::cin >> outputName;

            gfortranCommand = "gfortran " + filename + " -o " + outputName + ".exe";

            system(gfortranCommand.c_str());

        }

        else {

            return 0;

        }

    }

    else {

        std::cout << "\n\nUnknown file type!";
        std::cout << "\nSupported file types:\n-------------------------------------------------------------\nC:       | .c \nC++:     | .cpp \nFORTRAN: | .f, .for, .ftn, .f77, .f90, .f95, .f03, .f08, .f18 \nRust:    | .rs \n-------------------------------------------------------------\n\nNeed help? https://github.com/HudsonGageTaylor/compile";
        return 0;
    }

    return 0;

}