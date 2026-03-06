// 函数名称: sub_4824f0
// 虚拟地址: 0x4824f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4824f0(int32_t arg1, void* arg2, int32_t arg3, void* arg4, int32_t** arg5)
{
    // 第一条实际指令: void* esi = arg2
    void* esi = arg2
    void* edx = arg4
    void* ecx = esi
    void* var_8 = ecx
    void* edi = esi
    int32_t eax_1 = (edx - 1) s>> 1
    int32_t var_c = eax_1
    void* arg_c
    
    if (esi s< eax_1)
        do
            int32_t* var_1c_1 = *(arg3 + (edi << 3) + 4)
            edi = (edi << 1) + 2
            
            if (sub_45f7a0(&arg_c, *(arg3 + (edi << 2)), var_1c_1) != 0)
                edi -= 1
            
            *(arg3 + (esi << 2)) = *(arg3 + (edi << 2))
            esi = edi
            eax_1 = var_c
        while (edi s< eax_1)
        
        ecx = var_8
        edx = arg4
    
    if (edi == eax_1 && (edx.b & 1) == 0)
        *(arg3 + (esi << 2)) = *(arg3 + (edx << 2) - 4)
        esi = edx - 1
    
    arg4 = arg_c
    
    if (ecx s< esi)
        int32_t edi_2
        
        do
            edi_2 = (esi - 1) s>> 1
            
            if (sub_45f7a0(&arg4, *(arg3 + (edi_2 << 2)), *arg5) == 0)
                break
            
            *(arg3 + (esi << 2)) = *(arg3 + (edi_2 << 2))
            esi = edi_2
        while (var_8 s< edi_2)
    
    int32_t* result = *arg5
    *(arg3 + (esi << 2)) = result
    return result
}
