#include "Internal.h"

#include "Player.h"

DWORD WINAPI HackThread(HMODULE hModule)
{
    AllocConsole();
    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);

    LocalPlayer* localPlayer = LocalPlayer::Get();

    while (!GetAsyncKeyState(VK_ESCAPE))
    {
        Player* closestEnemy = localPlayer->GetClosestEnemy();

        if (closestEnemy != NULL)
        {
            std::cout << "aim\n";
            localPlayer->AimAt(closestEnemy->GetBonePos(HEAD));
        }

        Sleep(1);
    }

    std::cout << "Free\n";
    
    FreeLibraryAndExitThread(hModule, 0);
    fclose((FILE*)stdout);
    FreeConsole();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)HackThread, hModule, 0, 0));
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}