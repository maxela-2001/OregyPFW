#include "main.h"
#include "vcl.h"

// a initialize exported function, when the plugin loaded it will be executed.
//tid is thread id.
void DLL_EXPORT __stdcall init(int tid)
{
  return;
}

// a uninitialize exported function, when the plugin unloaded it will be executed.
//tid is thread id.
void DLL_EXPORT __stdcall uninit(int tid)
{
  return;
}

// a log recieve exported function
void DLL_EXPORT __stdcall recvLog(int tid, const LPCSTR log)
{
  MessageBoxA(0, log, "PFW Plugin Templete", MB_OK | MB_ICONINFORMATION);
}

extern "C" DLL_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}
