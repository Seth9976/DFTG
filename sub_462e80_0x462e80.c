// 函数名称: sub_462e80
// 虚拟地址: 0x462e80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_462e80(int32_t arg1)
{
    // 第一条实际指令: int32_t i_1
    int32_t i_1
    int32_t eax_1 = __security_cookie ^ &i_1
    void* eax_2 = data_6327d0
    void* result = eax_2 + arg1
    
    if (eax_2 + arg1 s>= 0 && result s< data_6326b0)
        int32_t var_3c[0xc]
        sub_4c5670(data_126be70, &var_3c)
        sub_4c5920(&var_3c)
        int32_t* eax_3 = sub_452cc0((&data_632598)[data_6327d0])
        int32_t* esi_1 = eax_3
        
        if (*(esi_1 + 0x891) == 0)
            goto label_462f52
        
        bool cond:0_1 = esi_1[0xe] != 0
        *(esi_1 + 0x891) = 0
        
        if (not(cond:0_1))
            if (data_6cfe4c == 0)
                goto label_463064
            
            eax_3 = sub_46a420(6)
            esi_1[0xe] = 1
            esi_1[0x223] = 0x3f800000
            goto label_462f52
        
        if (data_6cfe4c == 0)
            goto label_463064
        
        eax_3 = sub_46a420(6)
        esi_1[0xe] = 0
        esi_1[0x223] = 0
    label_462f52:
        void* ecx_4 = data_6cfe4c
        
        if (ecx_4 == 0)
        label_463064:
            sub_489550(eax_3, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result = sub_452b90(*(ecx_4 + 0xa68))
        data_6327d0 += arg1
        int32_t i = 0
        i_1 = 0
        
        if (data_6326b0 s> 0)
            do
                int32_t* eax_4
                int32_t edx_2
                eax_4, edx_2 = sub_452cc0((&data_632598)[i])
                void var_a0
                int128_t* eax_6 = sub_481680(&var_a0, edx_2, &eax_4[0x5d], &var_a0)
                int32_t var_1a8 = 0
                int128_t var_1a4_1 = *eax_6
                int128_t var_194_1 = eax_6[1]
                int128_t var_184_1 = eax_6[2]
                int128_t var_174_1 = eax_6[3]
                int128_t var_164_1 = eax_6[4]
                int128_t xmm0_6 = eax_6[5]
                eax_4[0x1aa] = 0
                int128_t var_154_1 = xmm0_6
                __builtin_memcpy(&eax_4[0x1c], &var_1a8, 0x104)
                int32_t ecx_8 = __builtin_memcpy(&eax_4[0x5d], &var_1a8, 0x104)
                int32_t var_1bc_2 = data_6326b0
                int32_t i_2 = i_1
                result = sub_456050(eax_6, eax_4, ecx_8, data_6327d0, i_2)
                i = i_2 + 1
                i_1 = i
            while (i s< data_6326b0)
    
    @__security_check_cookie@4(eax_1 ^ &i_1)
    return result
}
