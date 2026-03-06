// 函数名称: sub_4a4740
// 虚拟地址: 0x4a4740
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4a4740(int32_t arg1, char arg2, float arg3 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_8 = eax_1
    char const* const var_c48
    int32_t var_c44_1
    char const* const var_c40_1
    char* ecx
    
    if (arg1 != 0)
        uint32_t ecx_1 = zx.d(arg1.w)
        int32_t edx
        
        if (ecx_1 u< data_63e5ac)
            edx = data_63e5a8
            eax_1 = ecx_1 * 0x1418
        
        if (ecx_1 u>= data_63e5ac || *(eax_1 + edx + 0x1410) != arg1)
            var_c40_1 = "DataArray<struct UI2>::DataArrayGet"
            var_c44_1 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_c48 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            void* ebx_2 = ecx_1 * 0x1418 + edx
            eax_1 = *(ebx_2 + 0xff4)
            
            if (eax_1[1] == 0x22)
                int32_t* esi_1 = sub_4981f0(eax_1)
                int32_t* var_c20_1 = esi_1
                uint32_t var_80c[0x40][0x4]
                _memset(&var_80c, 0, 0x400)
                uint32_t var_c0c[0x40][0x4]
                _memset(&var_c0c, 0, 0x400)
                void* var_40c = ebx_2
                uint32_t var_408[0x40][0x4]
                _memset(&var_408, 0, 0x3fc)
                int32_t j = 0
                
                if (*(ebx_2 + 0x1190) == 0)
                    int32_t i_2 = 0
                    
                    if (esi_1[2] s> 0)
                        int32_t ebx_3 = 0
                        uint32_t (* edx_1)[0x40][0x4] = &var_80c
                        int32_t var_c18_1 = 0
                        int32_t i
                        
                        do
                            uint32_t ecx_3 = *edx_1
                            void* esi_3 = *esi_1 + var_c18_1
                            *edx_1 = ecx_3 - 1
                            void* eax_4 = sub_49a970(*(&var_40c + ebx_3), *(&var_c0c + ebx_3) - ecx_3)
                            j += 1
                            *(eax_4 + 0xff4) = eax_1
                            ebx_3 = j << 2
                            *(eax_4 + 0xff8) = i_2
                            int32_t ecx_7 = *(esi_3 + 0x10)
                            edx_1 = &var_80c + ebx_3
                            *(&var_c0c + ebx_3) = ecx_7
                            *(&var_40c + ebx_3) = eax_4
                            *edx_1 = ecx_7
                            
                            if (ecx_7 == 0)
                                while (j s> 0)
                                    j -= 1
                                    ebx_3 = j << 2
                                    edx_1 = &var_80c + ebx_3
                                    
                                    if (*edx_1 != 0)
                                        break
                            
                            esi_1 = var_c20_1
                            i = i_2 + 1
                            var_c18_1 += 0x18
                            i_2 = i
                        while (i s< esi_1[2])
                
                int32_t eax_6 = data_63e5e0
                
                if (eax_6 != 0)
                    uint32_t ecx_8 = zx.d(eax_6.w)
                    
                    if (ecx_8 u< data_63e5ac)
                        void* ecx_10 = ecx_8 * 0x1418 + data_63e5a8
                        
                        if (*(ecx_10 + 0x1410) == eax_6)
                            sub_4a3580(ecx_10)
                
                *(ebx_2 + 0x10d4) = *(ebx_2 + 0x1108)
                *(ebx_2 + 0x10d8) = *(ebx_2 + 0x110c)
                eax_1 = sub_49b0b0(ebx_2 + 0x10d4)
                
                if (*(ebx_2 + 0x10dc) != 0 || *(ebx_2 + 0x10d8) == 0)
                    eax_1 = sub_4a3440(*(ebx_2 + 0x1108), *(ebx_2 + 0x110c))
                    bool cond:0_1 = *(ebx_2 + 0xfec) != 2
                    *(ebx_2 + 0x10e0) = eax_1
                    
                    if (cond:0_1)
                        int32_t i_1 = 0
                        
                        if (*(ebx_2 + 0x1190) s> 0)
                            do
                                uint32_t eax_9
                                int32_t ecx_14
                                eax_9, ecx_14 = sub_49e970(ebx_2, i_1)
                                int32_t var_c40_2 = ecx_14
                                sub_4a4280(eax_9, ebx_2, eax_9, arg3, ebx_2 + 0x1014)
                                i_1 += 1
                            while (i_1 s< *(ebx_2 + 0x1190))
                        
                        uint32_t result = sub_49eb30(ebx_2, arg2)
                        
                        if (*(ebx_2 + 0xe7c) != 0)
                            *(ebx_2 + 0xe7c) = 0
                            result = sub_4bbe80(arg1)
                        
                        *(ebx_2 + 4) = 1
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return result
                    
                    var_c40_1 = "UI2UpdateRoot"
                    var_c44_1 = 0x1b97
                    var_c48 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    ecx = "ui.type != UI_TABLE"
                else
                    var_c40_1 = "UI2UpdateRoot"
                    var_c44_1 = 0x1b94
                    var_c48 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    ecx = "ui.worldInfo.bindings.bloom != 0 || ui.worldInfo.bindings.numBindings == 0"
            else
                var_c40_1 = "UI2DefGet"
                var_c44_1 = 0x8ae
                var_c48 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                ecx = "ptr->assetType == ASSET_TYPE_UI2"
    else
        var_c40_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c44_1 = 0x6c
        ecx = "id != DATAID_NULL"
        var_c48 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_c48, var_c44_1, var_c40_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
