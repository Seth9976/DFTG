// 函数名称: sub_4463e0
// 虚拟地址: 0x4463e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4463e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i = 0
    int32_t edi = 0
    int32_t ebx = 0
    void* result_1 = *arg1
    int32_t esi_1 = 0
    int32_t ecx = *(result_1 + 8)
    void* result
    int32_t* esi_2
    int32_t var_444
    int32_t var_440
    int32_t var_43c[0x86]
    int32_t var_224[0x87]
    
    if (*(result_1 + 0xc) == 0)
        var_444 = 0
        var_440 = 0
        
        do
            int32_t ecx_3 = *(i + &data_6d014c)
            
            if ((ecx_3 & ecx) == ecx_3)
                char eax_9 = (*(i + &data_6d0104)).b
                
                if ((eax_9 & 1) != 0)
                    var_43c[esi_1] = ebx
                    esi_1 += 1
                
                if ((eax_9 & 2) != 0)
                    var_224[edi] = ebx
                    edi += 1
            
            i += 0x68
            ebx += 1
        while (i s< 0x3608)
        
        void* result_2 = result_1
        var_440 = edi
        int32_t i_1 = 0
        var_444 = esi_1
        esi_2 = arg1
        
        if (*(result_2 + 4) s> 0)
            do
                sub_445bb0(&var_224, i_1, esi_2, &var_224, &var_440, &var_43c, &var_444)
                result_2 = *esi_2
                i_1 += 1
            while (i_1 s< *(result_2 + 4))
        
        int32_t i_2 = 0
        
        if (*(result_2 + 4) s> 0)
            do
                sub_445af0(esi_2, i_2)
                i_2 += 1
            while (i_2 s< *(*esi_2 + 4))
        
        sub_4446d0(esi_2)
        result = *esi_2
        int32_t i_3 = 0
        
        if (*(result + 4) s> 0)
            do
                sub_4459f0(esi_2, i_3)
                result = *esi_2
                i_3 += 1
            while (i_3 s< *(result + 4))
    else
        var_440 = 0
        var_444 = 0
        
        do
            int32_t ecx_1 = *(i + &data_6d014c)
            
            if ((ecx_1 & ecx) == ecx_1)
                char eax_4 = (*(i + &data_6d0104)).b
                
                if ((eax_4 & 1) != 0)
                    var_224[esi_1] = ebx
                    esi_1 += 1
                
                if ((eax_4 & 2) != 0)
                    var_43c[edi] = ebx
                    edi += 1
            
            i += 0x68
            ebx += 1
        while (i s< 0x3608)
        
        result = result_1
        var_444 = edi
        int32_t i_4 = 0
        var_440 = esi_1
        esi_2 = arg1
        
        if (*(result + 4) s> 0)
            int32_t ebx_1 = 0
            
            do
                int32_t* eax_6 = *(result + 0xc) + ebx_1
                sub_446100(eax_6, i_4, esi_2, eax_6, &var_43c, &var_444, &var_224, &var_440)
                result = *esi_2
                i_4 += 1
                ebx_1 += 0x3d0
            while (i_4 s< *(result + 4))
    
    if (esi_2[4] == 0)
        result = sub_444430(result, 1, esi_2, 0xffffffff, 0, 0, 0, 0)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
