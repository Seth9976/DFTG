// 函数名称: sub_4c62a0
// 虚拟地址: 0x4c62a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4c62a0(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x10)
    int32_t result = *(arg1 + 0x10)
    
    if (result == 1 || result == 4 || result == 0x10 || result == 2 || result == 0xe || result == 0xa
            || result == 3)
        return result
    
    sub_489550(result, "Unable to fixup data type", "HaltMsg", "d:\ax\trunk\ax2017\engine\defbin.cpp", 
        0x147, "DefBinShallowDefTypeFixup")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
