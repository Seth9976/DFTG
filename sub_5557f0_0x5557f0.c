// 函数名称: sub_5557f0
// 虚拟地址: 0x5557f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcallsub_5557f0(HWND arg1, int32_t arg2, struct ITEMIDLIST* arg3, LPARAM arg4)
{
    // 第一条实际指令: if (arg2 == 1)
    if (arg2 == 1)
        SendMessageA(arg1, 0x466, 1, arg4)
    else if (arg2 == 2 && SHGetPathFromIDListA(arg3, &data_15169d0) != 0)
        SendMessageA(arg1, 0x464, 0, &data_15169d0)
    
    return 0
}
