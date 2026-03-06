// 函数名称: sub_472c50
// 虚拟地址: 0x472c50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_472c50(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4, void* arg5, char* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    bool cond:0 = data_62b1ac != 0x21
    int32_t* eax_2 = arg2
    void* edx = arg4
    int32_t* var_134 = eax_2
    int32_t* var_12c = arg3
    void* var_138 = edx
    int32_t* edi
    
    if (cond:0)
        edi = nullptr
        
        if (data_62b1bc == 0x21)
            edi = data_62b1c0
    else
        edi = data_62b1b0
    
    int32_t var_228_3
    char const* const var_224_4
    int32_t var_128[0x47]
    char* ecx_11
    void* esi_1
    void var_210
    
    if (eax_2 != 4)
        if (eax_2 != 5)
            var_224_4 = "CalcDropSlotPoitions"
            var_228_3 = 0x6989
            ecx_11 = "Halt"
        label_472fa2:
            sub_489550(eax_2, &data_5b2591, ecx_11, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                var_228_3, var_224_4)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        esi_1 = arg5
        int32_t ebx_2 = 0
        
        if (esi_1 s> 0)
            do
                int32_t* var_224_2 = arg3
                arg3 = edi
                int128_t* eax_4 = sub_4bb090(&var_210, ebx_2)
                int128_t var_1a0_2 = eax_4[1]
                int128_t xmm0_7 = eax_4[2]
                var_128[ebx_2] = (*eax_4).d
                ebx_2 += 1
                int128_t var_190_2 = xmm0_7
                int128_t var_180_2 = eax_4[3]
                int128_t var_170_2 = eax_4[4]
                int128_t var_160_2 = eax_4[5]
            while (ebx_2 s< esi_1)
            
            edx = var_138
            arg3 = var_12c
    else
        esi_1 = arg5
        int32_t ebx_1 = 0
        
        if (esi_1 s> 0)
            do
                int32_t* var_224_1 = arg3
                arg3 = edi
                int128_t* eax_3 = sub_4bb090(&var_210, ebx_1)
                int128_t var_1a0_1 = eax_3[1]
                int128_t xmm0_2 = eax_3[2]
                var_128[ebx_1] = (*eax_3).d
                ebx_1 += 1
                int128_t var_190_1 = xmm0_2
                int128_t var_180_1 = eax_3[3]
                int128_t var_170_1 = eax_3[4]
                int128_t var_160_1 = eax_3[5]
            while (ebx_1 s< esi_1)
            
            edx = var_138
            arg3 = var_12c
    void* eax_5 = nullptr
    void* var_12c_1
    
    if (esi_1 s<= 0)
    label_472dc5:
        void* esi_2 = esi_1 - 1
        
        if (esi_1 - 1 s< 0)
            esi_2 = nullptr
        
        var_12c_1 = esi_2
    else
        while (not(var_128[eax_5] f> *arg3))
            eax_5 += 1
            
            if (eax_5 s>= esi_1)
                goto label_472dc5
        
        void* ecx_3 = nullptr
        
        if (eax_5 - 1 s>= 0)
            ecx_3 = eax_5 - 1
        
        var_12c_1 = ecx_3
    
    void* eax_6 = sub_452b90(*(edx + 0x3c))
    int32_t edx_3 = 0
    int32_t* ebx_3 = nullptr
    int32_t var_144_1 = 0
    int32_t var_13c_1 = 0
    int32_t ecx_2 = *(eax_6 + (var_134 << 2) + 0x29c)
    int32_t* var_140_1 = 0xffffffff
    int32_t* var_130_1 = 0xffffffff
    int32_t* esi_3
    
    if (ecx_2 == 0)
        esi_3 = nullptr
    else
        esi_3 = sub_452cc0(ecx_2)
        edx_3 = 0
    
    var_134 = esi_3
    eax_2 = Unlock(&var_134)
    int32_t* edi_1 = var_134
    
    while (esi_3 != edi_1)
        if (esi_3 == 0)
            var_224_4 = "Tiles::TileIt::operator *"
            var_228_3 = 0x2ac
            ecx_11 = &data_5e3f90
            goto label_472fa2
        
        if (var_138 != esi_3)
            eax_2 = sub_46ce40(esi_3)
            
            if (eax_2 == 1)
                if (var_140_1 == 0xffffffff || ebx_3 s< var_140_1)
                    var_140_1 = ebx_3
                
                eax_2 = var_130_1
                
                if (eax_2 == 0xffffffff || ebx_3 s> eax_2)
                    var_130_1 = ebx_3
                
                var_144_1 += 1
            
            edx_3 = var_13c_1 + 1
            ebx_3 += 1
            var_13c_1 = edx_3
        
        int32_t ecx_6 = esi_3[0x10]
        
        if (ecx_6 != 0)
            eax_2 = sub_452cc0(ecx_6)
            edx_3 = var_13c_1
            esi_3 = eax_2
        else
            esi_3 = nullptr
    
    if (*(eax_6 + 0x664) == 0)
        void* edx_6 = edx_3 - var_144_1
        
        if (var_12c_1 s< edx_6)
            edx_6 = var_12c_1
        
        *arg6 = 0
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return edx_6
    
    void* ecx_7 = var_12c_1
    void* eax_13
    bool cond:2_1
    
    if (ecx_7 s< var_140_1)
        cond:2_1 = ecx_7 s> var_130_1
    else
        int32_t eax_11
        int32_t edx_5
        edx_5:eax_11 = sx.q(var_140_1 + 2 + var_130_1)
        
        if (ecx_7 s< (eax_11 - edx_5) s>> 1)
            eax_13.b = var_140_1 s> var_130_1
            *arg6 = eax_13.b
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return var_140_1
        
        cond:2_1 = ecx_7 s> var_130_1
        
        if (ecx_7 s<= var_130_1)
            ecx_7 = var_130_1 + 1
            cond:2_1 = ecx_7 s> var_130_1
    
    eax_13.b = cond:2_1
    *arg6 = eax_13.b
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return ecx_7
}
