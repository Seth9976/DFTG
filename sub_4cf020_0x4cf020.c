// 函数名称: sub_4cf020
// 虚拟地址: 0x4cf020
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4cf020(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg2 + 0xc)
    int32_t ecx = *(arg2 + 0xc)
    
    if (ecx != 0)
        char* result = sub_4c2e40(ecx)
        sub_4cef80(result, result, arg1, arg2)
        return result
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "pDefMap->definitionSize != 0", 
        "d:\ax\trunk\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
