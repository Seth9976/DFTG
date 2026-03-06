// 函数名称: sub_524d20
// 虚拟地址: 0x524d20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_524d20(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t edi = *(arg3 + 4)
    int32_t edi = *(arg3 + 4)
    
    if (edi == 0)
        edi = arg4[4]
    
    *arg2 = arg4[1]
    arg2[1] = arg4[2]
    arg2[4] = 1
    arg2[0xf] = 1
    int128_t* eax_3 = sub_4c2e40(0x10)
    *eax_3 = zx.o(0)
    arg2[0x12] = eax_3
    int32_t edx = arg2[1]
    int32_t ecx = *arg2
    arg2[5] = 8
    arg2[6] = edi
    arg2[7] = 0
    int32_t eax_4 = sub_5235a0(eax_3, edx, ecx, edi)
    int32_t* ecx_1 = arg2[0x12]
    *ecx_1 = eax_4
    int32_t edi_1
    
    if (arg4[4] != edi || arg6 == 2)
        void* eax_6 = sub_4c2e40(eax_4)
        void* var_1c = eax_6
        ecx_1[2] = eax_6
        int32_t ecx_4 = *arg2
        int32_t var_18_1 = ecx_4
        int32_t var_14_1 = arg2[1]
        int32_t var_10_1 = sub_5234e0(ecx_4, edi)
        int32_t var_c_1 = edi
        char* eax_9
        int32_t ecx_6
        eax_9, ecx_6 = sub_523b10(arg4, &var_1c)
        edi_1 = arg5
        
        if (arg6 != 2)
            int32_t var_34_2 = edi_1
            sub_523dc0(eax_9, &var_1c, ecx_6)
        
        int32_t eax_10 = *arg4
        
        if (eax_10 != 0)
            _aligned_free_base(eax_10)
        
        *arg4 = 0
    else
        int32_t eax_5 = *arg4
        edi_1 = arg5
        int32_t var_34_1 = edi_1
        ecx_1[2] = eax_5
        sub_523dc0(eax_5, arg4, ecx_1)
    
    if (*(arg3 + 8) == 0)
        int32_t var_34_4 = edi_1
        sub_4892e0("Autogeneration of mipmaps is not implemented for %s")
    
    void* result
    result.b = 1
    return result
}
