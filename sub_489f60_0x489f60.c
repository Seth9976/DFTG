// 函数名称: sub_489f60
// 虚拟地址: 0x489f60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_489f60(char* arg1)
{
    // 第一条实际指令: char* ebx = arg1
    char* ebx = arg1
    char* eax = ebx
    void* edx = &eax[1]
    
    do
        arg1.b = *eax
        eax = &eax[1]
    while (arg1.b != 0)
    
    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, eax - edx + 1)
    sub_579300(GlobalLock(hMem), ebx, eax - edx + 1)
    GlobalUnlock(hMem)
    OpenClipboard(nullptr)
    EmptyClipboard()
    SetClipboardData(1, hMem)
    return CloseClipboard() __tailcall
}
