// 函数名称: sub_4ce0a0
// 虚拟地址: 0x4ce0a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4ce0a0(void* arg1)
{
    // 第一条实际指令: uint32_t result = *(arg1 + 0x10) - 1
    uint32_t result = *(arg1 + 0x10) - 1
    
    if (result u<= 0x10)
        result = zx.d(lookup_table_4ce0f8[result])
        
        switch (result)
            case 0
                result.b = 0
                return result
            case 2
                sub_489550(result, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\definition.cpp", 
                    0x38, "DefTypeIsDeepStructure")
                
                if (IsDebuggerPresent() != 1)
                    noreturn sub_489700() __tailcall
                
                breakpoint
    
    result.b = 1
    return result
}
