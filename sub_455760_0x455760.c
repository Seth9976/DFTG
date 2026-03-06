// 函数名称: sub_455760
// 虚拟地址: 0x455760
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_455760(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59dc99
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_7c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_30 = arg1
    int32_t var_38 = 0
    int32_t eax_4 = data_632834
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(data_aca1ec + 0x18))) * 0.00048828125f
    
    if (eax_4 u>= data_63282c)
        sub_489550(eax_4, &data_5b2591, "mUsedCount < mMaxSize", 
            "d:\ax\trunk\ax2017\engine\dataarray.h", 0xf4, 
            "DataArray<struct SimpleEffect>::DataArrayAlloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx = data_632830
    int32_t edx = data_632828
    
    if (ecx u> edx)
        sub_489550(eax_4, &data_5b2591, "mFreeListHead <= mMaxUsedCount", 
            "d:\ax\trunk\ax2017\engine\dataarray.h", 0xf5, 
            "DataArray<struct SimpleEffect>::DataArrayAlloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t esi = data_632824
    int32_t eax_5
    
    if (ecx != edx)
        edx = ecx
        eax_5 = *(esi + ecx * 0x1c + 0x18)
    else
        eax_5 = edx + 1
        data_632828 = eax_5
    
    data_632830 = eax_5
    int32_t edi_1 = edx * 7
    *(esi + (edi_1 << 2)) = zx.o(0)
    *(esi + (edi_1 << 2) + 0x10) = 0
    *(esi + (edi_1 << 2) + 0x18) = data_632838 << 0x10 | edx
    int32_t eax_12 = data_632838 + 1
    
    if (eax_12 == 0x10000)
        eax_12 = 1
    
    int32_t* ecx_1 = var_30
    data_632834 += 1
    data_632838 = eax_12
    *(esi + (edi_1 << 2) + 0x10) = xmm1_2
    *(esi + (edi_1 << 2) + 8) = *ecx_1
    *(esi + (edi_1 << 2) + 0xc) = ecx_1[1]
    int32_t* eax_15 = data_126c0d0
    *(esi + (edi_1 << 2) + 0x14) = xmm1_2
    
    if (eax_15[1] != 0x23)
        sub_489550(eax_15, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
            0xdd2, "PlayEffectAt")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    *(esi + (edi_1 << 2)) = 2
    uint32_t eax_16 = sub_4d93c0(eax_15)
    *(esi + (edi_1 << 2) + 4) = eax_16
    sub_4d9540(eax_16, "appear", eax_16, 1)
    int32_t edi_2 = data_6327d4
    char* result
    
    if (edi_2 != 0xffffffff && edi_2 != 0)
        result = sub_46a6a0()
        
        if (result == 0)
            char var_28_1 = 1
            
            if (data_6326b0 == result)
                struct InputHitResult::HitResult::VTable* var_6c
                struct InputHitResult::HitResult::VTable** eax_17 = sub_420280(&var_6c, var_30)
                int32_t var_68
                
                if (var_68 == 1)
                    int32_t var_64
                    
                    if (var_64 == 0)
                        sub_489550(eax_17, &data_5b2591, "id != DATAID_NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                            "DataArray<struct RollGfx>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    uint32_t edx_2 = zx.d(var_64.w)
                    
                    if (edx_2 u< data_62d6c8)
                        eax_17 = edx_2 * 0x8ac + data_62d6c4
                    
                    if (edx_2 u>= data_62d6c8 || eax_17[0x22a] != var_64)
                        sub_489550(eax_17, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                            "DataArray<struct RollGfx>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    struct InputHitResult::HitResult::VTable*** esi_2 = edx_2 * 0x8ac + data_62d6c4
                    int32_t eax_19 = sub_425f70(edi_2)
                    eax_17 = *esi_2
                    
                    if (eax_17 != 0)
                        if (eax_17 == 1)
                            eax_17 = zx.d(var_28_1)
                            
                            if (esi_2[6] == eax_19)
                                eax_17 = nullptr
                            
                            var_28_1.d = eax_17
                    else if (esi_2[0xf] == eax_19)
                        var_28_1 = eax_17.b
                
                if (var_68 != 2)
                label_455b14:
                    result = var_28_1.d
                label_455b17:
                    
                    if (result.b != 0)
                        data_126bd88
                        data_6327d4 = 0xffffffff
                        sub_4c5ce0()
                else
                    int32_t var_5c
                    
                    if (var_5c == 0)
                        sub_489550(eax_17, &data_5b2591, "id != DATAID_NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                            "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    uint32_t edx_3 = zx.d(var_5c.w)
                    int32_t esi_3
                    
                    if (edx_3 u< data_63e5ac)
                        esi_3 = data_63e5a8
                        eax_17 = edx_3 * 0x1418
                    
                    if (edx_3 u>= data_63e5ac || *(eax_17 + esi_3 + 0x1410) != var_5c)
                        sub_489550(eax_17, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                            "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    void* ecx_10 = edx_3 * 0x1418 + esi_3
                    char* const esi_4 = *(ecx_10 + 0xfb0)
                    
                    if (esi_4 == 0)
                        char* eax_21 = *(ecx_10 + 0xfd8)
                        esi_4 = &data_5b2591
                        
                        if (eax_21 != 0)
                            esi_4 = eax_21
                    
                    int32_t eax_22 = *(ecx_10 + 0x109c)
                    sub_48a2c0(&var_30, "btn_zoomOppDev")
                    int32_t var_14_1 = 0
                    int32_t var_38_1 = 1
                    char var_34_1 = 1
                    int32_t edi_3 = 1
                    char eax_23 = sub_48a4a0(&var_30, esi_4)
                    char* var_2c
                    char eax_24
                    
                    if (eax_23 == 0)
                        sub_48a2c0(&var_2c, "btn_zoomOppSettle")
                        var_34_1 = 3
                        edi_3 = 3
                        eax_24 = sub_48a4a0(&var_2c, esi_4)
                    
                    char var_21_1
                    char eax_25
                    
                    if (eax_23 != 0 || eax_24 != 0)
                        eax_25 = var_34_1
                        var_21_1 = 1
                    else
                        var_21_1 = eax_24
                        eax_25 = 3
                    
                    if ((eax_25 & 2) != 0)
                        int32_t var_38_2 = edi_3 & 0xfffffffd
                        int32_t var_14_2 = 1
                        
                        if (data_aca1f4 != 0)
                            char* eax_26 = var_2c
                            
                            if (eax_26 != 0 && *eax_26 != 0)
                                char* eax_27 = sub_48a080(&var_2c)
                                int32_t temp1_1 = *(eax_27 + 4)
                                *(eax_27 + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
                    
                    int32_t var_14_3 = 2
                    
                    if (data_aca1f4 != 0)
                        int32_t* eax_28 = var_30
                        
                        if (eax_28 != 0 && *eax_28 != 0)
                            char* eax_29 = sub_48a080(&var_30)
                            int32_t temp0_1 = *(eax_29 + 4)
                            *(eax_29 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_4984f0(eax_29, *(eax_29 + 0xc) + 0x10)
                    
                    int32_t var_14_4 = 0xffffffff
                    
                    if (var_21_1 != 0)
                        char edx_10 = 0
                        
                        if (eax_22 + 1 != edi_2)
                            edx_10 = var_28_1
                        
                        result.b = edx_10
                        goto label_455b17
                    
                    sub_48a2c0(&var_30, "btn_back")
                    result = sub_48a4a0(&var_30, esi_4)
                    char var_21_2 = result.b
                    int32_t var_14_5 = 3
                    
                    if (data_aca1f4 != 0)
                        int32_t* ecx_23 = var_30
                        
                        if (ecx_23 != 0 && *ecx_23 != 0)
                            result = sub_48a080(&var_30)
                            int32_t temp2_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_4984f0(result, *(result + 0xc) + 0x10)
                            
                            result.b = var_21_2
                    
                    int32_t var_14_6 = 0xffffffff
                    
                    if (result.b == 0)
                        goto label_455b14
    
    data_632a48 = 0
    result.b = 0
    data_632a44 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
