// 函数名称: sub_4a0670
// 虚拟地址: 0x4a0670
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_4a0670(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* edi = arg3
    int32_t* edi = arg3
    int32_t* esi = arg2
    int32_t* var_8 = edi
    
    if (arg4 s<= 0)
        return 
    
    int32_t i
    
    do
        arg1 = *edi
        int32_t edx = 0
        int32_t edi_1 = edi[1]
        
        if (edi_1 s> 0)
            while (arg1[1] != esi[1] || *arg1 != *esi)
                edx += 1
                arg1 = &arg1[7]
                
                if (edx s>= edi_1)
                    edi = var_8
                    arg1 = sub_4bc680(edi)
                    goto label_4a06c9
        
        if (edi_1 s> 0 && arg1 != 0)
            edi = var_8
        else
            edi = var_8
            arg1 = sub_4bc680(edi)
        
    label_4a06c9:
        *arg1 = *esi
        *(arg1 + 0x10) = *(esi + 0x10)
        int32_t ecx_3 = esi[6]
        esi = &esi[7]
        i = arg4
        arg4 -= 1
        arg1[6] = ecx_3
    while (i != 1)
}
