#include "framework.h"

DWORD InputThread(LPVOID)
{
    while (true)
    {
        if (GetAsyncKeyState(VK_F6) & 0x01)
        {
            UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"startaircraft", nullptr);
        }
    }
}

DWORD Initialize(LPVOID)
{
    AllocConsole();
    FILE* File;
    freopen_s(&File, "CONOUT$", "w+", stdout);

    MH_Initialize();

    Sleep(5000);

    TArray<ULocalPlayer*>& LocalPlayers = UWorld::GetWorld()->OwningGameInstance->LocalPlayers;
    LocalPlayers[0]->PlayerController->SwitchLevel(L"Athena_Terrain");
    LocalPlayers.Remove(0);
    LocalPlayers.Free();

    for (uintptr_t ByteOffset : GOffsets::BytesToPatch)
    {
        Memory::PatchByte(ByteOffset);
    }

    *(bool*)Memory::GetAddress(GOffsets::GIsClient) = false;

    Hooks::Server::Initialize();
    Hooks::GameMode::Initialize();
    Hooks::PlayerController::Initialize();
    Hooks::Pawn::Initialize();
    Hooks::Abilities::Initialize();

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReason, LPVOID lpReserved)
{
    switch (ulReason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Initialize, 0, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

