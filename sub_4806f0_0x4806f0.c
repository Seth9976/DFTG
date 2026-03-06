// 函数名称: sub_4806f0
// 虚拟地址: 0x4806f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4806f0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = data_6d00d0
    void* eax = data_6d00d0
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx
    
    if (eax != 0)
        eax = *(eax + 0x20)
        
        if (eax != 0 && eax == 1)
            return eax
        
        int32_t edi_1 = data_62d6c8
        int32_t ecx_1 = data_62d6c4
        
        if (arg2 == 0)
        label_480773:
            
            if (data_632558 == arg2)
                return eax
            
            if (arg2 == 0)
                data_632558 = arg2
                return eax
            
            uint32_t edx_1 = zx.d(arg2.w)
            
            if (edx_1 u< edi_1)
                eax = edx_1 * 0x8ac
                
                if (*(eax + ecx_1 + 0x8a8) == arg2)
                    void** edi_3 = edx_1 * 0x8ac + ecx_1
                    eax = *edi_3
                    
                    if (eax == 0)
                        eax = sub_453780(edi_3)
                        
                        if (eax.b != 0)
                            eax = sub_46bc50(edi_3)
                            
                            if (eax.b == 0)
                                data_126bdac
                                eax = sub_4c5ce0()
                    else if (eax == 1)
                        eax = sub_454210(edi_3)
                    label_4807da:
                        
                        if (eax.b != 0)
                            data_126bd64
                            int32_t eax_1 = sub_4c5ce0()
                            data_632558 = arg2
                            return eax_1
                    else if (eax == 2)
                        eax = sub_453610(edi_3)
                        goto label_4807da
                    
                    data_632558 = arg2
                    return eax
        else
            uint32_t edx = zx.d(arg2.w)
            
            if (edx u< edi_1)
                eax = edx * 0x8ac
                
                if (*(eax + ecx_1 + 0x8a8) == arg2)
                    eax = edx * 0x8ac
                    
                    if (*(eax + ecx_1 + 0x6a8) == 0)
                        goto label_480773
                    
                    data_632558 = 0
                    return eax
        
        var_10 = "DataArray<struct RollGfx>::DataArrayGet"
        var_14 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
        var_18 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_10 = "GetLocalSettings"
        var_14 = 0x24c
        var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx = "gGameSettings.localSettings"
    
    sub_489550(eax, &data_5b2591, ecx, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
