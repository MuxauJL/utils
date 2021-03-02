#ifndef MV_File_H_

#include <string>

#include <Windows.h>

std::string getExeFolder()
{
    CHAR path[MAX_PATH];
    if (GetModuleFileNameA(NULL, path, MAX_PATH) == 0)
    {
        return std::string();
    }
    std::string sExePath = path;
    return sExePath.substr(0, sExePath.find_last_of("\\/")) + "/";
}

std::wstring getExeFolderW()
{
    WCHAR path[MAX_PATH];
    if (GetModuleFileNameW(NULL, path, MAX_PATH) == 0)
    {
        return std::wstring();
    }
    std::wstring sExePath = path;
    return sExePath.substr(0, sExePath.find_last_of(L"\\/")) + L"/";
}

#endif // MV_File_H_
