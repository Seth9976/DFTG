// 函数名称: sub_4eb780
// 虚拟地址: 0x4eb780
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_4eb780(void* arg1, int32_t arg2))[0x4]
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t var_14
    uint32_t (* result)[0x4]
    char const* const ecx
    
    if (arg2 s< 0x80)
        int32_t ecx_1 = *(arg1 + (arg2 << 2) + 0x7c)
        
        if (ecx_1 == 0)
            result = sub_4eea70()
            *(arg1 + (arg2 << 2) + 0x7c) = (*result)[0x133]
        else
            uint32_t eax = zx.d(ecx_1.w)
            
            if (eax u>= data_6cacf8)
                result = sub_4eea70()
                *(arg1 + (arg2 << 2) + 0x7c) = (*result)[0x133]
            else
                result = eax * 0x4d0 + data_6cacf4
                
                if ((*result)[0x133] != ecx_1)
                    result = sub_4eea70()
                    *(arg1 + (arg2 << 2) + 0x7c) = (*result)[0x133]
        
        *(result + 0x3c) = *(arg1 + 0x3c)
        *(result + 0x4c) = *(arg1 + 0x4c)
        
        if (not((*result)[0xf] f<= 0f))
            return result
        
        char const* const var_10_1 = "FabSubstate"
        var_14 = 0x1a3
        ecx = "substate->transform.t.s > 0"
    else
        char const* const var_10 = "FabSubstate"
        var_14 = 0x197
        ecx = "i < 128"
    
    sub_489550(result, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\fabdef.cpp", var_14, "FabSubstate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
