// 函数名称: sub_53b920
// 虚拟地址: 0x53b920
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_53b920(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2df6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_2b0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 u> 0x10)
        sub_489550(&ExceptionList, &data_5b2591, 
            "vertexFormat >= 0 && vertexFormat < VERTEX_FORMAT_COUNT", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x4f3, "Dx11GetInputLayout")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_4 = data_1151ae8
    int32_t* ecx = *(eax_4 + 0x54)
    
    if (ecx == 0)
        sub_489550(eax_4, &data_5b2591, "gDx11Interface->boundVertexShader", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x4f5, "Dx11GetInputLayout")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_5 = xcf5fba64::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >::operator[]::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >(
        ecx, 0)
    void* ppReflector_1 = &sub_53e610(data_1151ae8 + 0x38, eax_5)[arg1 + 0x81]
    void* ppReflector = ppReflector_1
    int32_t result = *ppReflector_1
    
    if (result == 0)
        void* eax_9 = *(sub_4f0370(*(data_1151ae8 + 0x54)) + 8)
        uint32_t SrcDataSize = *(eax_9 + 0x20)
        char* pSrcData = *(eax_9 + 0x28)
        
        if (SrcDataSize == 0)
            result = 0
        else
            char* const ecx_7 = sub_533610(arg1)
            int32_t ebx
            ebx:1.b = 0
            int32_t edi_1 = 0
            char* const var_1e0 = ecx_7
            ebx.b = 0
            char var_1d5_1 = 0
            char var_1d6_1 = 0
            
            if (*(ecx_7 + 8) != 0)
                int32_t i = 0
                void var_1d0
                void* eax_11 = &var_1d0
                
                do
                    int32_t edx_3 = i * 0xf
                    i += 1
                    int16_t* edx_4 = *(ecx_7 + 4) + (edx_3 << 2)
                    bool cond:0_1 = i s>= *(var_1e0 + 8)
                    *(eax_11 + 8) = 0
                    
                    if (cond:0_1)
                        i = 0xffffffff
                    
                    *(eax_11 + 0xc) = zx.d(*edx_4)
                    *(eax_11 + 0x10) = 0
                    *(eax_11 + 0x14) = 0
                    int32_t ecx_11 = *(edx_4 + 0xc)
                    
                    if (ecx_11 == data_12bad50)
                        uint32_t ecx_12 = zx.d(ebx.b)
                        ebx.b += 1
                        *(eax_11 - 4) = "POSITION"
                        *eax_11 = ecx_12
                        *(eax_11 + 4) = 6
                    else if (ecx_11 == data_12bad54)
                        uint32_t ecx_13 = zx.d(ebx.b)
                        ebx.b += 1
                        *(eax_11 - 4) = "POSITION"
                        *eax_11 = ecx_13
                        *(eax_11 + 4) = 0x10
                    else if (ecx_11 == data_12bad58)
                        uint32_t ecx_14 = zx.d(ebx.b)
                        ebx.b += 1
                        *(eax_11 - 4) = "POSITION"
                        *eax_11 = ecx_14
                        *(eax_11 + 4) = 0x12
                    else if (ecx_11 == data_12bad5c)
                        uint32_t ecx_15 = zx.d(ebx:1.b)
                        ebx:1.b += 1
                        *(eax_11 - 4) = "NORMAL"
                        *eax_11 = ecx_15
                        *(eax_11 + 4) = 6
                    else if (ecx_11 == data_12bad60)
                        *(eax_11 - 4) = "TANGENT"
                        ebx:1.b += 1
                        *(eax_11 + 4) = 6
                        *eax_11 = 0
                    else if (ecx_11 == data_12bad64)
                        *(eax_11 - 4) = "BINORMAL"
                        ebx:1.b += 1
                        *(eax_11 + 4) = 6
                        *eax_11 = 0
                    else if (ecx_11 == data_12bad70)
                        edx_4.b = var_1d5_1
                        uint32_t ecx_16 = zx.d(edx_4.b)
                        edx_4.b += 1
                        *(eax_11 - 4) = "COLOR"
                        *eax_11 = ecx_16
                        *(eax_11 + 4) = 0x57
                        var_1d5_1 = edx_4.b
                    else if (ecx_11 == data_12bad74)
                        edx_4.b = var_1d5_1
                        uint32_t ecx_17 = zx.d(edx_4.b)
                        edx_4.b += 1
                        *(eax_11 - 4) = "COLOR"
                        *eax_11 = ecx_17
                        *(eax_11 + 4) = 2
                        var_1d5_1 = edx_4.b
                    else if (ecx_11 == data_12bad78)
                        edx_4.b = var_1d6_1
                        uint32_t ecx_18 = zx.d(edx_4.b)
                        edx_4.b += 1
                        *(eax_11 - 4) = "TEXCOORD"
                        *eax_11 = ecx_18
                        *(eax_11 + 4) = 0x10
                        var_1d6_1 = edx_4.b
                    else if (ecx_11 != data_12bad7c)
                        if (ecx_11 != data_12bad68)
                            if (ecx_11 != data_12bad6c)
                                if (ecx_11 != data_12badc0 && ecx_11 != data_12badc4
                                        && ecx_11 != data_12badc8)
                                    sub_489550(eax_11, &data_5b2591, "Halt", 
                                        "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x583, 
                                        "Dx11GetInputLayout")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                sub_489550(eax_11, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x57f, 
                                    "Dx11GetInputLayout")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            *(eax_11 - 4) = "BLENDWEIGHT"
                            *(eax_11 + 4) = 0x1c
                        else
                            *(eax_11 - 4) = "BLENDINDICES"
                            *(eax_11 + 4) = 0x1e
                        
                        *eax_11 = 0
                    else
                        edx_4.b = var_1d6_1
                        uint32_t ecx_19 = zx.d(edx_4.b)
                        edx_4.b += 1
                        *(eax_11 - 4) = "TEXCOORD"
                        *eax_11 = ecx_19
                        *(eax_11 + 4) = 0x12
                        var_1d6_1 = edx_4.b
                    
                    edi_1 += 1
                    eax_11 += 0x1c
                    
                    if (edi_1 s>= 0xf)
                        sub_489550(eax_11, &data_5b2591, "element < MAX_DESC_ELEMENTS - 1", 
                            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x587, 
                            "Dx11GetInputLayout")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    ecx_7 = var_1e0
                while (i != 0xffffffff)
            
            void* ppReflector_4 = ppReflector
            int32_t* eax_13 = *(data_1151ae8 + 4)
            void var_1d4
            
            if ((*(*eax_13 + 0x2c))(eax_13, &var_1d4, edi_1, pSrcData, SrcDataSize, ppReflector_4)
                    s>= 0)
                result = *ppReflector_4
            else
                char* const ecx_21 = &data_5b2591
                char* eax_17 = *(*(data_1151ae8 + 0x54) + 0x20)
                
                if (eax_17 != 0)
                    ecx_21 = eax_17
                
                char* const var_2b4_2 = ecx_21
                sub_4892e0("dx11 CreateInputLayout failed on %s")
                ppReflector = nullptr
                HRESULT eax_18 = D3DReflect(pSrcData, SrcDataSize, &data_5a9270, &ppReflector)
                
                if (eax_18 s< 0)
                    sub_489550(eax_18, &data_5b2591, "SUCCEEDED(hr)", 
                        "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x592, 
                        "Dx11GetInputLayout")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                void* ppReflector_2 = ppReflector
                void var_2a0
                (*(*ppReflector_2 + 0xc))(ppReflector_2, &var_2a0)
                char* esi_1 = &data_5b2591
                var_1e0 = &data_5b2591
                int32_t edi_2 = 0
                int32_t var_8_1 = 0
                int32_t var_28c
                char* eax_23
                
                if (var_28c s<= 0)
                    eax_23 = esi_1
                else
                    do
                        void* ppReflector_3 = ppReflector
                        int32_t var_208
                        int32_t eax_19 = (*(*ppReflector_3 + 0x1c))(ppReflector_3, edi_2, &var_208)
                        
                        if (eax_19 s< 0)
                            sub_489550(eax_19, &data_5b2591, "SUCCEEDED(hr)", 
                                "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x59d, 
                                "Dx11GetInputLayout")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        int32_t var_204
                        int32_t var_2b4_6 = var_204
                        int32_t var_2b8_4 = var_208
                        var_8_1.b = 1
                        char* ecx_24 = &data_5b2591
                        char* eax_21 = *sub_48a9d0(&pSrcData, "%s%d ")
                        
                        if (eax_21 != 0)
                            ecx_24 = eax_21
                        
                        sub_48a670(&var_1e0, ecx_24)
                        var_8_1.b = 2
                        
                        if (data_aca1f4 != 0)
                            char* pSrcData_1 = pSrcData
                            
                            if (pSrcData_1 != 0 && *pSrcData_1 != 0)
                                char* eax_22 = sub_48a080(&pSrcData)
                                int32_t temp1_1 = *(eax_22 + 4)
                                *(eax_22 + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                                    pSrcData = &data_5b2591
                        
                        edi_2 += 1
                        var_8_1.b = 0
                    while (edi_2 s< var_28c)
                    
                    esi_1 = var_1e0
                    
                    eax_23 = esi_1 != 0 ? esi_1 : &data_5b2591
                
                char* var_2b4_8 = eax_23
                sub_4892e0("shader need params: %s")
                int32_t var_8_2 = 3
                
                if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_24 = sub_48a080(&var_1e0)
                    int32_t temp0_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_24, *(eax_24 + 0xc) + 0x10)
                
                result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
