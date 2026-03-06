// 函数名称: sub_44ab70
// 虚拟地址: 0x44ab70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_44ab70(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_334
    int32_t* var_334
    int32_t eax_1 = __security_cookie ^ &var_334
    int32_t* edx = arg1
    void* ecx = *edx
    var_334 = edx
    int32_t eax_2 = *(ecx + 0x14)
    
    if (eax_2 s>= 1)
        int32_t ecx_3
        int32_t esi_1
        
        if (eax_2 s>= 2)
            int32_t i = 0
            esi_1 = 0
            
            if (*(ecx + 4) s> 0)
                void* edi_1 = edx + 0x29
                
                do
                    int32_t j_1 = *(edi_1 + 0x13b)
                    
                    if (j_1 s> 0)
                        void* eax_3 = edi_1
                        int32_t j
                        
                        do
                            if (*(eax_3 - 4) == 4 && *eax_3 == 1)
                                esi_1 += 1
                            
                            eax_3 += 8
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    void var_330
                    int32_t eax_5 = sub_4453c0(&var_330, i, var_334, &var_330, 1)
                    int32_t ecx_2 = 0
                    
                    if (eax_5 s> 0)
                        do
                            int32_t var_32c[0xc8]
                            void* edx_2 = var_32c[ecx_2 * 2]
                            
                            if ((*(edx_2 + 4) & 0x200) != 0)
                                esi_1 += *(edx_2 + 8)
                            
                            ecx_2 += 1
                        while (ecx_2 s< eax_5)
                    
                    edx = var_334
                    i += 1
                    edi_1 += 0x1bc
                while (i s< *(*edx + 4))
            
            int32_t i_2 = edx[0x303]
            ecx_3 = 0
            
            if (i_2 s> 0)
                void* edx_3 = edx + 0x8c9
                int32_t i_1
                
                do
                    bool cond:0_1 = *edx_3 != 0
                    int32_t eax_7 = ecx_3 + 1
                    edx_3 += 0xc
                    
                    if (cond:0_1)
                        eax_7 = ecx_3
                    
                    ecx_3 = eax_7
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                edx = var_334
        
        if (eax_2 s< 2 || esi_1 s<= ecx_3)
            void* eax_8 = sub_44a150(edx)
            @__security_check_cookie@4(eax_1 ^ &var_334)
            return eax_8
    
    void* eax_9 = sub_44a700(edx)
    @__security_check_cookie@4(eax_1 ^ &var_334)
    return eax_9
}
