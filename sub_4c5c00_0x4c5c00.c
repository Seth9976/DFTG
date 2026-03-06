// 函数名称: sub_4c5c00
// 虚拟地址: 0x4c5c00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4c5c00(int32_t arg1 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_38
    int32_t* ecx
    sub_4c5670(ecx, &var_38)
    int16_t var_24 = 0x101
    int32_t var_30 = 0
    int32_t result = sub_4c5920(&var_38)
    void* esi = data_114e838
    
    if (result != 0)
        uint32_t eax_2 = zx.d(result.w)
        
        if (eax_2 u< *(esi + 4))
            void* ecx_3 = eax_2 * 0x64 + *esi
            
            if (*(ecx_3 + 0x60) == result)
                *(ecx_3 + 0x2c) = *(data_114e818 + 0x28)
                *(ecx_3 + 0x30) = arg1
                *(ecx_3 + 0x3c) = 0
                *(ecx_3 + 0x34) = 0
                *(ecx_3 + 0x38) = 0x3f800000
                *(ecx_3 + 0x28) = 2
                *(ecx_3 + 0x44) = 0x3f19999a
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
