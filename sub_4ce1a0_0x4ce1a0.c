// 函数名称: sub_4ce1a0
// 虚拟地址: 0x4ce1a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4ce1a0(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0xc)
    int32_t result = *(arg1 + 0xc)
    
    if (result != 0)
        return result
    
    sub_489550(result, &data_5b2591, "pDefMap->definitionSize != 0", 
        "d:\ax\trunk\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
