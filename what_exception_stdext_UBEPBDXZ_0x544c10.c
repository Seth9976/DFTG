// 函数名称: ?what@exception@stdext@@UBEPBDXZ
// 虚拟地址: 0x544c10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char const* const __fastcall?what@exception@stdext@@UBEPBDXZ(void* arg1)
{
    // 第一条实际指令: char* result = *(arg1 + 4)
    char* result = *(arg1 + 4)
    
    if (result != 0)
        return result
    
    return "Unknown exception"
}
