// 函数名称: sub_5331e0
// 虚拟地址: 0x5331e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_5331e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_2c = arg1[0x19]
    int32_t var_2c = arg1[0x19]
    arg1[0x18] = arg1[7] + arg1[1] + arg1[9] + arg1[0xb]
    _free(var_2c)
    int32_t ecx = data_1151ae0
    int32_t eax_5 = arg1[0x18] << 3
    int32_t eax_6
    
    if (ecx == 0)
        int32_t var_2c_1 = eax_5
        eax_6 = _malloc()
    else
        eax_6 = ecx(eax_5, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x15c)
    
    int32_t var_2c_2 = arg1[0x1c]
    arg1[0x19] = eax_6
    int32_t eax_7 = arg1[1]
    arg1[0x17] = 0
    arg1[0x1b] = eax_7
    _free(var_2c_2)
    int32_t ecx_1 = data_1151ae0
    int32_t eax_9 = arg1[0x1b] << 2
    int32_t eax_10
    
    if (ecx_1 == 0)
        int32_t var_2c_3 = eax_9
        eax_10 = _malloc()
    else
        eax_10 =
            ecx_1(eax_9, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x161)
    
    int32_t ebx = arg1[2]
    int32_t i = 0
    arg1[0x1c] = eax_10
    arg1[0x1a] = 0
    
    if (arg1[1] s> 0)
        do
            int32_t* edx_1 = *(ebx + (i << 2))
            int32_t eax_12 = *(*edx_1 + 0x30)
            edx_1[0x1a] = eax_12
            int32_t ecx_2
            ecx_2.b = eax_12 == 0
            i += 1
            edx_1[0x1b] = ecx_2
        while (i s< arg1[1])
    
    void* edi = arg1[0xd]
    
    if (edi != 0)
        int32_t* edi_1 = *(edi + 4)
        int32_t i_1 = 0
        
        if (*edi_1 s> 0)
            do
                void* j = *(arg1[2] + (**(edi_1[2] + (i_1 << 2)) << 2))
                
                do
                    *(j + 0x68) = 0
                    *(j + 0x6c) = 0xffffffff
                    j = *(j + 8)
                while (j != 0)
                
                i_1 += 1
            while (i_1 s< *edi_1)
    
    int32_t eax_16 = arg1[0xa]
    int32_t edi_2 = 0
    int32_t ecx_4 = arg1[0xb]
    int32_t ebx_1 = arg1[7]
    int32_t edx_2 = arg1[8]
    int32_t eax_17 = arg1[0xc]
    int32_t result = arg1[9]
    int32_t ecx_6 = ecx_4 + result + ebx_1
    int32_t var_10 = edx_2
    int32_t result_1 = result
    
    if (ecx_6 s> 0)
        do
            int32_t ecx_7 = 0
            
            if (ebx_1 s> 0)
                do
                    int32_t* edx_3 = *(edx_2 + (ecx_7 << 2))
                    
                    if (*(*edx_3 + 4) == edi_2)
                        sub_532b80(arg1, edx_3)
                        goto label_53338e
                    
                    edx_2 = var_10
                    ecx_7 += 1
                while (ecx_7 s< ebx_1)
                
                result = result_1
            
            int32_t ecx_8 = 0
            
            if (result s<= 0)
            label_533354:
                int32_t ecx_9 = 0
                
                if (ecx_4 s> 0)
                    do
                        int32_t* edx_5 = *(eax_17 + (ecx_9 << 2))
                        
                        if (*(*edx_5 + 4) == edi_2)
                            sub_532d00(arg1, edx_5)
                            break
                        
                        ecx_9 += 1
                    while (ecx_9 s< ecx_4)
            else
                while (true)
                    int32_t* edx_4 = *(eax_16 + (ecx_8 << 2))
                    
                    if (*(*edx_4 + 4) == edi_2)
                        sub_532f80(arg1, edx_4)
                        break
                    
                    ecx_8 += 1
                    
                    if (ecx_8 s>= result_1)
                        goto label_533354
            
        label_53338e:
            result = result_1
            edi_2 += 1
            edx_2 = var_10
        while (edi_2 s< ecx_6)
    
    int32_t i_2 = 0
    
    if (arg1[1] s> 0)
        do
            result = arg1[2]
            void* ebx_2 = *(result + (i_2 << 2))
            
            if (*(ebx_2 + 0x68) == 0)
                void* edx_6 = *(ebx_2 + 8)
                
                if (edx_6 != 0)
                    sub_532a10(arg1, edx_6)
                
                *(ebx_2 + 0x68) = 1
                int32_t ecx_14 = arg1[0x17]
                int32_t eax_23 = arg1[0x18]
                
                if (ecx_14 == eax_23)
                    int32_t eax_24 = eax_23 * 2
                    arg1[0x18] = eax_24
                    int32_t var_2c_4 = eax_24 << 3
                    int32_t var_30_1 = arg1[0x19]
                    int32_t eax_26 = sub_57fb2f()
                    ecx_14 = arg1[0x17]
                    arg1[0x19] = eax_26
                
                result = arg1[0x19]
                *(result + (ecx_14 << 3)) = 0
                *(result + (ecx_14 << 3) + 4) = ebx_2
                arg1[0x17] += 1
            
            i_2 += 1
        while (i_2 s< arg1[1])
    
    return result
}
