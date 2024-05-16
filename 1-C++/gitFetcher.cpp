#include <cstdlib>
#include <iostream>



std::string repo_name(const char * repoName)
{
    return  "https://github.com/som3a13/" + std::string(repoName) + ".git";
}


int main(int argc, const char** argv) {
    std::string repoName="Test2Fetch";
    std::string command = "git clone " + repo_name(argv[1]);
        int result = system(command.c_str());

    if (result != 0) {
        std::cerr << "Failed to clone repository." << std::endl;
        return 1; // Return an error code
    }

    std::cout << "Repository cloned successfully." << std::endl;
    return 0;
}

