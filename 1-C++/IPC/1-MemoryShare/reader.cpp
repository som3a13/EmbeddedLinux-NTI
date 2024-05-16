#include "SharedMemory.hpp"
#include <memory>

int main()
{
    std::unique_ptr<SharedMemory> reader= std::make_unique<ReadSection>("HMI_ECU2.hex");
    
    if (reader->read_mem() != 0) {
        std::cout << "Failed to read from shared memory.";

    } else {
        std::cout<< "Data successfully read from shared memory.";

    }
    return 0;


}