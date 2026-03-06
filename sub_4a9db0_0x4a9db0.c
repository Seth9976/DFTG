// 函数名称: sub_4a9db0
// 虚拟地址: 0x4a9db0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4a9db0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* esi = arg4
    int32_t* esi = arg4
    int32_t* var_14 = esi
    int32_t* result =
        sub_4f0e70(sub_4f0a90(arg1, arg3, &data_6218dc, arg2), arg3, &data_6218dc, data_12baca4, arg2)
    int32_t edx_2 = 0xc
    
    while (*result == *esi)
        result = &result[1]
        esi = &esi[1]
        int32_t temp0_1 = edx_2
        edx_2 -= 4
        
        if (temp0_1 u< 4)
            return result
    
    sub_489550(result, &data_5b2591, "memcmp(val, &value, sizeof(value)) == 0", 
        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2421, "AssignPropertyRect")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
