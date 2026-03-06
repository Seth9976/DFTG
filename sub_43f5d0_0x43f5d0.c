// 函数名称: sub_43f5d0
// 虚拟地址: 0x43f5d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_43f5d0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int64_t* arg9, int32_t* arg10, int32_t* arg11)
{
    // 第一条实际指令: int32_t eax = arg7
    int32_t eax = arg7
    int32_t esi = arg8
    int32_t ebx = arg2
    int32_t edx = arg5
    int32_t i = arg6
    int32_t var_8 = ebx
    int32_t ecx
    int32_t var_c = ecx
    arg6 = eax
    
    if (i != 0xb)
        do
            eax = sub_43f5d0(arg3, arg4, edx, i + 1, eax, esi, arg9, arg10, arg11)
            edx = arg5
            int32_t ecx_1 = *(edx + (i << 2))
            
            if (ecx_1 == 0)
                return eax
            
            if (arg6 s<= 0)
                return arg6
            
            esi |= 1 << (i u% 0x20)
            eax = arg6 - ecx_1
            ecx = var_c
            i += 1
            arg6 = eax
        while (i != 0xb)
        
        ebx = var_8
    
    if (eax s<= 0)
        if (eax == 0)
            return sub_43f470(eax, ebx, ecx, arg3, arg4, esi, 0, arg9, arg10, arg11)
        
        int32_t i_1 = 0
        int32_t ebx_2 = 1
        
        do
            if ((esi & ebx_2) != 0)
                int32_t eax_2 = neg.d(eax)
                
                if (*(edx + (i_1 << 2)) s> eax_2)
                    sub_43f470(eax_2, var_8, ecx, arg3, arg4, esi, i_1, arg9, arg10, arg11)
                
                eax = arg6
            
            edx = arg5
            i_1 += 1
            ecx = var_c
            ebx_2 = rol.d(ebx_2, 1)
        while (i_1 s< 0xb)
    
    return eax
}
