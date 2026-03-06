// 函数名称: sub_4723a0
// 虚拟地址: 0x4723a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4723a0(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: void* eax = data_6d00d0
    void* eax = data_6d00d0
    *arg4 = zx.o(0)
    char const* const var_24
    int32_t var_20_1
    char const* const var_1c_1
    char* ecx
    
    if (eax != 0)
        eax.b = *(eax + 0x24) == 1
        bool cond:0_1 = *arg3 != 0
        *(arg4 + 0xd) = eax.b
        
        if (cond:0_1)
            return arg4
        
        int32_t eax_1 = *(arg3 + 0x38)
        
        if (eax_1 != 0 && eax_1 != 1)
            return arg4
        
        int32_t eax_2 = *(arg3 + 0x38)
        int32_t eax_5
        
        if (eax_2 == 0)
            eax_5 = *(*(arg3 + 0x30) + 0x14)
        label_47242e:
            *(arg4 + 4) = eax_5
            *(arg4 + 8) = eax_5
            int32_t eax_7 = *(arg3 + 0x34)
            
            if (eax_7 != 3 && eax_7 != 4 && eax_7 != 5)
                return arg4
            
            int32_t eax_8 = sub_4530f0(arg3 + 0x30)
            int32_t ecx_2 = *(arg3 + 0x3c)
            *(arg4 + 8) = eax_8
            void* eax_9 = sub_452b90(ecx_2)
            int32_t eax_10 = sub_453650(eax_9)
            int32_t ecx_4
            int32_t edx
            
            if (eax_10 == 1 || eax_10 == 0xd || eax_10 == 0xb)
                edx = *(eax_9 + 0x4cc)
                ecx_4 = 0
            
            if ((eax_10 != 1 && eax_10 != 0xd && eax_10 != 0xb) || edx s<= 0)
            label_47249c:
                eax = *(arg3 + 0x34)
                bool cond:1_1
                
                if (eax == 4)
                    cond:1_1 = *(arg3 + 0x38) == 0
                label_4724b3:
                    
                    if (not(cond:1_1))
                        eax = *(arg4 + 4)
                        *(arg4 + 8) = eax
                else if (eax == 5)
                    cond:1_1 = *(arg3 + 0x38) == 1
                    goto label_4724b3
            else
                eax = eax_9 + 0x33c
                
                while (*eax != *(arg3 + 0x44))
                    ecx_4 += 1
                    eax += 4
                    
                    if (ecx_4 s>= edx)
                        goto label_47249c
            
            int32_t ebx_4 = *(arg3 + 0x3c)
            
            if (ebx_4 != 0xffffffff)
                goto label_4724d7
            
            void* ebx_3 = data_6cfe4c
            
            if (ebx_3 != 0)
                ebx_4 = *(ebx_3 + 0xa68)
            label_4724d7:
                void* edx_1 = 0xffffffff
                int32_t eax_13 = *(arg3 + 0x44) * 3
                void* ecx_6 = *(data_632804 + (eax_13 << 2) + 0x8c4)
                
                if (zx.d(*(data_632804 + (eax_13 << 2) + 0x8cb)) == *(ecx_6 + 0x60))
                    int32_t eax_15 = *(ecx_6 + 0x5c)
                    
                    if (eax_15 != 0)
                        edx_1 = sub_44f3f0(eax_15, ebx_4, data_632804, eax_15, 0xffffffff)
                
                bool cond:2_1 = *(arg3 + 0x34) == 3
                *arg4 = edx_1
                
                if (not(cond:2_1))
                    void* edx_3 = 0xffffffff
                    
                    if (*(arg3 + 0x38) == *(ecx_6 + 0x60))
                        int32_t eax_18 = *(ecx_6 + 0x5c)
                        
                        if (eax_18 != 0)
                            edx_3 = sub_44f3f0(eax_18, ebx_4, data_632804, eax_18, *(arg3 + 0x44))
                    
                    *arg4 = edx_3
                
                if (*(arg4 + 4) != *(arg4 + 8))
                    if (sub_4542f0(arg3, 3) != 0)
                        *(arg4 + 0xc) = 1
                    else if (sub_4542f0(arg3, 1) != 0)
                        *(arg4 + 0xc) = 1
                    else if (sub_4542f0(arg3, 2) != 0)
                        *(arg4 + 0xc) = 1
                
                return arg4
            
            var_1c_1 = "GetClient"
            var_20_1 = 0x75
            var_24 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx = "gClient"
        else
            eax = eax_2 - 1
            
            if (eax_2 == 1)
                eax_5 = *(*(arg3 + 0x30) + 0x2c)
                goto label_47242e
            
            var_1c_1 = "TileBaseCost"
            var_20_1 = 0x406
            var_24 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            ecx = "Halt"
    else
        var_1c_1 = "GetLocalSettings"
        var_20_1 = 0x24c
        var_24 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx = "gGameSettings.localSettings"
    
    sub_489550(eax, &data_5b2591, ecx, var_24, var_20_1, var_1c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
