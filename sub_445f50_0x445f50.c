// 函数名称: sub_445f50
// 虚拟地址: 0x445f50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_445f50(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: void* result = arg2 * 0x1bc
    void* result = arg2 * 0x1bc
    char* esi = arg4
    void* result_1 = result
    void* ebx = result + arg3
    arg4 = ebx
    
    while (*esi != 0)
        result = nullptr
        char* ecx = ebx + 0x24
        
        while (true)
            if (result s>= 0x28)
                sub_444530("Could not find empty die spot!\n")
                noreturn
            
            if (*ecx == 0)
                break
            
            result += 1
            ecx = &ecx[8]
        
        if (result s>= *(ebx + 0x164))
            *(ebx + 0x164) = result + 1
        
        *(ebx + (result << 3) + 0x24) = *esi
        *(ebx + (result << 3) + 0x25) = esi[8]
        *(ebx + (result << 3) + 0x26) = esi[4]
        int32_t ecx_5 = *esi
        int32_t ecx_6 = *(esi + 4)
        *(ebx + (result << 3) + 0x2b) = 8
        *(ebx + (result << 3) + 0x28) = *(((ecx_6 + ecx_5 * 6) << 2) + &data_5b5040)
        void* edx_2 = *arg3
        int32_t ecx_12 = *(((*(esi + 4) + *esi * 6) << 2) + &data_5b5040)
        
        if (*(edx_2 + 0x11) == 0 && *(edx_2 + 0x12) == 0)
            ecx_12 &= 0xffffffbf
        
        if (ecx_12 == 2)
            ecx_12.b = 1
        else if (ecx_12 == 4)
            ecx_12.b = 2
        else if (ecx_12 == 8)
            ecx_12.b = 3
        else if (ecx_12 == 0x10)
            ecx_12.b = 4
        else if (ecx_12 != 0x20)
            ecx_12.b = ecx_12 != 0x40
            ecx_12.b -= 1
            ecx_12.b &= 6
        else
            ecx_12.b = 5
        
        *(ebx + (result << 3) + 0x27) = ecx_12.b
        ecx_12.b = esi[0xc]
        *(ebx + (result << 3) + 0x29) = ecx_12.b
        int32_t ecx_13 = *(esi + 8)
        
        if (ecx_13 != 3)
            int32_t edx_4 = arg3[4]
            
            if (ecx_13 != 4)
                if (edx_4 == 0)
                    result = sub_444430(result, 0x20, arg3, arg2, result, *esi, ecx_13, *(esi + 4))
            else if (edx_4 == 0)
                result = sub_444430(result, ecx_13 + 0x1e, arg3, arg2, result, *esi, *(esi + 0xc), 
                    *(esi + 4))
        else
            int32_t ebx_1 = *(esi + 0x10)
            void* edx_3 = &arg3[(ebx_1 + 0xbb) * 3]
            void* ecx_17 = result_1 + (result << 3)
            *(ecx_17 + arg3 + 0x25) = 3
            *(ecx_17 + arg3 + 0x2a) = ebx_1.b
            *(edx_3 + 8) += 1
            
            if (arg3[4] == 0)
                result = sub_444430(result, 0x21, arg3, arg2, result, *esi, *(esi + 0x10), *(esi + 4))
            
            ebx = arg4
        
        esi = &esi[0x14]
    
    return result
}
