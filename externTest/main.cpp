/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief  externTest 中执行 $ g++ main.cpp support.cpp -o write 
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
extern void write_extern();
extern void write_extern_b();

int count;

int main()
{
    count = 10;
    write_extern();
    write_extern_b();
    return 0;
}

