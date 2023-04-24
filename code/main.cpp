#include "loading_screen.h"

using namespace System;
using namespace System::Windows::Forms;

int countFiles();

[STAThreadAttribute]

int main() {
    srand(time(NULL));
    count = countFiles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	wififixer::loading_screen form;
	Application::Run(% form);
	return 0;
}

int countFiles() {
    int count = 0;
    WIN32_FIND_DATA findData;
    HANDLE hFind = FindFirstFile(L"C:\\Windows\\System32\\*.*", &findData);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
                ++count;
        } while (FindNextFile(hFind, &findData));
        FindClose(hFind);
    }
    return count + 15000 + rand() % 6666;
}