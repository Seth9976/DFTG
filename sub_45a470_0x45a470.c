// 函数名称: sub_45a470
// 虚拟地址: 0x45a470
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_45a470(void* arg1, void* arg2, void* arg3, uint32_t arg4, char arg5)
{
    // 第一条实际指令: bool cond:0 = *arg2 == 1
    bool cond:0 = *arg2 == 1
    *(arg2 + 0x21) = 0
    int32_t var_2c_1
    char const* const var_28_1
    char* ecx
    
    if (cond:0)
        int32_t ebx_1 = *(arg2 + 0x10)
        uint32_t result = *(arg2 + 0x8a8)
        uint32_t result_2 = result
        
        if (ebx_1 == 1 || ebx_1 == 2)
            goto label_45a511
        
        int32_t esi_1 = *(arg3 + (ebx_1 << 2) + 0x2b4)
        result = 0
        int32_t var_c_1 = 0
        
        if (esi_1 == 0)
            goto label_45a511
        
        uint32_t result_1
        
        while (true)
            result = sub_452d50(esi_1)
            result_1 = result
            
            if (esi_1 == result_2)
                break
            
            var_c_1 = esi_1
            esi_1 = *(result + 0x20)
            
            if (esi_1 == 0)
                goto label_45a511
        
        if (var_c_1 != 0)
            result = sub_452d50(var_c_1)
            *(result + 0x20) = *(result_1 + 0x20)
        label_45a511:
            
            if (ebx_1 == 4)
                result = sub_452cc0(*(arg2 + 0x1c))
                
                if (arg5 != 0)
                    return sub_45a020(result, arg2, result, arg5)
            else if (ebx_1 != 1 && ebx_1 != 2)
                result = arg4
                
                if (result != 0 && result != 2)
                    return sub_45a140(result, ebx_1, arg3, arg2, arg5)
            
            return result
        
        arg1 = arg2 + 8
        
        if (result == arg1)
            result = *(result + 0x20)
            *(arg3 + (ebx_1 << 2) + 0x2b4) = result
            goto label_45a511
        
        var_28_1 = "DieMoveRemove"
        var_2c_1 = 0x216e
        ecx = "&cur == &gfx.die"
    else
        var_28_1 = "GetRollD"
        var_2c_1 = 0xb38
        ecx = "gfx.type == ROLLGFX_DIE"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_2c_1, 
        var_28_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
