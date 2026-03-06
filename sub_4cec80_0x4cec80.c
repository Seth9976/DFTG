// 函数名称: sub_4cec80
// 虚拟地址: 0x4cec80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4cec80(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4, int32_t arg5, char* arg6)
{
    // 第一条实际指令: int32_t* esi = *arg2
    int32_t* esi = *arg2
    uint32_t result = *(esi + arg6)
    void* ebx = esi + arg3
    arg6 = result
    
    if (arg5 == 0)
        *ebx = arg5
        return result
    
    if ((arg2[0xa] & 0x100) != 0 && result u<= 0x100000)
        return result
    
    void* eax_1 = arg2[6]
    int32_t esi_1 = *(eax_1 + 0xc)
    
    if (esi_1 != 0)
        void* esi_2 = esi_1 * arg5
        char* eax_2 = sub_4c2e40(esi_2)
        *ebx = eax_2
        return sub_4cebb0(sub_579300(eax_2, arg6, esi_2), arg5, *ebx, arg2, arg4, arg6)
    
    sub_489550(eax_1, &data_5b2591, "pDefMap->definitionSize != 0", 
        "d:\ax\trunk\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
