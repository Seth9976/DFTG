// 函数名称: sub_4cf110
// 虚拟地址: 0x4cf110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __fastcallsub_4cf110(void* arg1)
{
    // 第一条实际指令: int128_t* result = sub_4c2e40(0x10)
    int128_t* result = sub_4c2e40(0x10)
    *result = zx.o(0)
    int32_t ecx = *(arg1 + 0xc)
    
    if (ecx != 0)
        int32_t* eax = sub_4c2e40(ecx)
        sub_4ce680(eax, arg1)
        *result = eax
        *(result + 0xc) = arg1
        return result
    
    sub_489550(result, &data_5b2591, "pDefMap->definitionSize != 0", 
        "d:\ax\trunk\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
