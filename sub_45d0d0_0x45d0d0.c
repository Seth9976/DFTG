// 函数名称: sub_45d0d0
// 虚拟地址: 0x45d0d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_45d0d0()
{
    // 第一条实际指令: int32_t var_3c[0xc]
    int32_t var_3c[0xc]
    int32_t eax_1 = __security_cookie ^ &var_3c
    int32_t ebx
    ebx.b = 0
    int32_t i_1 = 0xd
    int32_t ecx
    void* result = sub_452b90(ecx) + 0x20
    int32_t i
    
    do
        int32_t ecx_1 = *result
        
        if (ecx_1 == 3 || ecx_1 == 4)
            *result = 2
            ebx.b = 1
        
        result += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (ebx.b != 0)
        sub_4c5670(data_126be28, &var_3c)
        result = sub_4c5920(&var_3c)
    
    @__security_check_cookie@4(eax_1 ^ &var_3c)
    return result
}
