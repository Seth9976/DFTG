// 函数名称: sub_4d2170
// 虚拟地址: 0x4d2170
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4d2170(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ffb8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_64 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t* result_1
    int32_t* result_2 = result_1
    char* var_20
    int32_t* var_68_1 = &var_20
    int32_t** eax_5 = sub_4889e0(&result_1, arg3, 3)
    int32_t var_8_1 = 0
    int32_t* ebx_1 = *var_20
    int32_t esi_2 = ebx_1[4] * arg4 + arg5
    
    if (esi_2 s>= ebx_1[0xf])
        sub_489550(eax_5, &data_5b2591, "imageIndex < pTextureData->imageCount", 
            "d:\ax\trunk\ax2017\engine\texture.cpp", 0x13f, "TextureLoad")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char ecx_1 = arg5.b
    uint32_t eax_7 = *ebx_1 u>> ecx_1
    void** esi_4 = (esi_2 << 4) + ebx_1[0x12]
    
    if (eax_7 u< 1)
        eax_7 = 1
    
    uint32_t eax_9 = ebx_1[1] u>> ecx_1
    int32_t* ecx_2 = data_114ec78
    int32_t var_18 = 1
    
    if (eax_9 u< 1)
        eax_9 = 1
    
    int32_t var_1c
    uint32_t (* eax_11)[0x4] = (*(*ecx_2 + 0x18))(arg3, arg2, arg5, arg4, &var_1c, &var_18)
    uint32_t (* edi_2)[0x4] = eax_11
    
    if (edi_2 == 0)
        sub_489550(eax_11, &data_5b2591, "pBits", "d:\ax\trunk\ax2017\engine\texture.cpp", 0x14a, 
            "TextureLoad")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* eax_13 = *(var_20 + 0x18)
    var_20 = eax_13
    int32_t* ebx_2
    
    if (eax_13 != 0 && *eax_13 != 0)
        if (var_18 != 1)
            sub_489550(eax_13, &data_5b2591, "divisor == 1", "d:\ax\trunk\ax2017\engine\texture.cpp", 
                0x150, "TextureLoad")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_14 = sub_5235a0(eax_13, ebx_1[1], *ebx_1, ebx_1[6])
        sub_579300(edi_2, *(var_20 + 0xc), eax_14)
        ebx_2 = arg3
    else
        int32_t* eax_21
        
        if (ebx_1[5] != 8)
            eax_21 = ebx_1[6]
            
            if (eax_21 s< 0xd || (eax_21 s> 0x12 && eax_21 != 0x15))
                int32_t ecx_15 = var_1c
                
                if (ecx_15 == 0)
                    sub_489550(eax_21, &data_5b2591, "destPitch != 0", 
                        "d:\ax\trunk\ax2017\engine\texture.cpp", 0x187, "TextureLoad")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                uint32_t var_50_1 = eax_7
                int32_t var_48_1 = ecx_15
                void* ecx_16 = *esi_4
                uint32_t (* var_54)[0x4] = edi_2
                uint32_t var_4c_1 = eax_9
                int32_t* var_44_1 = eax_21
                int32_t* eax_22 = sub_4c2e40(ecx_16)
                ebx_2 = arg3
                uint32_t (* edi_3)[0x4] = eax_22
                int32_t* eax_23
                int32_t ecx_18
                eax_23, ecx_18 = sub_4d0f30(eax_22, edi_3, ebx_2, nullptr, *esi_4, esi_4[2])
                int32_t var_74_3 = var_18
                
                if (sub_524c50(eax_23, &var_54, ecx_18, edi_3, *esi_4) == 0)
                    char* eax_25 = ebx_2[8]
                    char* const ecx_19 = &data_5b2591
                    
                    if (eax_25 != 0)
                        ecx_19 = eax_25
                    
                    char* const var_68_9 = ecx_19
                    sub_4892e0("Failed to read texture %s")
                
                if (edi_3 != 0)
                    _aligned_free_base(edi_3)
            else
                if (var_18 != 1)
                    sub_489550(eax_21, &data_5b2591, "divisor == 1", 
                        "d:\ax\trunk\ax2017\engine\texture.cpp", 0x182, "TextureLoad")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                ebx_2 = arg3
                sub_4d0f30(eax_21, edi_2, ebx_2, nullptr, *esi_4, esi_4[2])
        else
            if (var_18 != 1)
                sub_489550(eax_13, &data_5b2591, "divisor == 1", 
                    "d:\ax\trunk\ax2017\engine\texture.cpp", 0x156, "TextureLoad")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (var_1c == 0)
                sub_489550(eax_13, &data_5b2591, "destPitch != 0", 
                    "d:\ax\trunk\ax2017\engine\texture.cpp", 0x157, "TextureLoad")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t* eax_20 = sub_5234e0(eax_7, ebx_1[6])
            int32_t* var_30_1 = eax_20
            
            if (var_1c != eax_20)
                char* ecx_11 = nullptr
                var_20 = nullptr
                int32_t i_1 = 0
                
                if (ebx_1[1] s> 0)
                    int32_t i
                    
                    do
                        sub_4d0f30(eax_20, edi_2, arg3, ecx_11, eax_20, esi_4[2])
                        i = i_1 + 1
                        eax_20 = var_30_1
                        ecx_11 = var_20 + eax_20
                        edi_2 += var_1c
                        var_20 = ecx_11
                        i_1 = i
                    while (i s< ebx_1[1])
                
                ebx_2 = arg3
            else
                eax_21 = eax_20 * eax_9
                void* ecx_10 = *esi_4
                
                if (eax_21 != ecx_10)
                    sub_489550(eax_21, &data_5b2591, "mipHeight * sourcePitch == pImage->imageSize", 
                        "d:\ax\trunk\ax2017\engine\texture.cpp", 0x15d, "TextureLoad")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                ebx_2 = arg3
                sub_4d0f30(eax_21, edi_2, ebx_2, nullptr, ecx_10, esi_4[2])
    
    if (sub_498220(&performanceCount_1) s> 0x64)
        char* eax_17 = ebx_2[8]
        char* const esi_5 = &data_5b2591
        
        if (eax_17 != 0)
            esi_5 = eax_17
        
        uint32_t var_68_4 = sub_498220(&performanceCount_1)
        char* const var_6c_2 = esi_5
        sub_4892e0("slow loading texture %s %d ms")
    
    (*(*data_114ec78 + 0x1c))(ebx_2, arg2, arg5, arg4)
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
