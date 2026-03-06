// 函数名称: sub_4cf0b0
// 虚拟地址: 0x4cf0b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4cf0b0(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t ecx = *(arg1 + 0xc)
    
    if (ecx != 0)
        int32_t* result = sub_4c2e40(ecx)
        sub_4ce680(result, arg1)
        return result
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "pDefMap->definitionSize != 0", 
        "d:\ax\trunk\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
