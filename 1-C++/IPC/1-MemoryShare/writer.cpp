#include "SharedMemory.hpp"
#include <memory>

int main()
{
  
        std::unique_ptr<SharedMemory> writer= std::make_unique<WriteSection>("writer");
    writer->write_mem();
    

    return 0;


}