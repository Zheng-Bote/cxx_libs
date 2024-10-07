/**
 * @file main.cpp
 * @author ZHENG Bote (robert.hase-zheng.net)
 * @brief qt6 C++20 console app to test filesystem library
 * @version 0.1.0
 * @date 2024-10-06
 *
 * @copyright Copyright (c) ZHENG Robert 2024
 *
 */

#include <filesystem>
#include <format>
#include <fstream>
// #include <gsl/gsl>
#include <iostream>

#include "configured/rz_config.h"
#include "include/rz_filesystem.h"

/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{

    // auto temp = std::filesystem::temp_directory_path() / "example.txt";
    // std::ofstream(temp.c_str()) << "Hello, World!";
    // auto ftime = std::filesystem::last_write_time(temp);
    // std::cout << std::format("File write time is {0:%R} on {0:%F}\n", ftime);
    // std::cout << ftime << std::endl;
    // std::filesystem::remove(temp);

    std::cout << PROG_NAME << " v" << PROG_VERSION << " " << PROG_HOMEPAGE << "\n"
              << std::endl;

    Filesystem fs;
    // fs->createDirectory("/tmp/test");
    // std::filesystem::path temp_dir = std::filesystem::temp_directory_path();
    // fs.createDirectories(temp_dir.append("test/test1/test2/test3"));
    // fs->removeDirectory("/tmp/test/test1/test2");
    // fs->removeDirectories("/tmp/test");
    // fs.listDirectory("/tmp");
    // fs.listDirectories("/tmp", 1);
    // fs.copyFile("qt_filesystem", "/tmp/test/test1/test2/test3/rz__filesystem");
    // fs.copyRecursive(".", "/tmp/test");
    // fs.showDirectoryTree("/tmp/test");
    // fs.isDirectory("/tmp");
    // fs.isFile("qt_filesysteme");
    // fs.getAbsolutePath(".");
    // fs.getRelativePath("/tmp");
    // fs.calculateDirectorySize(".");
    // fs.printDiskSpaceInfo("/home", 20);
    std::cout << "perm: " << fs.getFilePermission("./qt_filesystem") << std::endl;
    ;

    EXIT_SUCCESS;
}
