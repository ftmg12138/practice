#include <iostream>
#include <windows.h>
#include <string>

bool searchAndOpenFile(const std::string& directory, const std::string& targetFileName) {
    WIN32_FIND_DATA findFileData;
    HANDLE hFind = INVALID_HANDLE_VALUE;
    std::string searchPath = directory + "\\*";  // 搜索路径

    hFind = FindFirstFile(searchPath.c_str(), &findFileData);
    if (hFind == INVALID_HANDLE_VALUE) {
        std::cout << "Failed to access directory: " << directory << std::endl;
        return false;
    }

    bool found = false;
    do {
        std::string currentFileName = findFileData.cFileName;
        if (findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
            if (currentFileName != "." && currentFileName != "..") {
                // 递归搜索子目录
                found = searchAndOpenFile(directory + "\\" + currentFileName, targetFileName);
                if (found) break; // 如果在子目录中找到文件，则停止搜索
            }
        } else {
            if (currentFileName == targetFileName) {
                std::cout << "Found file: " << directory << "\\" << currentFileName << std::endl;
                std::string command = "code \"\" \"" + directory + "\\" + currentFileName + "\"";
                std::system(command.c_str());
                found = true;
                break;
            }
        }
    } while (FindNextFile(hFind, &findFileData) != 0);

    FindClose(hFind);
    return found;
}

int main() {
    std::string rootPath = "D:\\aaaa\\c_code";
    std::string problemNumber;
    std::string targetFileName;

    while (true) {
        std::cout << "Enter problem number: ";
        std::cin >> problemNumber;
        targetFileName = problemNumber + ".cpp";  // 组合文件名
        bool found = searchAndOpenFile(rootPath, targetFileName);

        if (!found) {
            std::cout << "File not found." << std::endl;
        }

        std::cout << "Press enter to continue or 'q' to quit, 'r' to restart..." << std::endl;
        std::cin.ignore();  // 清除之前的输入缓冲区
        char nextAction = std::cin.get();
        if (nextAction == 'q') {
            break;
        } else if (nextAction == 'r') {
            continue;
        }
    }

    return 0;
}
