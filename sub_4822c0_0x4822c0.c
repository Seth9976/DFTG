// 函数名称: sub_4822c0
// 虚拟地址: 0x4822c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4822c0(int32_t arg1, int32_t** arg2, int32_t* arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t** ebx = arg4
    int32_t** ebx = arg4
    int32_t ecx_2 = (ebx - arg3) s>> 2
    int32_t* edx = *arg3
    int32_t* eax_37
    
    if (ecx_2 s<= 0x28)
        int32_t* var_2c_12 = *arg2
        arg4 = arg5
        
        if (sub_45f7a0(&arg4, var_2c_12, edx) != 0)
            int32_t* ecx_30 = *arg2
            *arg2 = *arg3
            *arg3 = ecx_30
        
        eax_37 = sub_45f7a0(&arg4, *ebx, *arg2)
        
        if (eax_37.b != 0)
            int32_t* ecx_32 = *ebx
            *ebx = *arg2
            *arg2 = ecx_32
            eax_37 = sub_45f7a0(&arg4, ecx_32, *arg3)
            
            if (eax_37.b != 0)
                int32_t* ecx_34 = *arg2
                eax_37 = *arg3
                *arg2 = eax_37
                *arg3 = ecx_34
    else
        int32_t** var_10 = arg5
        int32_t ecx_4 = (ecx_2 + 1) s>> 3
        int32_t eax_2 = ecx_4 << 2
        
        if (sub_45f7a0(&var_10, arg3[ecx_4], edx) != 0)
            int32_t ecx_6 = arg3[ecx_4]
            arg3[ecx_4] = *arg3
            *arg3 = ecx_6
        
        int32_t edx_2 = eax_2
        
        if (sub_45f7a0(&var_10, arg3[ecx_4 * 2], arg3[ecx_4]) != 0)
            int32_t* ecx_8 = arg3[ecx_4 * 2]
            arg3[ecx_4 * 2] = *(edx_2 + arg3)
            *(edx_2 + arg3) = ecx_8
            char eax_9 = sub_45f7a0(&var_10, ecx_8, *arg3)
            ebx = arg4
            edx_2 = eax_2
            
            if (eax_9 != 0)
                int32_t ecx_10 = *(edx_2 + arg3)
                *(edx_2 + arg3) = *arg3
                *arg3 = ecx_10
        
        var_10 = arg5
        void* eax_13 = arg2 - edx_2
        void* var_14 = eax_13
        
        if (sub_45f7a0(&var_10, *arg2, *eax_13) != 0)
            void* edx_3 = var_14
            int32_t* ecx_12 = *arg2
            *arg2 = *edx_3
            *edx_3 = ecx_12
        
        if (sub_45f7a0(&var_10, arg2[ecx_4], *arg2) != 0)
            int32_t* ecx_14 = arg2[ecx_4]
            arg2[ecx_4] = *arg2
            void* eax_19 = var_14
            *arg2 = ecx_14
            
            if (sub_45f7a0(&var_10, ecx_14, *eax_19) != 0)
                void* edx_5 = var_14
                int32_t* ecx_16 = *arg2
                *arg2 = *edx_5
                *edx_5 = ecx_16
        
        int32_t** ebx_2 = ebx - eax_2
        var_14 = arg5
        int32_t** eax_24 = arg4 - (ecx_4 << 3)
        var_10 = eax_24
        
        if (sub_45f7a0(&var_14, *ebx_2, *eax_24) != 0)
            int32_t** edx_6 = var_10
            int32_t* ecx_18 = *ebx_2
            *ebx_2 = *edx_6
            *edx_6 = ecx_18
        
        if (sub_45f7a0(&var_14, *arg4, *ebx_2) != 0)
            void* edx_7 = arg4
            int32_t* ecx_20 = *edx_7
            *edx_7 = *ebx_2
            int32_t** eax_30 = var_10
            *ebx_2 = ecx_20
            
            if (sub_45f7a0(&var_14, ecx_20, *eax_30) != 0)
                int32_t** edx_8 = var_10
                int32_t* ecx_22 = *ebx_2
                *ebx_2 = *edx_8
                *edx_8 = ecx_22
        
        arg4 = arg5
        
        if (sub_45f7a0(&arg4, *arg2, arg3[ecx_4]) != 0)
            int32_t* ecx_24 = *arg2
            *arg2 = arg3[ecx_4]
            arg3[ecx_4] = ecx_24
        
        eax_37 = sub_45f7a0(&arg4, *ebx_2, *arg2)
        
        if (eax_37.b != 0)
            int32_t* ecx_26 = *ebx_2
            *ebx_2 = *arg2
            int32_t* ebx_3 = eax_2
            *arg2 = ecx_26
            eax_37 = sub_45f7a0(&arg4, ecx_26, *(ebx_3 + arg3))
            
            if (eax_37.b != 0)
                int32_t* ecx_28 = *arg2
                int32_t* eax_39 = *(ebx_3 + arg3)
                *arg2 = eax_39
                *(ebx_3 + arg3) = ecx_28
                return eax_39
    
    return eax_37
}
