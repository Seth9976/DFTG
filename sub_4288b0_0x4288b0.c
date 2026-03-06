// 函数名称: sub_4288b0
// 虚拟地址: 0x4288b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4288b0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_14 = 0xffffffff
    int32_t var_14 = 0xffffffff
    sub_4a8570(arg3)
    int32_t eax = arg4[0x90]
    *((arg2 << 2) + &data_6d00c0) = eax
    sub_4a8930(eax, &data_62b4f0, arg3, arg4, arg2)
    int32_t i = 0
    void* result = sub_426fb0() + 0x20
    
    do
        if (*(result - 4) == 0x3e8 && *result == arg4[0x90])
            int32_t var_14_2 = arg2
            return sub_4a8570(arg3)
        
        i += 1
        result += 0x2c
    while (i s< 5)
    
    return result
}
