#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <winbase.h>
#include <fstream>
#include <Lmcons.h>
#pragma comment(lib, "user32") 
#pragma comment(lib, "Advapi32")
#pragma comment(lib, "winmm")

extern bool _form1_opened = false;
extern int count = 0;
extern bool cookie_did = false, password_did = false, info_did = false, paypal_did = false, blocking_did = false, bios_did = false;