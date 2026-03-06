// 函数名称: $LN14
// 虚拟地址: 0x595c3e
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void$LN14(void* arg1 @ ebp, int32_t* arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: if (*(arg1 - 0x20) == 0)
    if (*(arg1 - 0x20) == 0)
        return 
    
    if (arg3 != 0)
        int32_t ecx_1 = *arg2
        int32_t ecx_3 = (ecx_1 & 0x3f) * 0x30
        int32_t eax_3 = (&data_6cfb08)[ecx_1 s>> 6]
        *(eax_3 + ecx_3 + 0x28) &= 0xfe
    
    ___acrt_lowio_unlock_fh(*arg2)
}
