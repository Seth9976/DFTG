// 函数名称: ___termconout
// 虚拟地址: 0x59776c
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___termconout()
{
    // 第一条实际指令: BOOL hObject = data_61f9a0
    BOOL hObject = data_61f9a0
    
    if (hObject != 0xffffffff && hObject != 0xfffffffe)
        return CloseHandle(hObject)
    
    return hObject
}
