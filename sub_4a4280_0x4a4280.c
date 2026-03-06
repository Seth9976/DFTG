// 函数名称: sub_4a4280
// 虚拟地址: 0x4a4280
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4a4280(int32_t arg1, int32_t arg2, uint32_t arg3, float arg4 @ xmm3, int128_t* arg5)
{
    // 第一条实际指令: data_114e810 += 1
    data_114e810 += 1
    int128_t* ebx = arg5
    int32_t edi = 0
    *(arg3 + 0x112c) = arg2
    *(arg3 + 0x109c) = *(ebx + 0x88)
    char const* const var_3c_2
    int32_t var_38_2
    char const* const var_34_2
    void* var_1c
    void* eax_1
    char* ecx_6
    
    if (*(arg3 + 0x1124) s> 0)
        eax_1 = nullptr
        var_1c = nullptr
        
        while (true)
            if (edi s< 0 || edi s>= *(arg3 + 0x1124))
                var_34_2 = "XArray<struct UI2StateEffect>::operator []"
                var_38_2 = 0xb5
            else
                int32_t* ebx_2 = *(arg3 + 0x1120) + eax_1
                int32_t eax_2 = *ebx_2
                
                if (eax_2 == 0)
                    sub_4a8b70(arg3, ebx_2[3])
                else
                    eax_1 = eax_2 - 1
                    
                    if (eax_2 != 1)
                        var_34_2 = "UIStateEffectsUpdate"
                        var_38_2 = 0x41fb
                        var_3c_2 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                        ecx_6 = "Halt"
                        goto label_4a471c
                    
                    sub_4a8420(eax_1, ebx_2[5], arg3, 0x3f800000, 0xfffffc18)
                
                float xmm0_2 = ebx_2[4] f- arg4
                ebx_2[4] = xmm0_2
                void* eax_9
                
                if (0f < xmm0_2)
                    eax_9 = var_1c
                label_4a437d:
                    edi += 1
                    eax_1 = eax_9 + 0x18
                    var_1c = eax_1
                    
                    if (edi s< *(arg3 + 0x1124))
                        continue
                    
                    ebx = arg5
                    break
                else
                    eax_1 = *(arg3 + 0x1124)
                    
                    if (edi s< eax_1)
                        if (eax_1 - edi - 1 s> 0)
                            char* ecx_3 = var_1c + *(arg3 + 0x1120)
                            sub_579a90(ecx_3, &ecx_3[0x18], (eax_1 - edi - 1) * 0x18)
                            eax_1 = *(arg3 + 0x1124)
                        
                        edi -= 1
                        *(arg3 + 0x1124) = eax_1 - 1
                        eax_9 = var_1c - 0x18
                        goto label_4a437d
                    
                    var_34_2 = "XArray<struct UI2StateEffect>::RemoveAt"
                    var_38_2 = 0xdc
            
            var_3c_2 = "d:\ax\trunk\ax2017\engine\xarray.h"
            ecx_6 = "index >= 0 && index < mSize"
            goto label_4a471c
    
    int32_t* eax_10 = sub_498ef0(arg3)
    int32_t ecx_5 = 0
    int32_t edx_5 = *eax_10
    
    if (edx_5 s<= 0)
        goto label_4a43fc
    
    int32_t* edi_1 = eax_10[2]
    
    while (*edi_1 != 0x6f)
        ecx_5 += 1
        edi_1 = &edi_1[4]
        
        if (ecx_5 s>= edx_5)
            goto label_4a43fc
    
    eax_1 = sub_4f0fd0(&data_6218dc, 0x6f)
    
    if (*(eax_1 + 0x10) == 8)
        eax_10 = sub_4a8b70(arg3, edi_1[2])
    label_4a43fc:
        int32_t ecx_8 = *(arg3 + 0x110c)
        int64_t var_10_1 = 0
        int64_t var_14
        int32_t ebx_3
        int32_t edi_2
        
        if (ecx_8 != 0)
            if (*(ebx + 0xc4) != 0)
                bool cond:0_1 = *(arg3 + 0x111c) != 0
                *(arg3 + 0x1118) = 0
                
                if (not(cond:0_1))
                    eax_10 = sub_498490(0x3800)
                    *(arg3 + 0x1114) = eax_10
                    *(arg3 + 0x1118) = 0
                    *(arg3 + 0x111c) = 0x200
                
                sub_4a0670(sub_4a0670(eax_10, ebx[0xc].d, arg3 + 0x1114, *(ebx + 0xc4)), 
                    *(arg3 + 0x1108), arg3 + 0x1114, *(arg3 + 0x110c))
                var_14.d = *(arg3 + 0x1114)
                var_10_1.d = *(arg3 + 0x1118)
                var_10_1:4.d = 0
            else
                var_14.d = *(arg3 + 0x1108)
                var_10_1.d = ecx_8
            
            sub_49b0b0(&var_14)
            ebx_3 = var_10_1.d
            edi_2 = sub_4a3440(var_14.d, ebx_3)
            eax_1 = var_10_1:4.d
        else
            eax_1 = *(ebx + 0xc8)
            edi_2 = *(ebx + 0xcc)
            var_14 = ebx[0xc].q
            ebx_3 = var_10_1.d
        
        if (eax_1 != 0 || ebx_3 == 0)
            int64_t* ebx_4 = arg3 + 0x10d4
            *ebx_4 = var_14
            ebx_4[1].d = eax_1
            *(arg3 + 0x10e0) = edi_2
            char var_22 = 0
            char eax_17 = sub_49de20(&var_22, edi_2, arg3, ebx_4, &var_22)
            
            if (eax_17 != 0)
                int32_t* eax_18
                eax_18.b = sub_499080(*ebx_4, *(arg3 + 0x10d8)) != 0
                *(arg3 + 5) = eax_18.b
            
            int128_t* ecx_14 = arg5
            int32_t i_3 = 0x88
            int32_t i
            
            do
                char eax_19 = *ecx_14
                ecx_14 += 1
                edi_2 = edi_2 u>> 8 ^ *(((zx.d(eax_19) ^ zx.d(edi_2.b)) << 2) + &data_5d2c60)
                i = i_3
                i_3 -= 1
            while (i != 1)
            char* ecx_15 = arg3 + 0xe48
            int32_t i_4 = 8
            int32_t i_1
            
            do
                char eax_22 = *ecx_15
                ecx_15 = &ecx_15[1]
                edi_2 = edi_2 u>> 8 ^ *(((zx.d(eax_22) ^ zx.d(edi_2.b)) << 2) + &data_5d2c60)
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            uint32_t eax_24
            eax_24.b = edi_2 != *(arg3 + 0xe28)
            eax_24.b |= eax_17
            eax_24.b |= var_22
            var_1c.b = eax_24.b
            uint32_t eax_25 = zx.d(*(arg3 + 5))
            sub_4a2dd0(eax_25, arg5, arg3, eax_25.b, var_1c.b)
            int32_t* eax_26 = *(arg3 + 0xfec)
            *(arg3 + 0xe28) = edi_2
            
            if (eax_26 == 0xa)
                sub_4a3bf0(arg3, arg4)
                sub_4a3580(arg3)
                eax_26 = *(arg3 + 0xfec)
                var_1c.b = 1
            
            if (eax_26 == 8)
                sub_4a3eb0(arg3, arg4)
                eax_26 = *(arg3 + 0xfec)
            
            if (eax_26 == 9)
                sub_4a3790(arg3, arg4)
                eax_26 = *(arg3 + 0xfec)
            
            if (eax_26 == 7)
                int32_t edi_6 = *(arg3 + 0xed8)
                eax_26 = *(arg3 + 0xed0)
                
                if (edi_6 != 0)
                    void* ebx_5 = sub_4dd900(*(arg3 + 0xe78))
                    
                    if (ebx_5 == 0)
                        char** eax_28 = sub_4dcc00(eax_26)
                        ebx_5 = eax_28
                        sub_4f2cc0(eax_28, edi_6, ebx_5, 0)
                    
                    int32_t* ecx_24 = *(ebx_5 + 0x2c)
                    
                    if (ecx_24 != 0)
                        sub_4f2980(ecx_24)
                    
                    int32_t* i_2 = *(ebx_5 + 0x38)
                    
                    while (i_2 != 0)
                        int32_t* i_5 = i_2
                        i_2 = i_2[4]
                        sub_4dcba0(ebx_5, i_5)
                    
                    sub_4a3580(arg3)
                    eax_26 = *(ebx_5 + 0x68)
                    ebx_4 = arg3 + 0x10d4
                    *(arg3 + 0xe78) = eax_26
            
            void* ecx_27 = *(arg3 + 0xe68)
            
            if (ecx_27 != 0)
                eax_26 = sub_501f70(ecx_27, arg4)
            
            sub_4a2a00(eax_26, ebx_4, arg3, arg4, var_1c.b)
            void* result = *(arg3 + 0xe2c)
            
            if (result s> 0)
                result -= 1
                *(arg3 + 0xe2c) = result
            
            if (var_22 == 0)
                return result
            
            return sub_4a3580(arg3)
        
        var_34_2 = "UI2Update"
        var_38_2 = 0x1b2d
        var_3c_2 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx_6 = "bindings.bloom != 0 || bindings.numBindings == 0"
    else
        var_34_2 = "AttribAsString"
        var_38_2 = 0x902
        var_3c_2 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx_6 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_STRING"
    
    label_4a471c:
    sub_489550(eax_1, &data_5b2591, ecx_6, var_3c_2, var_38_2, var_34_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
