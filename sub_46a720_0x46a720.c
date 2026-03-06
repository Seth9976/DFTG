// 函数名称: sub_46a720
// 虚拟地址: 0x46a720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_46a720(int32_t arg1, int32_t arg2, void** arg3, int32_t arg4)
{
    // 第一条实际指令: void** var_8 = arg3
    void** var_8 = arg3
    sub_4b2440(arg4, sub_46a500)
    void* result = data_6cfe4c
    
    if (result == 0)
        sub_489550(result, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(result + 0x834) != 0)
        result = sub_488450(sub_425d50()[0x3e], &var_8)
        int32_t ecx_2 = data_632820
        
        if (ecx_2 s< result)
            int32_t var_10_2 = 0xffffffff
            data_1511940 = &var_8[ecx_2 * 0xc]
            sub_4a8570(arg4)
            sub_439440()
            int32_t var_10_3 = 0xffffffff
            return sub_4a8570(arg4)
        
        if (data_1511940 != 0)
            int32_t var_10_1 = 0xffffffff
            return sub_4a8570(arg4)
    
    return result
}
