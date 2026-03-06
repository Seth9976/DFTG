// 函数名称: sub_460fa0
// 虚拟地址: 0x460fa0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_460fa0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = *arg1
    int32_t var_160 = edi
    void* esi = sub_452b90(edi)
    void* var_150 = esi
    int32_t ebx = 0
    int32_t* i_1 = nullptr
    int32_t ecx_1 = sub_481430(&data_62d6c4, &i_1)
    int32_t var_ac[0x29]
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 1 && i[6] == edi && i[4] == 7)
            int32_t esi_1 = *(esi + 0x4cc)
            int32_t ecx_2 = 0
            
            if (esi_1 s> 0)
                int32_t edi_1 = i[0xb]
                void* eax_5 = var_150 + 0x33c
                
                do
                    if (*eax_5 == edi_1)
                        int32_t eax_6 = ebx
                        ebx += 1
                        var_ac[eax_6] = edi_1
                        break
                    
                    ecx_2 += 1
                    eax_5 += 4
                while (ecx_2 s< esi_1)
                
                edi = var_160
            
            esi = var_150
        
        ecx_1 = sub_481430(&data_62d6c4, &i_1)
    
    int32_t* esi_3 = arg1
    int32_t var_170_2 = ecx_1
    int32_t* eax_8
    int32_t ecx_4
    eax_8, ecx_4 = sub_45bde0(&var_ac, *esi_3, data_632804, 5, 0, &var_ac, ebx, 0, 0)
    int32_t ebx_1 = 0
    esi_3[0x39a] = 0
    int32_t edi_2 = 0
    
    if (esi_3[0x371] s> 0)
        void* esi_2 = &esi_3[0x2f9]
        
        while (true)
            int32_t ecx_5 = *esi_2
            int32_t var_174
            char* ecx_9
            
            if (ecx_5 == 0)
                char const* const var_170_5 = "DataArray<struct RollGfx>::DataArrayGet"
                var_174 = 0x6c
                ecx_9 = "id != DATAID_NULL"
            else
                uint32_t edx_1 = zx.d(ecx_5.w)
                
                if (edx_1 u< data_62d6c8)
                    eax_8 = edx_1 * 0x8ac + data_62d6c4
                    
                    if (eax_8[0x22a] == ecx_5)
                        ecx_4 = data_62d6c4
                        ebx_1 += 1
                        esi_2 += 4
                        var_ac[edi_2] = *(edx_1 * 0x8ac + ecx_4 + 0x2c)
                        edi_2 += 1
                        eax_8 = arg1
                        
                        if (ebx_1 s< eax_8[0x371])
                            continue
                        
                        esi_3 = eax_8
                        break
                
                char const* const var_170_4 = "DataArray<struct RollGfx>::DataArrayGet"
                var_174 = 0x6d
                ecx_9 = "DataArrayTryToGet(id) != NULL"
            
            sub_489550(eax_8, &data_5b2591, ecx_9, "d:\ax\trunk\ax2017\engine\dataarray.h", var_174, 
                "DataArray<struct RollGfx>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    int32_t var_170_3 = ecx_4
    void* result = sub_45bde0(&var_ac, *esi_3, data_632804, 0x11, 0, &var_ac, edi_2, 0, 0)
    esi_3[0x371] = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
