#include <iostream>

struct CPU
{
    double frequency;
    int cores; // physical cores
};

struct GPU
{
    int VRAM;
    int bus;
    double clock;
};

enum class RAMType
{
    DDR4,
    DDR5,
};

struct RAM
{
    double frequency;
    int capacity;
    RAMType type;
};

struct Computer
{
    CPU cpu;
    GPU gpu;
    RAM ram;
};

struct PC // 20 bytes
{
    char* cpu{};
    char* gpu{};
    int ram{};
};

struct PC2 // 68 bytes
{
    char cpu[32]{};
    char gpu[32]{};
    int ram{};
};

void fill_PC(PC2* computer, const char* cpu, const char* gpu, int ram)
{
    strcpy_s(computer->cpu, 32, cpu);
    strcpy_s(computer->gpu, 32, gpu);
    computer->ram = ram;
}

void fill_PC(PC* computer, const char* cpu, const char* gpu, int ram)
{
    computer->cpu = new char[32] {};

    strcpy_s(computer->cpu, 32, cpu);

    computer->gpu = new char[32] {};

    strcpy_s(computer->gpu, 32, gpu);

    computer->ram = ram;
}

void free_PC(PC* computers, size_t count)
{
    for (size_t i = 0; i < count; ++i)
    {
        delete[] computers[i].cpu;
        delete[] computers[i].gpu;
    }

    delete[] computers;
}

void print_PCs(PC* computers, size_t count)
{
    for (size_t i = 0; i < count; ++i)
    {
        std::cout << "#" << i + 1 << ":\n";
        std::cout << "cpu = " << computers[i].cpu << '\n';
        std::cout << "gpu = " << computers[i].gpu << '\n';
        std::cout << "ram = " << computers[i].ram << '\n';
    }
}

struct Object
{
    void* data;
    int size;
};

struct Image
{
    void* data;
    int image_size;
};

struct Main
{
    Object obj;
    Image cat;
};

int main()
{
    //{
    //    // CRUD
    //// CREATE
    //// READ
    //// UPDATE
    //// DELETE
    //    PC* computers = new PC[3]; // 60 + (64 * 3) = 252

    //    char buffer[32];

    //    std::cin.getline(buffer, 32);


    //    fill_PC(computers + 0, buffer, "Nvidia RTX 3070Ti", 16);
    //    fill_PC(computers + 1, "Intel i7-12700", "Nvidia RTX 4070Ti", 32);
    //    fill_PC(computers + 2, "Intel i5-10600", "Nvidia RTX 3060", 8);

    //    computers[0].ram = 32;

    //    print_PCs(computers, 3);

    //    free_PC(computers, 3);
    //}
    
}