// 函数名称: sub_447d40
// 虚拟地址: 0x447d40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_447d40(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i_3 = 0
    int32_t eax_2 = *arg1
    
    if (*(eax_2 + 4) s> 0)
        void* ebx_1 = &arg1[0x5d]
        void* var_530_1 = ebx_1
        int32_t i
        
        do
            int32_t j = *ebx_1
            int32_t edx_1 = 0
            int32_t var_524[0x46]
            
            while (j != 0xffffffff)
                var_524[edx_1] = j
                j = sx.d(*(&arg1[j * 3] + 0x8ca))
                edx_1 += 1
            
            int32_t j_1 = *(ebx_1 + 4)
            int32_t edi_1 = 0
            
            if (j_1 != 0xffffffff)
                do
                    var_524[edx_1 + edi_1] = j_1
                    j_1 = sx.d(*(&arg1[j_1 * 3] + 0x8ca))
                    edi_1 += 1
                while (j_1 != 0xffffffff)
                
                ebx_1 = var_530_1
            
            int32_t eax_4 = edi_1 + edx_1
            int32_t var_52c = eax_4
            
            if (eax_4 s>= 3)
                int32_t eax_8
                
                if (*(ebx_1 + 0x50) s< *(ebx_1 + 0x4c))
                    eax_8 = sub_444560(&var_524, i_3, arg1, 0x12, &var_524, &var_52c, 0, nullptr)
                else
                    eax_8 =
                        (*(*(ebx_1 - 0x158) + 4))(arg1, i_3, 0x12, &var_524, &var_52c, 0, 0, 0, 0, 0)
                    
                    if (arg1[0x30f] == 0)
                        int32_t eax_10 = *(*(ebx_1 - 0x158) + 0xc)
                        
                        if (eax_10 != 0)
                            eax_10(arg1, i_3)
                        
                        eax_8 = sub_444560(&var_524, i_3, arg1, 0x12, &var_524, &var_52c, 0, nullptr)
                
                sub_445280(eax_8, var_524[0], arg1, 0xffffffff, 1, 0)
                
                if (arg1[4] == 0)
                    int32_t edx_4 = var_524[0]
                    uint32_t ecx_3 = zx.d(*(&arg1[edx_4 * 3] + 0x8cb))
                    int32_t var_540_2 = *(arg1[edx_4 * 3 + 0x231] + (ecx_3 << 2))
                    int32_t var_544_2 = edx_4
                    int32_t var_548_2 = *(ebx_1 - 0x15c)
                    void var_40c
                    sub_41da20(&var_40c, edx_4, ecx_3, &var_40c, "%s forced to abandon %d %s.\n")
                    sub_4892e0(&var_40c)
                    int32_t ecx_4 = var_524[0]
                    void* eax_17 = arg1[ecx_4 * 3 + 0x231]
                    sub_444430(eax_17, 0x18, arg1, i_3, ecx_4, *(eax_17 + 0xc), 0, 0)
            
            eax_2 = *arg1
            i = i_3 + 1
            ebx_1 += 0x1bc
            i_3 = i
            var_530_1 = ebx_1
        while (i s< *(eax_2 + 4))
    
    int32_t i_1 = 0
    void* edi_3 = arg1 + 0x8cb
    
    do
        if (*(edi_3 - 2) == 1)
            eax_2 = sub_445280(eax_2, i_1, arg1, 0xffffffff, 0, 0)
            *edi_3 = 0xff
        
        i_1 += 1
        edi_3 += 0xc
    while (i_1 s< 0x46)
    
    int32_t i_4 = arg1[0x303]
    int32_t result_1 = 0
    
    if (i_4 s> 0)
        void* esi_1 = arg1 + 0x8c9
        int32_t result
        int32_t i_2
        
        do
            bool cond:0_1 = *esi_1 != 0
            result = result_1 + 1
            esi_1 += 0xc
            
            if (cond:0_1)
                result = result_1
            
            result_1 = result
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        
        if (result_1 != 0)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
    
    sub_444530("Couldn't find tile to return to bag!\n")
    noreturn
}
