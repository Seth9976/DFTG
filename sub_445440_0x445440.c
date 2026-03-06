// 函数名称: sub_445440
// 虚拟地址: 0x445440
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_445440(int32_t arg1, int32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: void* eax_1 = arg2 * 0x1bc
    void* eax_1 = arg2 * 0x1bc
    char* i = 0x2c
    void* edx = eax_1 + arg3
    void* var_10 = edx
    int32_t* ecx = arg3 + ((arg4 * 3 + 0x231) << 2)
    int32_t* var_c = ecx
    int32_t result
    
    do
        result = *ecx
        
        if (*(i + result - 8) == 0)
            break
        
        result = 0
        char* ecx_1 = edx + 0x24
        
        while (true)
            if (result s>= 0x28)
                sub_444530("Could not find empty die spot!\n")
                noreturn
            
            if (*ecx_1 == 0)
                break
            
            result += 1
            ecx_1 = &ecx_1[8]
        
        if (result s>= *(edx + 0x164))
            *(edx + 0x164) = result + 1
        
        int32_t ebx_1 = result << 3
        int32_t ecx_4
        ecx_4.b = i[*var_c - 8]
        *(ebx_1 + edx + 0x24) = ecx_4.b
        int32_t ecx_6
        ecx_6.b = i[*var_c]
        *(ebx_1 + edx + 0x25) = ecx_6.b
        uint32_t var_34_1
        uint32_t var_30_1
        int32_t edx_2
        
        if (*(i + *var_c) == 3)
            void* ecx_10 = eax_1 + ebx_1
            *(ecx_10 + arg3 + 0x2a) = arg4.b
            edx = var_10
            *(ecx_10 + arg3 + 0x25) = 3
            ecx = var_c
            ecx[2].b += 1
            
            if (*(arg3 + 0x10) == 0)
                edx_2 = 0x2b
                int32_t var_2c_1 = 0
                var_30_1 = zx.d(*(ebx_1 + edx + 0x24))
                var_34_1 = arg4
                goto label_445537
        else if (*(arg3 + 0x10) != 0)
            ecx = var_c
        else
            edx_2 = 0x2a
            int32_t var_2c_2 = 0
            var_30_1 = zx.d(ecx_6.b)
            var_34_1 = zx.d(ecx_4.b)
        label_445537:
            sub_444430(result, edx_2, arg3, arg2, result, var_34_1, var_30_1, 0)
            uint32_t eax_6 = zx.d(*(ebx_1 + var_10 + 0x24))
            result = sub_444430(eax_6, 0x14, arg3, arg2, arg4, 4, eax_6, 1)
            edx = var_10
            ecx = var_c
        i = &i[4]
    while (i s< 0x34)
    
    return result
}
