// 函数名称: sub_4ce680
// 虚拟地址: 0x4ce680
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_4ce680(int32_t* arg1, void* arg2))[0x4]
{
    // 第一条实际指令: int32_t* var_c = arg1
    int32_t* var_c = arg1
    void* eax = *(arg2 + 0xc)
    
    if (eax == 0)
        sub_489550(eax, &data_5b2591, "pDefMap->definitionSize != 0", 
            "d:\ax\trunk\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    uint32_t (* result)[0x4] = _memset(arg1, 0, eax)
    
    if (*(arg2 + 8) != 0)
        for (int32_t i = 0; i != 0xffffffff; )
            int32_t ecx_2 = i * 0xf
            i += 1
            void* edx = *(arg2 + 4) + (ecx_2 << 2)
            
            if (i s>= *(arg2 + 8))
                i = 0xffffffff
            
            result = sub_4ce430(0xffffffff, *(edx + 0xc), arg1, edx)
    
    return result
}
