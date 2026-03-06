// 函数名称: sub_474300
// 虚拟地址: 0x474300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_474300(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx = arg2
    void* var_15c = ebx
    uint32_t eax_2 = sub_474290(*(ebx + 0x48))
    int32_t edi = *(ebx + 0x894)
    int32_t var_160 = edi
    int32_t* var_154 = &data_62d6c4
    int32_t* i_1 = nullptr
    void* result = sub_481430(&data_62d6c4, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 2)
            int32_t eax_3 = i[0x12]
            
            if (eax_3 == *(ebx + 0x48))
                int32_t ecx_1 = i[0x225]
                
                if (ecx_1 s> edi)
                    i[0x225] = ecx_1 - 1
                    
                    if (eax_3 != 0)
                        int32_t var_1f8_1 = 0
                        void var_1f0
                        _memset(&var_1f0, 0, 0x8c)
                        uint32_t var_200_1 = eax_2
                        int32_t var_1fc_1 = ecx_1 - 1
                        int32_t var_1f4_1 = 0xffffffff
                        int32_t eax_9 = *arg1
                        int32_t var_204 = eax_9
                        void var_14c
                        __builtin_memcpy(&var_14c, &var_204, 0xa0)
                        sub_452ab0(eax_9, &var_14c, &i[0x1c], 5, 0)
                    else
                        int32_t* eax_5 = sub_452cc0(sub_452c30(i[0x15])[7])
                        uint32_t var_2a4[0xa][0x4]
                        uint32_t (* eax_6)[0x4] = sub_459e70(eax_5, eax_5, eax_2, &var_2a4, i[0x225])
                        void var_ac
                        __builtin_memcpy(&var_ac, eax_6, 0xa0)
                        sub_452ab0(eax_6, &var_ac, &i[0x1c], 5, 0)
                    
                    edi = var_160
                    ebx = var_15c
        
        result = sub_481430(var_154, &i_1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
