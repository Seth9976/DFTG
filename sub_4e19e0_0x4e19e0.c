// 函数名称: sub_4e19e0
// 虚拟地址: 0x4e19e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4e19e0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t result = arg4
    int32_t result = arg4
    int32_t i_1 = arg2
    char* edi = arg3
    
    if (i_1 != 0)
        int32_t i
        
        do
            char edx = *edi
            edi = &edi[1]
            result = result u>> 8 ^ *(((zx.d(edx) ^ zx.d(result.b)) << 2) + &data_5d2c60)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
