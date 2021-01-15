#ifndef CONFIG_H_
#define CONFIG_H_
#include <string>
#include <vector>
#include <iostream>

namespace Config
{
    static const int age = 21;
    static const std::string nane= "zhebi";
    static const int wife = 4;
    static const int wifeags[] = {17,18,19,20};

    static const std::vector<std::string> names = {
    "BG",
    "beef",
    "pan",
    "pot",
    };

    const void add()
    {
        std::cout<<" Finished this files."<<std::endl;
    }
    static const float size = 36.0;

} 
#endif