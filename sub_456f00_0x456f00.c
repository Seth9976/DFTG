// 函数名称: sub_456f00
// 虚拟地址: 0x456f00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_456f00(int32_t arg1, int32_t arg2, uint32_t arg3)
{
    // 第一条实际指令: int32_t var_3c[0xc]
    int32_t var_3c[0xc]
    uint32_t eax_1 = __security_cookie ^ &var_3c
    uint32_t var_c = eax_1
    char const* const var_4c
    int32_t var_48
    char const* const var_44_1
    char* ecx
    
    if (arg2 != 0)
        uint32_t ecx_1 = zx.d(arg2.w)
        
        if (ecx_1 u< data_62d6c8)
            eax_1 = ecx_1 * 0x8ac + data_62d6c4
        
        if (ecx_1 u>= data_62d6c8 || *(eax_1 + 0x8a8) != arg2)
            var_44_1 = "DataArray<struct RollGfx>::DataArrayGet"
            var_48 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_4c = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            eax_1 = arg3
            int32_t* esi_2 = ecx_1 * 0x8ac + data_62d6c4
            int32_t* ecx_9
            
            if (eax_1 u> 7)
                var_44_1 = "GameSpecific_HitAction"
                var_48 = 0x1109
                var_4c = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                ecx = "Halt"
            else
                switch (eax_1)
                    case 0
                        int32_t eax_3 = *esi_2
                        
                        if (eax_3 == 2)
                            uint32_t var_44_2 = ecx_1
                            sub_456b50(esi_2)
                            eax_3 = *esi_2
                        
                        ecx_9 = esi_2
                        
                        if (eax_3 == 1)
                            void* eax_4
                            int32_t edx_1
                            eax_4, edx_1 = sub_454210(ecx_9)
                            ecx_9 = esi_2
                            
                            if (eax_4.b != 0)
                                void* eax_5 = sub_456d60(eax_4, edx_1, ecx_9, 1)
                                @__security_check_cookie@4(var_c ^ &var_3c)
                                return eax_5
                        
                        goto label_45702f
                    case 1
                        ecx_9 = esi_2
                    label_45702f:
                        int32_t eax_6 = sub_4564b0(ecx_9)
                        @__security_check_cookie@4(var_c ^ &var_3c)
                        return eax_6
                    case 2, 3, 4, 5, 6
                        @__security_check_cookie@4(var_c ^ &var_3c)
                        return eax_1
                    case 7
                        eax_1 = *esi_2
                        
                        if (eax_1 == 1)
                            eax_1 = sub_4541a0()
                            
                            if (eax_1.b == 0 && data_632564 == 0)
                                eax_1 = sub_453be0(esi_2)
                                
                                if (eax_1 != 0 && eax_1 != 1)
                                    sub_4c5670(data_126bd60, &var_3c)
                                    eax_1 = sub_4c5920(&var_3c)
                        else if (eax_1 == 0)
                            eax_1 = sub_453780(esi_2)
                            
                            if (eax_1.b != 0)
                                sub_4c5670(data_126bda8, &var_3c)
                                eax_1 = sub_4c5920(&var_3c)
                        else if (eax_1 == 2)
                            sub_4c5670(data_126bd60, &var_3c)
                            eax_1 = sub_4c5920(&var_3c)
                        
                        @__security_check_cookie@4(var_c ^ &var_3c)
                        return eax_1
    else
        var_44_1 = "DataArray<struct RollGfx>::DataArrayGet"
        var_48 = 0x6c
        ecx = "id != DATAID_NULL"
        var_4c = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_4c, var_48, var_44_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
