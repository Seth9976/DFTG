// 函数名称: sub_4ce110
// 虚拟地址: 0x4ce110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4ce110(void* arg1)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x10)
    int32_t ecx = *(arg1 + 0x10)
    uint32_t result = ecx - 1
    
    if (result u> 0x2a)
    label_4ce12c:
        
        if (ecx s<= 0)
            result.b = 0
            return result
        
        if (ecx s>= 0x12)
            result.b = 0
            return result
        
        sub_489550(result, &data_5b2591, "!DefTypeIsBuiltIn(pDefMap)", 
            "d:\ax\trunk\ax2017\engine\definition.cpp", 0x65, "DefTypeCanBeInArray")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    result = zx.d(lookup_table_4ce174[result])
    
    switch (result)
        case 0
            result.b = 1
            return result
        case 1
            result.b = 0
            return result
        case 2
            goto label_4ce12c
}
